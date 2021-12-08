#include <bits/stdc++.h>
using namespace std;
int main()
{
    int so,soTemp,tong=0,dem=0,temp=0;
    cout << "Nhap so nguyen n : ";
    cin >> so;
        soTemp=so; temp=so;
    while(so>=10)
        {
        so=so/10;
        dem++;
        }
    while (soTemp!= 0)
        {
        tong = tong + soTemp%10;
        soTemp =soTemp/ 10;
        }
    cout<<"So luong chu so cua so nguyen la: "<<dem+1<<endl;
    cout << "Tong cac chu so cua so " <<temp<<" la "<< tong << endl;
    return 0;
}
