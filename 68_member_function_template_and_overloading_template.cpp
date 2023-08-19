/*
    68. Member Function Templates & Overloading Template Functions in C++
*/

#include <iostream>
using namespace std;

template <class T>
class Himal
{
public:
    T data;
    Himal(T a)
    {
        data = a;
    }
    void display();
};

template <class T>
void Himal<T>::display()
{
    cout << data;
}

void func(int a)
{
    cout << "I am first func() " << a << endl;
}

template <class T>
void func(T a)
{
    cout << "I am templatised func() " << a << endl;
}

template <class T>
void func1(T a)
{
    cout << "I am templatised func() " << a << endl;
}

int main()
{
    // Himal<float>h(5.7);
    // Himal<char>h('c');
    // Himal<int>h(87);

    // cout<<h.data<<endl;
    // h.display();

    func(4); // Exact match takes the highest priority
    func1(4);
    return 0;
}