#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,t5,t10,t20,t50;
    cout<<"Nhap vao so tien muon doi: "<<endl;
    cin>>t;
    t50=t/50; t=t-t50*50;
    t20=t/20; t=t-t20*20;
    t10=t/10; t=t-t10*10;
    t5=t/5; t=t-t5*5;
   cout<<"So tien co the doi duoc: "<<endl;
   cout<<t50<<" to menh gia 50"<<endl;
   cout<<t20<<" to menh gia 20"<<endl;
   cout<<t10<<" to menh gia 10"<<endl;
   cout<<t5<<" to menh gia 5"<<endl;
   cout<<t<<" to menh gia 1"<<endl;
}
