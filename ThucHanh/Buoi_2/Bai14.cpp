#include<iostream>
using namespace std;
int main()
{
    float n, i;
    float s=0;
    cout<<"Nhap N:";
    cin>>n;
    for(i=1;i<=n;i++){
            s+= 1/((i*2) - 1);
    }
    cout<<s;

}
