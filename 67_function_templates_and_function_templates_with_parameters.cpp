/*
    67. C++ Function Templates & Function Templates with Parameters
*/

#include <iostream>
using namespace std;

// float funAverage(int a, int b)
// {
//     float avg = (a + b) / 2.0;
//     return avg;
// }

// float funAverage2(int a, float b)
// {
//     float avg = (a + b) / 2.0;
//     return avg;
// }

template <class T>

void awapp(T &a, T &b)
{
    T temp = a;
    a = b;
    b = temp;
}

template <class T1, class T2>

float funAverage(T1 a, T2 b)
{
    float avg = (a + b) / 2.0;
    return avg;
}

int main()
{
    float a;
    a = funAverage(5, 2);
    printf("The average of these numbers is %.3f\n", a);

    int x = 5, y = 7;
    awapp(x, y);
    cout << x << endl;
    cout << y << endl;

    return 0;
}