class Account
{
public:
	explicit Account(const int money) : mBalance(money)
	{
	}

	int getBalance() const
	{
		return mBalance;
	}

	void deposit(const int money)
	{
		mBalance += money;
	}

	void withDraw(const int money)
	{
		mBalance -= money;
	}

	void applyInterest()
	{
		mBalance += static_cast<int>(static_cast<float>(mBalance) * interest());
	}

	void setInterest(const int rate)
	{
		mInterest = static_cast<float>(rate) / 100.f;
	}

private:
	float interest() const
	{
		return mInterest;
	}

	int mBalance{};
	float mInterest{};
};
