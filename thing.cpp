#include<bits/stdc++.h>
using namespace std;
template <class T>
class Calculator
{
private:
        T num1, num2;
public:
        Calculator(T n1, T n2)
        {
                num1 = n1;
                num2 = n2;
        }
        void displayResult()
        {
                cout << "Your numbers are: " << num1 << " and " << num2 << "." << endl;
                cout << "Adding is: " << add() << endl;
                cout << "Minus is: " << subtract() << endl;
                cout << "Multiply is: " << multiply() << endl;
                cout << "Divide is: " << divide() << endl;
        }
        T add() { return num1 + num2; }
        T subtract() { return num1 - num2; }
        T multiply() { return num1 * num2; }
        T divide() { return num1 / num2; }
};
int main()
{
        Calculator<int> intCalc(2, 1);
        Calculator<float> floatCalc(2.4, 1.2);
        cout << "Int results:" << endl;
        intCalc.displayResult();
        cout << endl << "Float results:" << endl;
        floatCalc.displayResult();
        return 0;
}
// this is nothing that big, just posted it here to make the guy rage
