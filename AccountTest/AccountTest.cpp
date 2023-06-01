#include "pch.h"
#include "../Account/Account.cpp"

class AccountFixture : public testing::Test
{
public:
	Account account{ 10000 };
};

TEST_F(AccountFixture, CreateAccountInit10000won) {
  EXPECT_EQ(account.getBalance(), 10000);
}

TEST_F(AccountFixture, Deposit) {
	account.deposit(500);
	EXPECT_EQ(account.getBalance(), 10500);
}

TEST_F(AccountFixture, WithDraw) {
	account.withDraw(600);
	EXPECT_EQ(account.getBalance(), 9400);
}

TEST_F(AccountFixture, ComplexInterest) {
	account.setInterest(5);
	account.applyInterest();
	EXPECT_EQ(account.getBalance(), 10500);
}

TEST_F(AccountFixture, ComplexInterestFewYear) {
	account.setInterest(10);
	EXPECT_EQ(account.predictInterest(3), 13310);
}
