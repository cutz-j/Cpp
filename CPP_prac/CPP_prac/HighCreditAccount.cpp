#include "HighCreditAccount.h"
#include "Exception.h"

CreditAccount::CreditAccount(int n, int b, Str cus, int i, int l)
	: NormalAccount(n, b, cus, i), level(l) {}

void CreditAccount::deposit(int money) {
	if (money < 0)
		throw MinusException(money);
	NormalAccount::deposit(money);
	Account::deposit(money * (level / 100.0));
}
