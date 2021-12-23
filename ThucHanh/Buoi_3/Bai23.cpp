#include <bits/stdc++.h>
using namespace std;

int main()
{
	float a[100][100],t,s=1,x;
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
					cout<<setw(5)<<a[i][j];
					s = s * a[i][j];
				}
			}
	}
	cout<<endl<<"************"<<endl;
	cout<<s;

	cout<<endl<<"************"<<endl;
	int temp = 0, sumRow, row;
		for (i=0;i<n;i++) {
			for (j=0;j<m;j++){
				sumRow+= a[i][j];
			}
			if(temp < sumRow){
                temp = sumRow;
                row = i;
			}
	}
	cout<<row;

	cout<<endl<<"************"<<endl;
	int countt =0;
		for (i=0;i<n;i++) {
			for (j=0;j<m;j++){
				if(a[i][j] < 0){
                    countt++;
				}
			}
	}
	cout<<countt;


}
