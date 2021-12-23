#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int main()
{
    char chuoi[50];
    char tach[50];
    cout<<"Nhap vao chuoi ki tu: ";
    gets(chuoi);
    cout<<"Nhap tu can tach: ";
    cin>>tach;
{
    cout<<"Chuoi vua tach: "<<strstr(chuoi,tach);
}
}
