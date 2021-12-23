#include "bits/stdc++.h"
using namespace std;
int main()
{
    string HoTen;
    float TienCong;
    int SoNgayLamViec;
    float TienTamUng;
    float SoTienDuocHuong;
    float SoTienConLinh;
    
    cout<<"Ho Ten: ";
    fflush(stdin);
    getline(std::cin,HoTen);
    
    cout<<"Tien cong: ";
    cin>>TienCong;
    
    cout<<"So ngay lam viec: ";
    cin>>SoNgayLamViec;
    
    cout<<"Tien tam ung: ";
    cin>>TienTamUng;
    
    //tinh toan
    SoTienDuocHuong = TienCong * SoNgayLamViec;
    
    SoTienConLinh = SoTienDuocHuong - TienTamUng;
    
    cout<<"Ong/Ba: "<<HoTen<<endl;
    cout<<"So tien luong duoc huong: "<<SoTienDuocHuong<<endl;
    cout<<"So tien da tam ung: "<<TienTamUng<<endl;
    cout<<"So tien con duoc linh: "<<SoTienConLinh<<endl;
}