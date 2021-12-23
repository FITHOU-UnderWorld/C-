#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int main()
{
    char x,y;
    char hoten[30];
    cout<<"Ho ten:"<<endl;
    gets(hoten);
    fflush(stdin);
    cout<<"\n========================"<<endl;
    cout<<"\nHo ten da nhap: "<<hoten;
    cout<<"\nNhap ki tu X: ";
    cin>>x;
    for(int i=0;i<strlen(hoten);i++)
      if(hoten[i] == x)
         cout<<"\nKy tu: "<<x<<" xuat hien vi tri: "<<i;
   {
           cout<<"\nNhap ki tu Y:"; cin>>y;

        for(int i=0;i<strlen(hoten);i++)
      if(hoten[i] == x)
         hoten[i]=y;
       cout<<"\nChuoi sau khi thay the:"<<hoten;
    }
}
