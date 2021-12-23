#include "bits/stdc++.h"
using namespace std;
int main()
{
    float s, v;
    int t;

    cout<<"Nhap vao Quang duong: ";
    cin>>s;
    cout<<"Nhap vao Thoi gian: ";
    cin>>t;

    v = s/t;
    cout<<"Van toc la: "<<setprecision(2)<<fixed<<v;
    return 0;
}
