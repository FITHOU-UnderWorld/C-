#include<iostream>
using namespace std;
void nhapso(int &a, int &b)
{
    cout<<"\nNhap so a: ";
    cin>>a;
    cout<<"\nNhap so b: ";
    cin>>b;
}
void kt(int a, int b, int ucln)
{
    while(a!=b)
        if(a>b)
        a=a-b;
        else
        b=b-a;
    ucln=a;
    if(ucln==1)
    cout<<"A va B la hai so nguyen to cung nhau: ";
    else
        cout<<"A va B vua nhap khong phai hai so nguyen to cung nhau ";

}
int main()
{
    int a,b,ucln;
    nhapso(a,b);
    kt(a,b,ucln);
}
