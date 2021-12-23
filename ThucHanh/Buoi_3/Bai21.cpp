#include <bits/stdc++.h>
using namespace std;

int main()
{
	float a[100][100],t,s=0,x;
	int i,n,m,j,k,h,c;
	cout<<"NHAP SO HANG CUA MANG:";cin>>n;
	cout<<"NHAP SO COT CUA MANG:";cin>>m;
	cout<<"NHAP MANG:"<<endl;
	for (i=0;i<n;i++) {
		for (j=0;j<m;j++) {
			cout<<"a["<<i<<"]=";cin>>a[i][j];
		}
	}
	cout<<endl<<"************"<<endl;
	cout<<"MANG VUA NHAP LA: ";
	for (i=0;i<n;i++) {
		cout<<endl;
		for (j=0;j<m;j++){

			cout<<setw(5)<<a[i][j];
		}
	}
	cout<<endl;
	cout<<"NHAP k: ";cin>>k;
	cout<<endl<<"************"<<endl;
	cout<<"CAC PHAN TU  TAI HANG THU "<<k<<" LA:";
		for (i=0;i<n;i++) {
			for (j=0;j<m;j++){
				if (i==k){
					cout<<setw(5)<<a[i-1][j];
				}
			}
	}
	cout<<endl<<"************"<<endl;
			for (i=0;i<n;i++) {
				for (j=0;j<m;j++)
				if (j==k) {
					s+=a[i][j];

				}
			}
	cout<<"TONG CAN TIM LA: "<<s;
	cout<<endl<<"************"<<endl;
	cout<<"NHAP GIA TRI MUON TIM KIEM : ";cin>>x;
		for (i=0;i<n;i++) {
			for (j=0;j<m;j++)
				if (a[i][j]==x) {
					cout<<"VI TRI DAU TIEN XUAT HIEN PHAN TU "<<x<<" LA HANG "<<i+1<<" COT "<<j+1;
					exit (1);

             }
			}


}
