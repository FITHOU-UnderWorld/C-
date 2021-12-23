#include<bits/stdc++.h>
#include<iomanip>
using namespace std;
int main()
{
    int n,dem,tbcd,tbca,t=0;
    int a[500];
    n=-1;
    cout<<"Nhap vao cac so:"<<endl;
    do
        {
            n++;
            cout<<"\na["<<n<<"]:";
            cin>>a[n];
        }
        while(a[n]!=0);
    cout<<"Mang da nhap: ";
    for(int i = 0;i<n;i++)
        cout<<setw(6)<<a[i];
        cout<<"\n*****************************";
    int a1[n],a2[n];//a1 là mảng số chẵn, còn a2 là mảng lẻ
    int j=0,z=0;// j để lưu vị trí của a1, z là lưu vị trí a2
    for(int i = 0;i<n;i++){
        if(a[i]%2==0){
            a1[j]=a[i];
            j++;
        }
        else {
            a2[z]=a[i];
            z++;
        }
    }

    cout<<"\nMang so chan la: ";
    for(int i=0;i<j;i++)
        cout<<setw(6)<<a1[i];
        cout<<"\n*****************************";
    cout<<"\nMang so le la: ";
    for(int i=0;i<z;i++)
        cout<<setw(6)<<a2[i];
        cout<<"\n*****************************";
    // tính tbc
    int tongchanduong=0,demsochanduong=0;
    for(int i=0;i<j;i++)
    {
        if(a1[i]>0)
            {
                tongchanduong+=a1[i];
                demsochanduong++;
            }
    }
    cout<<"\nTBC chan duong: "<<tongchanduong/demsochanduong<<endl;
    int tongsoleam=0,demsoleam=0;
    for(int i=0;i<z;i++){
        if(a2[i]<0){
        tongsoleam+=a2[i];
        demsoleam++;
            }
    }
    cout<<"\nTBC le am: "<<tongsoleam/demsoleam<<endl;
}
