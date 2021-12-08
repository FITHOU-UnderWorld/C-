#include "bits/stdc++.h"
using namespace std;
int n=0;
struct CS
{
    char ht[20];
    bool gt;
    int tuoi;
    char nhaccu[20];
};
void nhap(CS ds[])
{
    for(int i=0;; i++)
    {
        fflush(stdin);
        cout<<"Nhap ten thanh vien trong CLB: ";
        gets(ds[i].ht);
        if(ds[i].ht[0]=='*')
            break;
        cout<<"Nhap gioi tinh(nu = 0,nam = 1): ";
        cin>>ds[i].gt;
        cout<<"Nhap tuoi: ";
        cin>>ds[i].tuoi;
        fflush(stdin);
        cout<<"Nhap nhac cu: ";
        gets(ds[i].nhaccu);
        n++;
    }
}
void xuat(CS ds[])
{

    cout<<"\n--------------------"<<endl;
    for(int i=0; i<n; i++)
    {
        cout<<"\n"<<setw(20)<<left<<ds[i].ht;
        if(ds[i].gt==1)
            cout<<setw(10)<<left<<"Nam";
        else
            cout<<setw(10)<<left<<"Nu";
        cout<<setw(10)<<left<<ds[i].tuoi;
        cout<<setw(10)<<left<<ds[i].nhaccu;
    }
}
void ghifile(CS ds[])
{
    FILE *f;
    f=fopen("casy.dat","wb");
    for(int i=0; i<n; i++)
        fwrite(&ds[i],sizeof(CS),1,f);
    fclose(f);
    cout<<"\nLUU TEP THANH CONG!\n";
}
void trong(CS ds[])
{
    int b=0;
    for(int i=0; i<n; i++)
        if(strcmp("trong",ds[i].nhaccu)==0)
        {
            swap(ds[i].nhaccu,ds[b].nhaccu);
            b++;
        }
    xuat(ds);
}
void ghitep_gioitinh_0_nhaccu_hat(CS ds[])
{
    for(int i=0; i<n; i++)
    {
        if(strcmp("hat",ds[i].nhaccu)==0&&ds[i].gt==0)
        {
            ghifile(ds);
        }
    }
}
void tren20(CS ds[])
{
    for(int i=0; i<n; i++)
    {
        if(ds[i].tuoi>20)
        {
            cout<<"\n"<<setw(20)<<left<<ds[i].ht;
            if(ds[i].gt==1)
                cout<<setw(10)<<left<<"Nam";
            else
                cout<<setw(10)<<left<<"Nu";
            cout<<setw(10)<<left<<ds[i].tuoi;
            cout<<setw(10)<<left<<ds[i].nhaccu;
        }
    }
}
int main()
{
    CS ds[200];
    int chon;
    do
    {
        cout<<"\n--------------MENU-----------------\n";
        cout<<" \n1.Nhap cac thanh vien CLB: ";
        cout<<" \n2.Hien cac thanh vien CLB: ";
        cout<<" \n3.Hien danh sach voi TRONG len dau: ";
        cout<<" \n4.Luu tep neu la nu va dung nhac cu HAT: ";
        cout<<" \n5.Hien thanh vien tren 20 tuoi: ";
        cout<<" \n0.Thoat!\n";
        cout<<" \n ";
        cin>>chon;
        switch(chon)
        {
        case 1:
            system("cls");
            nhap(ds);
            break;
        case 2:
            system("cls");
            xuat(ds);
            break;
        case 3:
            system("cls");
            cout<<"Nhung thanh vien dung TRONG len dau!"<<endl;
            trong(ds);
            break;
        case 4:
            system("cls");
            cout<<"Luu vao tep casy.dat dung nhac cu hat va la nu!"<<endl;
            ghitep_gioitinh_0_nhaccu_hat(ds);
            break;
        case 5:
            system("cls");
            cout<<"Nhung thanh vien tren 20 tuoi!"<<endl;
            tren20(ds);
            break;
        case 0:
            system("cls");
            exit(1);
            break;
        default :
            cout<<" \n Ban chon sai, moi chon lai! ";
        }
   }
    while(chon!=0);
}
