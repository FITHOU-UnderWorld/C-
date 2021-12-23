#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, m;
    while(n<1 || n>12){
        cout<<"Nhap n trong khoang [1>12]: ";
        cin>>n;
    }
    cout<<"Nhap m: ";
    cin>>m;
    switch(n){
        case 1:
            cout<<"Thang gieng co 31 ngay!";
            break;
        case 2:
            if(m%4==0||m%100==0||m%400==0){
                cout<<"Thang hai co 29 ngay!";
            }else{
                cout<<"Thang hai co 28 ngay!";
            }

            break;
        case 3:
            cout<<"Thang ba co 31 ngay!";
            break;
        case 4:
            cout<<"Thang tu co 30 ngay!";
            break;
        case 5:
            cout<<"Thang nam co 31 ngay!";
            break;
        case 6:
            cout<<"Thang sau co 30 ngay!";
            break;
        case 7:
            cout<<"Thang bay co 31 ngay!";
            break;
        case 8:
            cout<<"Thang tam co 31 ngay!";
            break;
        case 9:
            cout<<"Thang chin co 30 ngay!";
            break;
        case 10:
            cout<<"Thang muoi co 31 ngay!";
            break;
        case 11:
            cout<<"Thang muoi mot co 30 ngay!";
            break;
        case 12:
            cout<<"Thang muoi hai co 31 ngay!";
            break;
        default:
            cout<<"n o trong khoang [1->12]: ";
    }
}
