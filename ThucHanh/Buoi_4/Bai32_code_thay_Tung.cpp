#include <bits/stdc++.h>
using namespace std;

string s;
string pt1 = "ABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLMNOPQRSTUVWXYZ";
string pt2 = "abcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyz";

string encoding(string x, int k)
{
    string r = x;
    for(int i=0; i<x.size(); ++i)
        r[i] = (x[i]<'a') ? pt1[x[i] - 'A' + k] : pt2[x[i] - 'a' + k];
    return r;
}

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    cin >> s;
    int k;
    cin >> k;
    k = k%26;
    string ans = encoding(s, k);
    cout << ans;
}
