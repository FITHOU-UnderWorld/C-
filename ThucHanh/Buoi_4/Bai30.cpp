#include<iostream>
using namespace std;
int songuyento(int n)
{
 int d=0,i;
 for(int i=2;i<=n/2;i++)
    if(n%i==0)
        d++;
 {
     if(d==0)
     return 1;
     else
     return 0;
 }
 return d;
}
int main()
{
    int n,s=0;
    cout<<"\nNhap n: "; cin>>n;
    songuyento(n);
    if(songuyento(n)==1)
        cout<<"\nN la so nguyen to: ";
    else
        cout<<"\nN khong phai la so nguyen to: ";
    cout<<"\nCac so nguyen to nho hon n la : ";
    for(int i=2; i<n;i++)
    {
        if(songuyento(i)!=0)
        {
            cout<<" "<<i;
            s=s+i;
        }
    }
    cout<<"\nTong la: "<<s;
    return 0;
}
