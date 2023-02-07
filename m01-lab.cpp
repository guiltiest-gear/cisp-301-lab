// Program    : m01-lab.cpp
// Author     : Jade Fox
// Due Date   : Feb 5, 2023
// Description: Calculate the amount of money Joe paid for his stocks,
//              the commission paid to his broker for the buy,
//              the amount the money he sold the stock for,
//              the commission paid to his broker for the sell,
//              and the amount of profit or loss after Joe sold
//              the stock and paid his broker (both times).

// Begin pseudocode
/*
REAL PRICE_BUY = 32.97
REAL PRICE_SELL = 33.92
INTEGER SHARES = 1000
REAL COMMISSION = 0.02
REAL PAID = SHARES * PRICE_BUY
REAL BUY_COMMISSION = PAID * COMMISSION
REAL SOLD = SHARES * PRICE_SELL
REAL SELL_COMMISSION = SOLD * COMMISSION
REAL PROFIT = (SOLD - SELL_COMMISSION) - (PAID + BUY_COMMISSION)

PRINT "Amount paid for the stock:", PAID
PRINT "Commission paid on the purchase:", PAID_COMMISSION
PRINT "Amount the stock sold for:", SOLD
PRINT "Commission paid on the sale:", SELL_COMMISSION
PRINT "Profit (loss if negative):", PROFIT
*/
// End pseudocode

// Include library for standard input and output
#include <iostream>

// Use the std namespace in the c++ stdlib
using namespace std;

// Main function
int main ()
{
    // Define the variables first
    int shares = 1000;
    float price_buy = 32.87;
    float price_sell = 33.92;
    float commission = 0.02;

    // Do math with the variables
    float paid = shares * price_buy;
    float buy_commission = paid * commission;
    float sold = shares * price_sell;
    float sell_commission = sold * commission;
    float money_in = sold - sell_commission;
    float money_out = paid + buy_commission;
    float profit = money_in - money_out;

    // Output the results
    cout << "Amount paid for the stock: $" << paid << endl;
    cout << "Commission paid for on the purchase: $" << buy_commission << endl;
    cout << "Amount the stock sold for: $" << sold << endl;
    cout << "Commission paid on the sale: $" << sell_commission << endl;
    cout << "Profit (loss if negative): $" << profit << endl;
    return 0;
}
