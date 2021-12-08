#include <bits/stdc++.h>
using namespace std;
int main()
{
    char a[100],b[100];
    fflush(stdin);
    cout<<"Nhap chuoi a: ";
    gets(a);
    fflush(stdin);
    cout<<"Nhap chuoi b: ";
    gets(b);
    int n=strlen(a);
    int m=strlen(b);
    int j=0;
    int ans=0;

    for(int i=0; i<n; i++)
    {
        bool check=true;
        for(int z=i; z<m+i; z++)
        {
            if(a[z]==b[j])
                j++;
            else
            {
                check=false;
                break;
            }
        }
        if(check)
            ans++;
        j=0;
    }
    cout<<"So lan xuat hien cua chuoi: ";
    puts(b);
    cout<<"Trong chuoi: ";
    puts(a);
    cout<<"la: "<<ans;
    return 0;
}
