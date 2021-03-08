#include <iostream>
using namespace std;

char* weird_string() {
   char c[] = “123345”;
   return c;
}

int main()
{
    cout << weird_string;
}
//khong xac dinh duoc kich thuoc mang c
//mang can duoc khai bao voi dau '{}'
