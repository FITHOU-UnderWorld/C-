#include<bits/stdc++.h>
using namespace std;
int main()
{
// khai bao bien
    int cn;
    float cc,BMI;
    char stt;
// nhap du lieu
    cout<<"nhap chieu cao(m) vd: 1m85 = 1.85: ";
    cin>>cc;
    cout<<"nhap can nang(kg)): ";
    cin>>cn;
    BMI=cn/(cc*cc);
    cout<<"chi so BMI la: "<<BMI<<endl;
    if(BMI<18.5)
        stt=1;
    if(BMI>=18.5&&BMI<=25)
        stt=2;
    if(25<BMI&&BMI<30)
        stt=3;
    if(30<=BMI&&BMI<=40)
        stt=4;
    if(BMI>40)
        stt=5;
// ket qua
    switch(stt)
    {

    case 1:
        cout<<"Duoi chuan"<<endl;
        break;
    case 2:
        cout<<"Chuan"<<endl;
        break;
    case 3:
        cout<<"Thua can"<<endl;
        break;
    case 4:
        cout<<"Beo can giam can"<<endl;
        break;
    case 5:
        cout<<"Rat beo can giam can ngay"<<endl;
        break;
    }
    return 0;
}

