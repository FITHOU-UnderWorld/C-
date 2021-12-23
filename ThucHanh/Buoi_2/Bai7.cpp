#include<iostream>
using namespace std;
/*
Năm nhuận là năm có tháng 2 gồm 29 ngày, để xét một
năm có phải là năm nhuận không người ta kiểm tra bằng cách xem năm đó có chia
hết cho 4 đồng thời không chia hết cho 100 hoặc năm đó chia hết cho 400 hay không?
Hãy viết chương trình nhập vào một năm. Hiện ra màn hình thông báo năm đó có
phải là năm nhuận hay không?
*/
int main()
{
    int n;
    cout<<"Nhap vao mot nam :";
    cin>>n;
    if(n%4==0||n%100==0||n%400==0)
        cout<<"Nam vua nhap la nam nhuan";
    else
        cout<<"Nam vua nhap khong phai nam nhuan";
}
