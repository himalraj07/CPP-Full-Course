/*
    30_a. Parameterized and Default Constructors in C++
*/

#include <iostream>
using namespace std;
class Complex
{
    int a, b;

public:
    Complex(int, int); // Construction declaration
    void printNumber()
    {
        cout << "Your number is " << a << "+" << b << "i" << endl;
    }
};
Complex::Complex(int x, int y) // --> This is a parameterized constructor as it accepts two parameters
{
    a = x;
    b = y;
    // cout<<"Hello World\n";
}
int main()
{
    // Implicit call
    Complex a(4, 6);
    a.printNumber();
    // Explicit call
    Complex b = Complex(5, 7);
    b.printNumber();
    return 0;
}