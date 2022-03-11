#include <iostream>
#include<windows.h>
using namespace std;

int main()
{
    SetConsoleOutputCP(1251);
    int a,b,c,d;
 cout<<"Add 2 numbers\n";
 cout<<"a=";
 cin>>a;
 cout<<"b=";
 cin>>b;
 c=a+b;
 d=a-b;
 cout<<"Diff = ";
 cout<<d;
 cout<<"\n Summ = ";
 cout<<c;
    return 0;
}
