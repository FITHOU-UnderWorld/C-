#include <bits/stdc++.h>
using namespace std;

int main()
{
	float a[100],sa,sd,t;
	int i,n,d,j;
	sa=0;
	sd=0;
	d=0;
	cout<<"NHAP MANG:"<<endl;
	n=0;
	do
		{
        cout<<"a["<<n<<"]=";cin>>a[n];
			n++;
		} while(a[n-1]!=0);
	cout<<"************"<<endl;
	cout<<"MANG VUA NHAP LA: ";
	n=n-1;
		for (i=0;i<n;i++)
		{
			cout<<setw(5)<<a[i];
		}
	cout<<endl<<"************"<<endl;
		for (i=0;i<n;i++)
		{
			if (a[i]>=0)
			 {
				sd+=a[i];
			 } else
			 {
				sa+=a[i];
				d++;
			 }
		}
	cout<<"TONG CAC PHAN TU KHONG AM TRONG MANG LA: "<<sd<<endl;
	if (d<=0) cout<<"MANG KHONG CO PHAN TU AM";
	else	cout<<"TRUNG BINH CONG CAC PHAN TU AM TRONG MANG LA: "<<float (sa/d);
	cout<<endl<<"************"<<endl;
		for (i=0;i<n-1;i++){

		 for (j=i+1;j<n;j++)
		{
			if (a[i]<a[j])
			{
				t=a[i];
				a[i]=a[j];
				a[j]=t;

			}}}
	cout<<"MANG SAU SAP XEP LA: ";
	for (i=0;i<n;i++) {
		cout<<setw(5)<<a[i];
	}
	cout<<endl<<"************"<<endl;
	cout<<"PHAN TU O VI TRI CHAN SAU KHI BI GIAM GIA TRI 10% LA: ";
	for (i=0;i<n;i++) {
		if (i%2!=0){
			a[i]=a[i]*0.9;
		}

	}
	for (i=0;i<n;i++){
			cout<<setw(6)<<a[i];
	}

	cout<<endl<<"************"<<endl;
	cout<<"DAY SAU KHI XOA CAC PHAN TU O VI TRI LE LA: ";
	for (i=0;i<n;i++){
		if (i%2==0) {
			a[i]=a[i+1];
		}
	}
	for (i=0;i<n-1;i++) {
		if (i%2==0){
			cout<<setw(7)<<a[i];
	}
}

}
