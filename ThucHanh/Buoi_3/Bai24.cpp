#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    vector<vector<int>>a;
    vector<int>b;
    int t;
    while(true)
    {
        while(true)
        {
            cin >> t;
            if(t==0) break;
            b.emplace_back(t);
        }
        if(b.size()==0) break;
        a.emplace_back(b);
        b.clear();
    }
    int n = a.size();
    for(int i=0; i<n; ++i)
    {
        for(int j:a[i]) cout << setw(4) << j;
        cout << endl;
    }

    for(int i=0; i<n; ++i)
        cout << "\n Trung binh cong hang "<<i<<" : " << (float)accumulate(a[i].begin(), a[i].end(),0)/a[i].size();

    vector<pair<int,int>> row;
    vector<vector<int>> tmp;
    for(int i=0; i<n; ++i) row.push_back({(int)a[i].size(),i});
    sort(row.rbegin(), row.rend());
    cout << "\n Mang du lieu theo so phan tu giam dan o moi hang: \n";
    for(int i=0; i<n; ++i)
        tmp.push_back(a[row[i].second]);
    a.clear();
    for(int i=0; i<n; ++i)
        a.push_back(tmp[i]);
    for(int i=0; i<n; ++i)
    {
        for(int j:a[i]) cout << setw(4) << j;
        cout << endl;
    }

    int k;
    cin >> k;
    while(true)
    {
        cin >> t;
        if(t==0) break;
        a[k].emplace_back(t);
    }
    int p = a[0].size();
    for(int i=1; i<n; ++i)
    {
        int q = a[i].size();
        for(int j=q; i<p; ++j) a[i].push_back(a[i-1][j]);
    }
    cout << "Fill:\n";
    for(int i=0; i<n; ++i)
    {
        for(int j:a[i]) cout << setw(4) << j;
        cout << endl;
    }
}
