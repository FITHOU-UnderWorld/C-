#include <bits/stdc++.h>
using namespace std;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int a[100], b[100], c[100];
    int n;
    cin >> n;
    for(int i=0; i < n; ++i)
    {
        cin >> a[i];
    }
    for(int i=0; i < n; ++i)
    {
        cin >> b[i];
    }
    for(int i=0; i < n; ++i)
    {
        c[i] = a[i] + b[i];
    }

    for(int i=0; i < n; ++i){
        cout << a[i] << "\t";
    }
    cout << "\n";
    for(int i=0; i < n; ++i){
        cout << b[i] << "\t";
    }
    cout << "\n";
    for(int i=0; i < n; ++i){
        cout << c[i] << "\t";
    }
}
