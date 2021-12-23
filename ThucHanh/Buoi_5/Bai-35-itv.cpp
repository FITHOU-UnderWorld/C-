#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

struct khachhang{
    string tenkh,makh,gioitinh;
    int namsinh,songayo,giaphong,tien;
};

khachhang nhap1kh(){
    khachhang kh;
    cout<<"Nhap ma khach hang: ";getline(cin,kh.makh);
  //  cin.ignore();
    cout<<"Nhap ten: ";getline(cin,kh.tenkh);
 //   cin.ignore();
    cout<<"Nhap gioi tinh: ";getline(cin,kh.gioitinh);
    cout<<"Nhap nam sinh: ";cin>>kh.namsinh;
    cout<<"Nhap so ngay o: ";cin>>kh.songayo;
    cout<<"Nhap gia phong: ";cin>>kh.giaphong;
    kh.tien=kh.songayo*kh.giaphong;
    return kh;
}

void xuat1kh(khachhang kh, int i){
    if(i==0)
        cout<<"STT"<<setw(10)<<"Ma kh"<<setw(10)<<"Ho ten"<<setw(15)<<"Gioi tinh"<<setw(15)<<"Nam sinh"<<setw(15)<<"So ngay o"<<setw(15)<<"Gia phong"<<setw(15)<<"Thanh tien"<<endl;
    cout<<i<<setw(10)<<kh.makh<<setw(10)<<kh.tenkh<<setw(15)<<kh.gioitinh<<setw(15)<<kh.namsinh<<setw(15)<<kh.songayo<<setw(15)<<kh.giaphong<<setw(15)<<kh.tien<<endl;

}

void nhapdskh(khachhang kh[], int &n){
    cout<<"Nhap so luong khach hang: ";cin>>n;
    for(int i=0;i<n;i++){
        cout<<"Khach hang thu "<<i<<endl;
        cin.ignore();
        kh[i]=nhap1kh();
        cout<<endl;
    }
}

void xuatdskh(khachhang kh[], int n){
    cout<<setw(60)<<"DANH SACH KHACH HANG"<<endl;
    for(int i=0;i<n;i++){
        xuat1kh(kh[i],i);
    }
}

void luutru(khachhang kh[], int n){
    int dmax;
    dmax=kh[0].songayo;
    for(int i=0;i<n;i++){
        if(kh[i].songayo>dmax){
            dmax=kh[i].songayo;
        }
    }
    cout<<"\nKhach hang luu tru lau nhat la: "<<endl;
    for(int i=0;i<n;i++)
        if(kh[i].songayo==dmax)
            xuat1kh(kh[i],i);
}

void timkh(khachhang kh[], int n){
    string k;
    cout<<"\nNhap ma khach hang muon tim: ";cin>>k;
    cin.ignore();
    cout<<"Thong tin Khach hang ban muon tim la: "<<endl;
    for(int i=0;i<n;i++){
        if(kh[i].makh==k)
            xuat1kh(kh[i],i);
    }
}

void thanhtien(khachhang kh[], int n){
    int dem=0,tong=0;
    for(int i=0;i<n;i++){
        tong+=kh[i].tien;
        dem++;
    }
    cout<<"\nTrung binh tien khach hang phai tra = "<<tong/dem<<endl;
}

void namsinh(khachhang kh[], int n){
    int k,i,j,tg;
    khachhang khtg;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++)
        if(kh[i].namsinh>kh[j].namsinh){
            khtg=kh[i];
            kh[i]=kh[j];
            kh[j]=khtg;
        }
    }
    cout<<endl;
    cout<<setw(60)<<"DANH SACH SAU KHI SAP XEP"<<endl;
    for(int i=0;i<n;i++)
        xuat1kh(kh[i],i);
}

int main(){
    khachhang kh[100];
    int n,i;
    nhapdskh(kh,n);
    xuatdskh(kh,n);
    luutru(kh,n);
    timkh(kh,n);
    thanhtien(kh,n);
    namsinh(kh,n);


return 1;
}
