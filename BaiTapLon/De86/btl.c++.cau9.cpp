#include "bits/stdc++.h"
using namespace std;
struct NV
{
    int maNV;
    char hotenNV[20];
    char gt[10];
    char ngaysinh[20];
    int hesoluong;
};
//CTC NHẬP DANH SÁCH NHÂN VIÊN
void nhap(NV ds[],int &n)
{
    for(int i=0; i<n; i++)
    {
        cout<<"\n---------------------"<<endl;
        cout<<"Nhap ma nhan vien: ";
        cin>>ds[i].maNV;
        cout<<"Nhap ho ten nhan vien: ";
        fflush(stdin);
        gets(ds[i].hotenNV);
        cout<<"Nhap ngay sinh: ";
        fflush(stdin);
        gets(ds[i].ngaysinh);
        cout<<"Nhap gioi tinh: ";
        fflush(stdin);
        gets(ds[i].gt);
        cout<<"Nhap he so luong: ";
        cin>>ds[i].hesoluong;
    }
}
//CTC IN LẠI DSNV ĐÃ NHẬP
void in(NV ds[],int &n)
{
    cout<<"\n--------------------"<<endl;
    for(int i=0; i<n; i++)
    {
        cout<<"\n"<<setw(5)<<ds[i].maNV;
        cout<<setw(20)<<ds[i].hotenNV;
        cout<<setw(12)<<ds[i].ngaysinh;
        cout<<setw(10)<<ds[i].gt;
        cout<<setw(12)<<ds[i].hesoluong;
    }
}
void ghifile(NV ds[],int &n)
{
    FILE *f;
    f=fopen("nhanvien.dat","wb");
    for(int i=0; i<n; i++)
        fwrite(&ds[i],sizeof(NV),1,f);
    fclose(f);
    cout<<"LUU FILE THANH CONG!";
}
void sapxep(NV ds[],int &n)
{
    FILE *f;
    NV tg;
    for(int i=0; i<n-1; i++)
        for(int j=i+1; j<n; j++)
            if((ds[i].hesoluong<ds[j].hesoluong))
            {
                tg=ds[i];
                ds[i]=ds[j];
                ds[j]=tg;
            }
    ghifile(ds,n);
    in(ds,n);
}
void chinhsua(NV ds[],int &n)
{
    FILE *f;
    int matx;
    cout<<"\n nhap ma nhan vien can sua: ";
    cin>>matx;
    for(int i=0; i<n; i++)
    {
        if(ds[i].maNV==matx)
        {
            cout<<"\n Nhap lai he so luong: ";
            fflush(stdin);
            cin>>ds[i].hesoluong;
        }
    }
    in(ds,n);
}
int main()
{
    NV ds[100];
    int chon;
    do
    {
        cout<<"\n--------------MENU-----------------\n";
        cout<<" \n1.Nhap so nhan vien: ";
        cout<<" \n2.Nhap thong tin nhan vien: ";
        cout<<" \n3.Hien thong tin nhan vien: ";
        cout<<" \n4.Sap xep nhan vien giam dan va luu tep: ";
        cout<<" \n5.Cap nhat he so luong: ";
        cout<<" \n6.Thoat!\n";
        cout<<" \n ";
        cin>>chon;
        switch(chon)
        {
        case 1:
            system("cls");
            int n;
            cout<<"\n Nhap so nhan vien: ";
            cin>>n;
            break;
        case 2:
            system("cls");
            nhap(ds,n);
            break;
        case 3:
            system("cls");
            in(ds,n);
            break;
        case 4:
            system("cls");
            cout<<"\n danh sach sau khi sap xep: "<<endl;
            sapxep(ds,n);
            break;
        case 5:
            system("cls");
            cout<<"\nDanh sach sau khi sua: "<<endl;
            chinhsua(ds,n);
            break;
        case 6:
            system("cls");
            exit(1);
            break;
        default :
            cout<<" \n Ban chon sai, moi chon lai! ";
        }
    }
    while(chon!=0);
}
