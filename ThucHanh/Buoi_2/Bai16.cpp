#include <bits/stdc++.h>
using namespace std;
int main()
{
  long double n=0, t=1.0, eps=1e-12, pi=0;
  while (t>=eps)
  {
    n +=1;
    t =1.0/n/n;
    cout<<n;
    if(t<eps) break;
    pi +=t;
  }
  pi = sqrt(pi*6.0);
  cout<<fixed<<setprecision(6)<<pi<<endl;
  system("pause");
  return 0;
}
