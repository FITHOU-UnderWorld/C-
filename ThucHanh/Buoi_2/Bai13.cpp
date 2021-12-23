#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Nhap n: ";
    cin>>n;
    int sum = 0;
    for(int i=1;i<=n/2;i++){
        if(n%i==0){
            sum+=i;
        }

    }
    if(sum==n){
        cout<<"La so hoan thien!";
    }else{
        cout<<"Khong phai so hoan thien!";
    }
}
