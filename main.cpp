#include <iostream>

using namespace std;

int main()
{
    cout << "Enter A and B: ";
    double a, b;
    cin >> a >> b;
    cout << "A + B = " << a + b << '\n'
         << "A - B = " << a - b << '\n'
         << "A * B = " << a * b << '\n'
         << "A / B = " << a / b << '\n';
    if (a>b)
    {
        cout<<"Max = A = "<<a;
    }
    else
    {
        cout<<"Max = B = "<<b;
    }

    if (a<b)
    {
        cout<< "Min = A = "<< a;
    }
    else
    {
        cout << "Min = B = "<<b;
    }

}
