#include <bits/stdc++.h>
using namespace std;

struct hs
{
    string ma_hs;
    string ho_ten;
    string ngay_sinh;
    string lop;
    int so_buoi;
};

void nhapds(hs a[], int &n)
{
    cout<<"Nhap so hoc sinh: "; cin>>n;
    for(int i=0; i<n; i++)
    {
        cin.ignore();
        cout<<"Hoc sinh thu "<<i+1<<endl;
        cout<<"Nhap ma hoc sinh: "; getline(cin,a[i].ma_hs);
        cout<<"Nhap ho ten: "; getline(cin, a[i].ho_ten);
        cout<<"Nhap ngay sinh: "; getline(cin,a[i].ngay_sinh);
        cout<<"Nhap lop: "; getline(cin, a[i].lop);
        cout<<"Nhap so buoi an ban tru: "; cin>>a[i].so_buoi;
        cout<<endl<<endl;
    }
}
void hiends(hs a[], int n)
{
    cout<<setw(2)<<"Ma hoc sinh"<<setw(20)<<"Ho ten"<<setw(30)<<"Ngay sinh"<<setw(20)<<"Lop"<<setw(20)<<"So buoi an"<<endl;
    for(int i=0; i<n; i++)
    {
        cout<<setw(11)<<a[i].ma_hs<<setw(20)<<a[i].ho_ten<<setw(30)<<a[i].ngay_sinh<<setw(20)<<a[i].lop<<setw(20)<<a[i].so_buoi<<endl;
    }
}

void timkiemtt(hs a[], int n)
{
    string timkiemhoten;
    cout<<"Nhap ho ten can tim kiem: ";
    fflush(stdin);
    getline(cin,timkiemhoten);
    cout<<"\nThong tin hoc sinh la: "<<endl<<endl;
    cout<<setw(2)<<"Ma hoc sinh"<<setw(20)<<"Ho ten"<<setw(30)<<"Ngay sinh"<<setw(20)<<"Lop"<<setw(20)<<"So buoi an"<<endl;
    for(int i=0; i<n; i++)
    {
        if(a[i].ho_ten==timkiemhoten)
        cout<<setw(11)<<a[i].ma_hs<<setw(20)<<a[i].ho_ten<<setw(30)<<a[i].ngay_sinh<<setw(20)<<a[i].lop<<setw(20)<<a[i].so_buoi<<endl;
    }
}
void tienan(hs a[], int n)
{
    int tongbuoi=0;
    for(int i=0; i<n; i++)
    {
       tongbuoi+= a[i].so_buoi;
    }

    cout<<"Tong so tien thu duoc la: "<<tongbuoi*25000<<endl;
}
int main()
{
    int n;
    hs a[100];
    nhapds(a,n);
    hiends(a,n);
    tienan(a,n);
    timkiemtt(a,n);
    return 0;
}
