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

	void complexInterest(const int percent)
	{
		mBalance += static_cast<int>(static_cast<float>(mBalance) * (static_cast<float>(percent) / 100.f));
	}

private:
	int mBalance{};
};
