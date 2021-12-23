#include <iostream>
#include <conio.h>
using namespace std;
/*
Nhập vào số có 3 chữ số:
- tìm số lớn nhất trong 3 chữ số và vị trí của nó!
ví dụ:
- Input: 123
- Output: 3 là số lớn nhất; vị trí: hàng đơn vị
*/
int main()
{
	int a,b,c,n,max;
	cout<<"nhap so nguyen ca 3 chu so n:";cin>>n;
	a=n/100;
	b=(n%100)/10;
	c=(n%100)%10;
   /* max=(a>b?(a>c?a:c):(b>c?b:c));
    cout <<"chu so lon nhat trong n la"<<max<<endl;*/
    if (a>=b&&a>=c)
    cout<<"so lon nhat o hang tram :"<<a<<endl;
    else if (b>=a&&b>=c)
    cout<<"so lon nhat o hang chuc:"<<b<<endl;
    else
    cout<<"so lon nhat o hang don vi:"<<c<<endl;

}
