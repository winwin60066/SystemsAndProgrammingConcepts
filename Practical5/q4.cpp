#include <iostream>
using namespace std;

float topUpWallet( float topUpAmount , float &balance )
{
if (topUpAmount > 50 ){
// calculate cashback → 0.05 * amount
    float cashback = 0.05*topUpAmount;
// add cashback to amount
    topUpAmount += cashback;
}  
// add amount to balance
    balance += topUpAmount;
    return balance;
}

int main()
{

    float balance = 0;
    float topUpAmount = 0;

    cout << "Enter your top-up amount: RM ";
    cin >> topUpAmount;
// call topUpWallet by passing in topUpAmount and walletBalance
    topUpWallet(topUpAmount, balance);
// display new wallet balance
    cout << "New wallet balance: RM " << balance << endl;

return 0;
}
