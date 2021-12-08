#include<bits/stdc++.h>
using namespace std;
void nhap(int a[],int n)
{
    for(int i=0; i<n; i++)
    {
        cout<<"a["<<i<<"]:";
        cin>>a[i];
    }
}
void xuat(int a[],int n)
{
    for(int i=0; i<n; i++)
    {
        cout<<a[i]<<"\t";
    }
}
void xoapt(int a[],int &n,int k)
{
    for(int i=k; i<n; i++)
    {
        a[i]=a[i+1];
    }
    n--;
}
void xoachia3(int a[],int &n)
{
    for(int i=0; i<n;)
    {
        if(a[i]%3==0)
        {
            xoapt(a,n,i);
        }
        else
        {
            i++;
        }
    }
}
int demPhanTu(int a[], int n)
{
    int dem=1;
    int t;
    for(int i=1; i<n; i++)
    {
        for(int j=0; j<i; j++)
        {
            if(a[j]==a[i])
            {
                t=0;
                break;
            }
            else
            {
                t=1;
            }
        }
        if(t==1)
        {
            dem++;
        }
    }
    cout<<dem;
}
int main()
{
    int a[50],n,k;
    cout<<"Nhap n: ";
    cin>>n;
    nhap(a,n);
    xuat(a,n);
    cout<<"\nNhap vao vi tri can xoa: ";
    cin>>k;
    xoapt(a,n,k);
    xuat(a,n);
    cout<<"\nXoa phan tu chia het cho 3: "<<endl;
    xoachia3(a,n);
    xuat(a,n);
    cout<<"\nSo luong phan tu khac nhau trong mang: ";
    demPhanTu(a,n);
}
