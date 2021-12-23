#include<bits/stdc++.h>
using namespace std;
int main(){
    int a, b, c, fx;
    cout<<"Nhap vao a: "; cin>>a;
    cout<<"Nhap vao b: "; cin>>b;
    cout<<"Nhap vao c: "; cin>>c;
    if(b != 0){
        fx = (a+c)/b;
    }else{
        fx = a - c;
    }

    cout<<"F(x) = "<<fx;
}

