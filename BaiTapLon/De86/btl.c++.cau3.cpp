#include<bits/stdc++.h>
using namespace std;
int main()
{
    char n[1];
    cout<<"Nhap vao mot ki tu: "; fflush(stdin); gets(n);
    if(n[0]>=65&&n[0]<=90)
        cout<<"Ki tu vua nhap la kt In!";
    else if(n[0]>=97&&n[0]<=122)
        cout<<"Ki tu vua nhap la kt Thuong!";
    else if(n[0]>=48&&n[0]<=57)
        cout<<"Ki tu vua nhap la kt So!";
    else
        cout<<"Ki tu vua gap la ki tu Khac!";
}
