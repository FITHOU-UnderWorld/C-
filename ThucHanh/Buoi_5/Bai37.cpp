#include<bits/stdc++.h>
using namespace std;
struct thuebaodt
{
    int stb;
    char ten[50];
    char ngaylap[50];
    int cp;
};
void nhap(thuebaodt a[],int &dem)
{
int i=0;
 dem =0;
 cout<<"Nhap danh sach thue bao va so thue bao =0 de ket thuc lenh nhap! "<<endl;
 while(1)
 {
     cout<<"Nhap thue bao thu"<<i+1<<endl;
     cout<<"Nhap so thue bao:";cin>>a[i].stb;
     if(a[i].stb!=0)
     {
         fflush(stdin);
         cout<<"Nhap ho ten khach hang: ";gets(a[i].ten);
         fflush(stdin);
         cout<<"Nhap cuoc phi: ";cin>>a[i].cp;
         fflush(stdin);
         cout<<"Nhap ngay lap: ";gets(a[i].ngaylap);
         i++;
         dem++;
     }
     else
     {
         cout<<"Ket thuc lẹnh nhap! "<<endl;
         break;
     }
 }
}
void xuat(thuebaodt a[], int dem)
{
    cout<<setw(6)<<left<<"STT";
    cout<<setw(16)<<left<<"So thue bao";
    cout<<setw(16)<<left<<"Ho ten";
    cout<<setw(16)<<left<<"Cuoc phi";
    cout<<setw(12)<<left<<"Ngay lap"<<endl;
    for(int i=0;i<dem;i++)
    {
      cout<<setw(6)<<i+1;
      cout<<setw(16)<<left<<a[i].stb;
      cout<<setw(16)<<left<<a[i].ten;
      cout<<setw(16)<<left<<a[i].cp;
      cout<<setw(12)<<left<<a[i].ngaylap<<endl;
    }
}
void sapxep(thuebaodt a[], int dem)
{
    for(int i=0;i<1000;i++)
    {
        for(int j=i+1;j<1000;j++)
        {
            if(a[i].cp<a[j].cp)
            {
                thuebaodt tg=a[i];
                a[i]=a[j];
                a[j]=tg;
            }
            if(a[j].stb==0)
            {
                break;
            }
        }
    }
    cout<<"Danh sach sau khi giam dan cua cuoc phi la: ";
    xuat(a,dem);
}
void timkiem(thuebaodt a[], int dem)
{
    int max=0;
    for(int i=0;i<dem;i++)
    {
        if(a[i].cp>max)
        {
            max=a[i].cp;
        }
    }
    for(int i=0;i<dem;i++)
    {
        if(a[i].cp==max)
        {
            cout<<"Khanh hang co cuoc phi cao nhat la"<<endl;
            cout<<"So thue bao:"<<a[i].stb;
            cout<<"\nHo ten:"<<a[i].ten;
            cout<<"\nCuoc phi:"<<a[i].cp;
            cout<<"\nNgay lap:"<<a[i].ngaylap;
        }
    }
}
void them(thuebaodt a[], int dem)
{
    int i=dem+1;
    cout<<"Them mot so thue bao moi: "<<endl;
    cout<<"Nhap so thue bao:";cin>>a[i].stb;
      fflush(stdin);
         cout<<"Nhap ho ten khach hang: ";gets(a[i].ten);
         fflush(stdin);
          cout<<"Nhap cuoc phi: ";cin>>a[i].cp;
         fflush(stdin);
         cout<<"Nhap ngay lap: ";gets(a[i].ngaylap);
}
void xoa(thuebaodt a[i], int &dem)
{
    for(int i=0;i<dem;i++)
    {
        if(a[i].cp<1000)
        {
            a[i]=a[i-1];
            dem--;
        }
    }
    cout<<"Danh sach sau khi xoa cuoc phi duoi 10.000 la: "<<endl;
    xuat(a,dem);
}
int main()
{
    thuebaodt a[1000];
    int dem;
    nhap(a,dem);
    xuat(a,dem);
    sapxep(a,dem);
    timkiem(a,dem);
    xoa(a,dem);
}
