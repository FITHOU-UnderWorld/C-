#include<iostream>
using namespace std;
/*
Nhập vào từ bàn phím toạ độ 2 điểm P, Q với P(xP, yP),
Q(xQ,yQ)
a. In ra màn hình phương trình đường thẳng đi qua 2 điểm PQ.
b. Cho điểm I có toạ độ I(xI, yI). Hãy cho biết điểm I có thuộc đường thẳng đi
qua 2 điểm PQ hay không?
*/
int main()
{
    int xp, yp, xq, yq, A, B, C, xi, yi;
    cout<<"Nhap toa do diem P:";
    cout<<"\nP(xp):";cin>>xp;
    cout<<"P(yp):";cin>>yp;
    cout<<"Nhap toa do diem Q:";
    cout<<"\nQ(xq):";cin>>xq;
    cout<<"Q(yq):";cin>>yq;
    A=yq-yp;
    B=xp-xq;
    C=xq*yp-xp*yq;
    cout<<"Phuong trinh duong thang di qua PQ : "<<A<<"x+"<<B<<"y+"<<C<<"=0";
    cout<<"\nNhap toa do diem I:";
    cout<<"\nI(xI):";cin>>xi;
    cout<<"I(yI):";cin>>yi;
    if(A*xi+B*yi+C==0)
       {
           cout<<"I thuoc duong thang PQ";
       }
    else
       {
         cout<<"I khong thuoc duong thang PQ";
       }
    }

