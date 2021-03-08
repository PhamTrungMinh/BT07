#include <iostream>
using namespace std;

int count_even(int* a, const int n, const  int m)
{
    int c=0;
    for(int i=n; i<m; i++){
        if(a[i]%2==0) c++;
    }
    return c;
}

int main()
{
    int a[10];
    for(int i=0; i<10; i++) cin >> a[i];
    cout << count_even(a,0,10) << endl;
    cout << count_even(a,0,5) << " " << count_even(a,5,10);
}
