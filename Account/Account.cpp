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

private:
	int mBalance{};
};
