#include "bits/stdc++.h"
using namespace std;
int main()
{
    string MaHS;
    string HoTen;
    string NgaySinh;
    string Lop;
    int SoBuoiAnBanTru;
    int SoTienAnBanTru;

    cout<<"Nhap Ma Hoc Sinh: ";
    fflush(stdin);
    getline(std::cin,MaHS);

    cout<<"Nhap Ho Ten Hoc Sinh: ";
    fflush(stdin);
    getline(std::cin,HoTen);

    cout<<"Nhap Ngay Sinh: ";
    fflush(stdin);
    getline(std::cin,NgaySinh);

    cout<<"Nhap Lop: ";
    fflush(stdin);
    getline(std::cin,Lop);

    cout<<"Nhap So Buoi An Ban Tru: ";
    fflush(stdin);
    cin>>SoBuoiAnBanTru;

    // tinnh toan so tien an theo buoi
    SoTienAnBanTru = SoBuoiAnBanTru * 25000;

    cout<<"============================="<<endl;
    cout<<"Ma Hoc Sinh: "<<MaHS<<endl;
    cout<<"Ho Ten Hoc Sinh: "<<HoTen<<endl;
    cout<<"Ngay Sinh Hoc Sinh: "<<NgaySinh<<endl;
    cout<<"Lop: "<<Lop<<endl;
    cout<<"So Buoi An Ban Tru: "<<SoBuoiAnBanTru<<endl;
    cout<<"So Tien An Ban Tru: "<<SoTienAnBanTru<<endl;

}
