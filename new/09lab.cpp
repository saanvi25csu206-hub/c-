#include <iostream>
using namespace std;

class ElectricityBill
{
public:

    // 1. Only units
    void calculateBill(int units)
    {
        float bill = units * 5;
        cout << "Bill (₹5 per unit) = " << bill << endl;
    }

    // 2. Units + rate
    void calculateBill(int units, float rate)
    {
        float bill = units * rate;
        cout << "Bill (custom rate) = " << bill << endl;
    }

    // 3. Units + rate + fixed charge
    void calculateBill(int units, float rate, float fixedCharge)
    {
        float bill = (units * rate) + fixedCharge;
        cout << "Bill (with fixed charge) = " << bill << endl;
    }
};

int main()
{
    ElectricityBill e;

    e.calculateBill(100);            // case 1
    e.calculateBill(100, 6.5);       // case 2
    e.calculateBill(100, 6.5, 50);   // case 3

    return 0;
}