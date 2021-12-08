#include<bits/stdc++.h>
using namespace std;
void nhapmang(int a[][200],int &h,int &c)
{
    for(int i=0; i<h; i++)
        for(int j=0; j<c; j++)
        {
            cout<<"a["<<i<<"]["<<j<<"]:";
            cin>>a[i][j];
        }

}
void xuatmang(int a[][200],int h,int c)
{
    for(int i=0; i<h; i++)
    {
        for(int j=0; j<c; j++)
            cout<<a[i][j]<<"\t";
        cout<<"\n";
    }
}

int cnt[100];
void hangamnhieu(int a[][200],int h,int c)
{
    int k=0;

    for(int i=0; i<h; i++)
    {
        int dem =0;
        for(int j=0; j<c; j++)
        {
            if(a[i][j]<0)
                dem++;
        }
        cnt[i]=dem;// cnt[i] so luong phan tu am tren hang i
        k=max(dem,k);// k = so luong phan tu am / hang nhieu nhat
    }
    cout<<"in ra cac hang co so luong so am nhieu nhat ^^"<<endl;
    for(int i = 0; i<h; i++)
    {
        if(cnt[i]==k)
        {
            for(int j=0; j<c; j++)
            {
                cout<<a[i][j]<<" ";
            }
        }
        cout<<endl;
    }
}
void ktsoCP(int a[][200],int h,int c)
{
    for(int i=0; i<h; i++)
    {
        for(int j=0; j<c; j++)
        {
            int m = 0;
            while(m*m <= a[i][j])
            {
                if(m*m == a[i][j])
                {
                    cout <<a[i][j]<< " la so chinh phuong!\n";
                }
                ++m;
            }
        }
    }
}
void vitrisoCP(int a[][200],int h,int c)
{
    for(int i=0; i<h; i++)
    {
        for(int j=0; j<c; j++)
        {
            int m = 0;
            while(m*m <= a[i][j])
            {
                if(m*m == a[i][j])
                {
                    cout <<a[i][j]<<"  Co vi tri: "<<"("<<i<<","<<j<<")"<<endl;
                }
                ++m;
            }
        }
    }
}
void dempt00(int a[][200],int h,int c)
{
    int dem=0;
    for(int i=0; i<h; i++)
    {
        for(int j=0; j<c; j++)
            if(a[0][0]==a[i][j])
                dem++;
    }
    cout<<"So luong phan tu co gia tri bang (0,0): "<<dem-1;
}
int main()
{
    int a[200][200],h,c;
    cout<<"Nhap so hang: ";
    cin>>h;
    cout<<"Nhap so cot: ";
    cin>>c;
    nhapmang(a,h,c);
    cout<<"\n\n\t\tMang da nhap"<<endl;
    xuatmang(a,h,c);
    hangamnhieu(a,h,c);
    ktsoCP(a,h,c);
    vitrisoCP(a,h,c);
    dempt00(a,h,c);
}
