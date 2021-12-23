#include <bits/stdc++.h>
using namespace std;
struct Auto
{
    string name,color;
    int seats,year,cost;
};
vector<Auto> dl;
void nhap_dl()
{
    Auto t;
    ifstream fi("input.txt");
    while(true)
    {
        fi>>t.name;
        if(t.name=="***") break;
        fi>>t.color>>t.seats>>t.year>>t.cost;
        dl.push_back(t);
    }
    fi.close();
}
void prt_title()
{
    cout<<setw(3)<<"STT"<<setw(10)<<"Ten xe"<<setw(10)<<"Cho ngoi"<<setw(10)<<"Nam SX"<<setw(10)<<"Gia thue"<<endl;
}
void print(Auto a,int k)
{
    cout<<setw(3)<<k<<setw(10)<<a.name<<setw(10)<<a.seats<<setw(10)<<setw(10)<<a.year<<setw(10)<<a.cost<<endl;
}
bool cmp(Auto p,Auto q)
{
    return (p.cost<q.cost);
}
void show(int a,int b)
{
    prt_title();
    sort(dl.begin(),dl.end(),cmp);
    int k=1;
    for(auto v:dl)
        if(v.cost>=a&&v.cost<=b) print(v,k++);
}
void case_1()
{
    nhap_dl();
    prt_title();
    int k=1;
    for(auto v:dl) print(v,k++);
}
void case_2()
{
    prt_title();
    int k=1;
    for(auto v:dl) print(v,k++);
}
void case_3()
{
    int x,y;
    cout<<"x= ";cin>>x;
    cout<<"y= ";cin>>y;
    cout<<"*************\n";
    show(x,y);
}
void case_4()
{
    int n,curr_y,m;
    cout<<"Thoi han: ";cin>>n;
    cout<<"Nam hien tai: ";cin>>curr_y;
    m=curr_y-n;
    int k=0;
    for(int i=0;i<dl.size();i++)
        if(dl[i].year>m) dl[k++]=dl[i];
    dl.resize(k);
    cout<<"---------------\n";
    prt_title();
    k=1;
    for(auto v:dl) print(v,k++);
}
void case_5()
{
    for(auto &v:dl)
        if(v.seats==5) v.cost+=v.cost/10;
    cout<<"................\n";
    prt_title();
    int tt=1;
    for(auto v:dl) print(v,tt++);
}
int main()
{
    cout<<"1. Nhap du lieu\n";
    cout<<"2. Hien thi du lieu vao\n";
    cout<<"3. Cac xe trong pham vi va gia thue\n";
    cout<<"4. Loai bo cac xe\n";
    cout<<"5. Giam gia\n";
    cout<<"6. Thoat\n";
    char c;
    while(true)
    {
        cout<<"Chon: ";cin>>c;
        if(c<'1'||c>'6')
        {cout<<"Hay chon lai\n";continue;}
        switch(c)
        {
            case '1':{case_1();break;}
            case '2':{case_2();break;}
            case '3':{case_3();break;}
            case '4':{case_4();break;}
            case '5':{case_5();break;}
            case '6':return 0;
        }
    }
}
