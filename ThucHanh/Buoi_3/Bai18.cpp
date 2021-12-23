#include<iostream>
#include<iomanip>
#include <math.h>
using namespace std;
int main()
{
    int a[100];
int i,n,x,cnt=0;
//nhập mảng xuất mảng
    cout<<"Nhap mang:";
    cin>>n;

for(i=0;i<n;i++)
{
    cout<<"a["<<i<<"]:";
cin>>a[i];
}

cout<<"\nMang da nhap:"<<endl;
for(i=0;i<n;i++)
    {
     cout<<setw(6)<<a[i];
    }
{
//nhập X tìm vị trí và số lần xuất hiện
    {
        cout<<"\nNhap vao so nguyen X:"; cin>>x;
     {
    for(int i=0;i<n;i++)
        if(a[i]==x)
            cnt++;
     }
    cout<<"\nSo lan xuat hien cua "<<x<<" la: "<<cnt;
    cout<<"\nVi tri xuat hien cua : "<<x<<" la:";
           for(int i=0;i<n;i++)
        if(a[i]==x)
            cout<<setw(6)<<i;
    }
//xóa số 0 trong mảng
            {
                        for(i=0;i<n;i++)
                        if(a[i]==0)
                        a[i]=a[i+1];
                        n=n-1;
                    cout<<"\nMANG SAU KHI XOA SO 0:";
                    for(i=0;i<n;i++)
                        if(a[i]!=0)
                cout<<setw(6)<<a[i];
            }
}

}
