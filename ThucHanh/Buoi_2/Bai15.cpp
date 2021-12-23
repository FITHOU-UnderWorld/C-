#include<bits/stdc++.h>
using namespace std ;
int main ()
{
    int n;
    float t, countt, countAvg;
    t =0;
    countt =0;
    countAvg =0;
	do{
        cin>>n;

    if((int)sqrt(n)==sqrt(n)){

        if(n%2 == 0){
            t+=n;
            countAvg++;
        }
        countt++;
    }
	}while(n!=0);

	if(countt!=0){
        cout<<"So luong so chinh phuong: "<<countt-1<<endl;
	}else{
        cout<<"Khong co so chinh phuong nao!"<<endl;
	}
	if(t!=0){
        cout<<"Trung binh cong cac so chinh phuong chan: "<<float(t/(countAvg-1));
	}
}
