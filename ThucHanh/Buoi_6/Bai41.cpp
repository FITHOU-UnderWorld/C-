#include<bits/stdc++.h>
  using namespace std;
  void Luu(int a[], int &n)
  {
  	fstream file;
  	file.open("DATA.INF",ios::out);
  	cout<<" nhap so luong phan tu n: ";cin>>n;
  	for(int i=0;i<n;i++)
  	{
  		cout<<"nhap a["<<i<<"]=";cin>>a[i];
	  }
	  file.close();
}
void tbc (int a[],int n )
{
	int s=0, dem=0;
	float tbc=0;
	fstream fdoc;
	fdoc.open("DATA.INF",ios::in);
	for (int i=0; i<n;i++)
	{
		fdoc>>a[i];
	}
	for(int i=0;i<n;i++)
	{
		if (a[i]<0)
		{
			s+=a[i];
			dem++;
		}
	}
	tbc= (float)s/dem;
	cout<<"TBC cac phan tu am trong tep la:"<<tbc<<endl;
}
void chen(int a[], int &n)
{
	int x,k;
	fstream fdoc;
	fdoc.open("DATA.INF",ios::in);
	for(int i=0;i<n;i++)
	{
		fdoc>>a[i];

	}
	fdoc.close();
	cout<<"nhap so can chen x:";cin>>x;
	do
	{
		cout<<"Nhap vi tri can thay k: ";cin>>k;
		if(k<0&& k>n)
		{
			cout<<" da nhap sai , moi nhap lai"<<endl;

		}

	}
	while(k>n);
	for(int i=n;i>=k; i--)
	{
		a[i]=a[i-1];
	}
	a[k]=x;
	n++;
	fstream file;
	file.open("DATA.INF",ios::out);
	for(int i=0 ; i<n;i++)
	{
		file<<a[i]<<"\n";
	}
	file.close ();

}
void vtrigtln(int a[],int n)
{
	int v;
	int b=0;
	fstream fdoc;
	fdoc.open("DATA.INF",ios::in);
	for(int i=0;i<n;i++)
	{
		fdoc>>a[i];
	}
	for(int i=0;i<n;i++)
	{
		if(a[i]>b)
		{
			b=a[i];
			v=i;
		}

	}
	cout<<"phan tu lon nhat o trong tep co vi tri la: "<<v;
	fdoc.close();

}
void doc(int a[],int n)
{
	fstream fdoc;
	fdoc.open("DATA.INF",ios::in);
	for(int i=0;i<n;i++)
	{
		fdoc>>a[i];
	}
	cout<<"\nMang trong tep la"<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<"\t";

	}
	fdoc.close();
}
int main()
{
	int a[200];
	int n;
	Luu(a,n);
	tbc(a,n);
	chen(a,n);
	vtrigtln(a,n);
	doc(a,n);
}
