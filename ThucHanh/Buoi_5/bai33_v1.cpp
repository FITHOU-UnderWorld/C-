#include <bits/stdc++.h>
using namespace std;
struct xehoi
{
    string tenxe, mauxe;
    int chongoi;
    int namsx;
    float giathue;
};
void nhapds(xehoi a[], int &n)
{
    cout<<"Nhap so oto: "; cin>>n;
    for(int i=0; i<n; i++)
    {
        cin.ignore();
        cout<<"Xe thu "<<i+1<<endl;
        cout<<"Nhap ten xe: "; getline(cin, a[i].tenxe);
        cout<<"Nhap mau` xe: "; getline(cin, a[i].mauxe);
        cout<<"Nhap so cho ngoi: "; cin>>a[i].chongoi;
        cout<<"Nhap Nam san xuat: "; cin>>a[i].namsx;
        cout<<"Nhap gia thue: "; cin>>a[i].giathue;
        cout<<endl;
    }
}
void hiends(xehoi a[], int n)
{
    cout<<setw(55)<<"DANH SACH XE HOI"<<endl;
    cout<<setw(5)<<"STT"<<setw(20)<<"Ten xe"<<setw(20)<<"Mau xe"<<setw(20)<<"So cho ngoi"<<setw(15)<<"Nam sx"<<setw(15)<<"Gia thue"<<endl;
    for(int i=0; i<n; i++)
    {
        cout<<setw(5)<<i+1<<setw(20)<<a[i].tenxe<<setw(20)<<a[i].mauxe<<setw(20)<<a[i].chongoi<<setw(15)<<a[i].namsx<<setw(15)<<a[i].giathue<<endl;
    }
}
void xe5cho(xehoi a[], int n)
{
  xehoi atg;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
                if(a[i].giathue<a[j].giathue){
                    atg=a[i];
                    a[i]=a[j];
                    a[j]=atg;
                }
            }
    }
    cout<<endl;
    cout<<setw(55)<<"DANH SACH XE 5 CHO NGOI"<<endl;
    cout<<setw(5)<<"STT"<<setw(20)<<"Ten xe"<<setw(20)<<"Mau xe"<<setw(20)<<"So cho ngoi"<<setw(15)<<"Nam sx"<<setw(15)<<"Gia thue"<<endl;
    for(int i=0; i<n; i++)
    {
        if(a[i].chongoi==5)
        {
            cout<<setw(5)<<i+1<<setw(20)<<a[i].tenxe<<setw(20)<<a[i].mauxe<<setw(20)<<a[i].chongoi<<setw(15)<<a[i].namsx<<setw(15)<<a[i].giathue<<endl;
        }
    }
}
void loaibo(xehoi a[], int n)
{
    int nam;
    cout<<"Nhap nam: "; cin>>nam;
    for(int i=0; i<n; i++)
    {
        if(a[i].namsx==2021-nam)
        {
            for(int j=i; j<n-1; j++)
            a[j]=a[j+1];
            n--;
            i--;
        }
    }
    hiends(a,n);
}

/* Tăng giá thêm 10% cho các xe sản xuất vào năm Y (nhập từ bàn phím) và có
5 chỗ ngồi.*/

void tanggia(xehoi a[], int n)
{
    int y;
    cout<<"\nNhap nam  muon tang gia xe: "; cin>>y;
    for(int i=0; i<n; i++)
    {
        if(a[i].namsx==y && a[i].chongoi==5)
            a[i].giathue=(a[i].giathue*1.1);
    }
    hiends(a,n);
}


int main()
{
    xehoi a[100];
    int n;
    int chon;
    do{
               cout << "------MENU------" << endl;
    cout << "1. Nhap thong tin xe" << endl;
    cout << "2. Hien thi thong tin" << endl;
    cout << "3. Hien thi xe 5 cho ngoi voi gia tu X den Y" << endl;
    cout << "4. Loai bo xe cac N nam so voi nam hien tai" << endl;
    cout << "5. Tang gia 10% voi cac xem sx nam Y va co 5 cho ngoi" << endl;
    cout << "6. Thoat" << endl;
    cout<<endl<<endl;
    cout<<"Moi ban chon : "; cin>>chon;
    switch(chon)
    {
    case 1:
        nhapds(a,n); break;
    case 2:
         hiends(a,n); break;
    case 3:
        xe5cho(a,n); break;
    case 4:
        loaibo(a,n); break;
    case 5:
        tanggia(a,n); break;
    }
    }while(chon!=6);
}
