#include<bits/stdc++.h>
using namespace std;
int countt[256];
char find_max_appear(char s[])
{
    int mx=0;
    char maxx;
    for(int i=0;i<strlen(s); i++)
    {
        countt[(char)s[i]]++;
        if(countt[s[i]]>mx)
        {
            mx=countt[s[i]];
            maxx=s[i];
        }
    }
    return maxx;
}
int main()
{
    char s[256];
    int countt[256];
    gets(s);
    cout<<"Tu co so lan xuat hien nhieu nhat la: "<<find_max_appear(s);

}

