#include<bits/stdc++.h>
using namespace std;
void nhapMang(int a[], int &n);
void inmang(int a[],int n);
void sapxepgiamdan(int a[],int n);
void luuFilea(FILE *fp,int n,int a[]);
void luuFileb(FILE *fp,int m,int b[]);
void luuFilec(FILE *fp,int k,int c[]);
void docFilea(FILE *fp,int &n,int a[]);
void docFileb(FILE *fp,int &m,int b[]);
void tronmang(int a[], int b[], int c[],int n,int m);
int main()
{
	int n,m,k;
	int a[50],b[50],c[100];
	FILE *fp;
	cout<<"Nhap so phan tu cua mang A la :";cin>>n;
	nhapMang(a,n);
	sapxepgiamdan(a,n);
	luuFilea(fp,n,a);
	cout<<"Nhap so phan tu cua mang B la : "; cin>>m;
	nhapMang(b,m);
	sapxepgiamdan(b,m);
	luuFileb(fp,m,b);
	docFilea(fp,n,a);
	docFileb(fp,m,b);
	tronmang(a,b,c,n,m);
	k=n+m;
	inmang(c,k);
	luuFilec(fp,k,c);
	return 0;
}
void sapxepgiamdan(int a[],int n)
{
	int tg;
	for (int i=0;i<n-1;i++)
	  for (int j=i+1;j<n;j++)
	     if (a[i]<a[j])
	        {
	        	tg=a[i];
	        	a[i]=a[j];
	        	a[j]=tg;
			}
}
void nhapMang(int a[], int &n)
{
	for (int i=0;i<n;i++)
	  {
	  	cout<<"a["<<i<<"] : "; cin>>a[i];
	  }

}
void inmang(int a[],int n)
{
	for (int i=0;i<n;i++)
	  {
	  	cout<<a[i]<<" ";
	  }
}
void docFilea(FILE *fp,int &n,int a[])
{
	int x;
	fp=fopen("A.dat","rb");
	if (fp==NULL)
	  {
	  	cout<<"\n Doc file bi loi \n";
	  	exit(1);
	  }
	n=0;
	while (fread(&x,sizeof(int),1,fp)==1)
	  {
	  	a[n]=x;
	  	n++;
	  }
	fclose(fp);
//	for (int i=0;i<n;i++)
	//   {
	//   	cout<<a[i]<<" ";
	 //  }
}
void docFileb(FILE *fp,int &m,int b[])
{
	int x;
	fp=fopen("B.dat","rb");
	if (fp==NULL)
	  {
	  	cout<<"\n Doc file bi loi \n";
	  	exit(1);
	  }
	m=0;
	while (fread(&x,sizeof(int),1,fp)==1)
	  {
	  	b[m]=x;
	  	m++;
	  }
	fclose(fp);
//	for (int i=0;i<m;i++)
	 //  {
	 //  	cout<<b[i]<<" ";
	 //  }
}
void tronmang(int a[], int b[], int c[],int n,int m)
{
   int i=0,j=0,k=0;
   while (i<n || j<m)
   {
   	  if (i<n && j<m)
   	     {
   	     	if (a[i]>b[j])
   	     	   {
   	     	   	c[k]=a[i];
   	     	   	k++;
   	     	   	i++;
			   }
			else
			{
				c[k]=b[j];
				k++;
				j++;
			}
		 }
	  else if (i<n && j>= m)
	          {
	          	c[k]=a[i];
	          	k++;
	          	i++;
			  }
	  else if (j<m && i>=n)
	          {
	          	c[k]=b[j];
	          	k++;
	          	j++;
			  }
   }
}
void luuFilea(FILE *fp,int n,int a[])
{
	fp=fopen("A.dat","wb");
	for (int i=0;i<n;i++)
	   fwrite(&a[i],sizeof(int),1,fp);
	fclose(fp);
}
void luuFileb(FILE *fp,int m,int b[])
{
	fp=fopen("b.dat","wb");
	for (int i=0;i<m;i++)
	   fwrite(&b[i],sizeof(int),1,fp);
	fclose(fp);
}
void luuFilec(FILE *fp,int k,int c[])
{
	fp=fopen("C.dat","wb");
	for (int i=0;i<k;i++)
	   fwrite(&c[i],sizeof(int),1,fp);
	fclose(fp);
}
