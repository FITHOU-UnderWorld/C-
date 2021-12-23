#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;

/*
Nhập vào 3 cạnh của tam giác: a,b,c
- Xác định xem đây có phải 3 cạnh của tam giác không!
- Nếu là tam giác thì đây là tam giác gì: Vuông, Cân, Đều, Vuông cân, thường!
*/

int main()
{
    float a, b, c;
    cout<<"Nhap vao canh a: ";
    cin>>a;
    cout<<"Nhap vao canh b: ";
    cin>>b;
    cout<<"Nhap vao canh c: ";
    cin>>c;
    if( a<b+c && b<a+c && c<a+b ){
        if(a*a==b*b+c*c || b*b==a*a+c*c || c*c== a*a+b*b)
            cout<<"Day la tam giac vuong";
        else if(a==b&&a==c&&b==c)
            cout<<"Day la tam giac deu";
        else if(a==b || a==c || b==c)
            cout<<"Day la tam giac can";

        else if ( a*a==b*b+c*c || b*b==a*a+c*c || c*c== a*a+b*b&&a==b || a==c || b==c)
            cout<<"Day la tam giac vuong can";
            else
            cout<<"Day la tam giac thuong";
    }else{
        cout<<"Ba canh a, b, c khong phai la ba canh cua mot tam giac";
    }

    return 0;
}
