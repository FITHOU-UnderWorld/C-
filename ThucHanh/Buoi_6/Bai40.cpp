#include<iostream>
#include<string.h>
#include<stdio.h>
#include<iomanip>
#include<stdlib.h>
using namespace std;
struct TAIXE
{
    char mataixe[30];
    char hoten[30];
    char gioitinh[30];
    int namsinh;
    char biensoxe[30];
    float luong;
};
void nhap(TAIXE ds[],int &n)
{
    for(int i=0;i<n;++i)
    {
        cout<<"\n danh sach ["<<i<<"]";
        cout<<"\n Ma tai xe:";
        fflush(stdin);
        gets(ds[i].mataixe);
        cout<<"\n Ho va ten: ";
        gets(ds[i].hoten);
        cout<<"\n Gioi tinh: ";
        fflush(stdin);
        gets(ds[i].gioitinh);
        cout<<"\n Nam sinh: ";
        cin>>ds[i].namsinh;
        cout<<"\n Bien so xe: ";
        fflush(stdin);
        gets(ds[i].biensoxe);
        cout<<"\n Luong: ";
        cin>>ds[i].luong;
    }
}
void ghifile(FILE *f,TAIXE ds[],int &n)
{
    f=fopen("Taixe.txt","wb");
    for(int i=0;i<n;i++)
        fwrite(&ds[i],sizeof(TAIXE),1,f);
    fclose(f);
}
void docfile(FILE *f,TAIXE ds[],int &n)
{
    f=fopen("Taixe.txt","rb");
    if(f==NULL)
    {
        cout<<"\n doc file bi loi";
        exit(1);
    }
    TAIXE tg;
    n=0;
    while(fread(&tg,sizeof(TAIXE),1,f)==1)
    {
        ds[n]=tg;
        n++;
    }
    fclose(f);
}
void inds(TAIXE ds[],int &n)
{
    cout<<"\n Danh sach tai xe: ";
    for(int i=0;i<n;i++)
    {
       cout<<"\n  "<<i;
       cout<<setw(8)<<ds[i].mataixe;
       cout<<setw(10)<<ds[i].hoten;
       cout<<setw(7)<<ds[i].gioitinh;
       cout<<setw(10)<<ds[i].namsinh;
       cout<<setw(10)<<ds[i].biensoxe;
       cout<<setw(12)<<ds[i].luong;
    }
}
void chinhsua(FILE *f,TAIXE ds[],int &n)
{
    docfile(f,ds,n);
    char matx[30];
    cout<<"\n nhap ma tai xe can sua: ";
    cin>>matx;
    for(int i=0;i<n;i++)
    {
        if(strcmp(ds[i].mataixe,matx)==0)
        {
            cout<<"\n sua lai luong: ";
            fflush(stdin);
            cin>>ds[i].luong;
        }
    }
    ghifile(f,ds,n);
    docfile(f,ds,n);
    inds(ds,n);
}
void sapxep(FILE *f,TAIXE ds[],int &n)
{
    TAIXE tg;
    for(int i=0;i<n-1;i++)
        for(int j=i+1;j<n;j++)
            if(strcmp(ds[i].hoten,ds[j].hoten)>0)
            {
                tg=ds[i];
                ds[i]=ds[j];
                ds[j]=tg;
            }
    ghifile(f,ds,n);
    inds(ds,n);
}
void taixe_nu(FILE *f,TAIXE ds[],int &n)
{
    f=fopen("Taixenu.txt","wb");
    for(int i=0;i<n;i++)
        if(strcmp(ds[i].gioitinh,"nu")==0)
            fwrite(&ds[i],sizeof(TAIXE),1,f);
    fclose(f);
}
void indsnu(FILE *f,TAIXE ds[],int &n)
{
    TAIXE tg;
    n=0;
    f=fopen("Taixenu.txt","rb");
    while(fread(&tg,sizeof(TAIXE),1,f)==1)
    {
        ds[n]=tg;
        n++;
    }
    fclose(f);
    inds(ds,n);
}
int main()
{
    FILE *f;
    TAIXE ds[100];
    int n;
    cout<<"\n nhap so luong tai xe: ";
    cin>>n;
    nhap(ds,n);
    inds(ds,n);
    ghifile(f,ds,n);
    docfile(f,ds,n);
    chinhsua(f,ds,n);
    cout<<"\n danh sach sau khi sap xep: ";
    sapxep(f,ds,n);
    cout<<"\n in danh sach tai xe nu: ";
    taixe_nu(f,ds,n);
    indsnu(f,ds,n);
}
