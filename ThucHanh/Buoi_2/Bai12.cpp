#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    while(n<2 || n>8){
        cout<<"Nhap so nguyen n trong khoang n[2->8]: ";
        cin>>n;
    }
    switch(n){
            break;
        case 2:
            cout<<"Mon hoc thu 2 cua ban!";
            break;
        case 3:
            cout<<"Mon hoc thu 3 cua ban!";
            break;
        case 4:
            cout<<"Mon hoc thu 4 cua ban!";
            break;
        case 5:
            cout<<"Mon hoc thu 5 cua ban!";
            break;
        case 6:
            cout<<"Mon hoc thu 6 cua ban!";
            break;
        case 7:
            cout<<"Mon hoc thu 7 cua ban!";
            break;
        case 8:
            cout<<"Mon hoc chu nhat cua ban!";
            break;
    }
}

