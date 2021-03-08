#include <iostream>
using namespace std;

void f(int* a)
{
    cout << sizeof(a) << endl;
}

int main()
{
    int a[5];
    cout << sizeof(a) << endl;
    f(a);
}
//mang a trong ham f co kich thuoc nho hon kich thuoc mang a trong ham main
