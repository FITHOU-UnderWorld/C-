#include <bits/stdc++.h>
using namespace std;

struct Hs
{
    string ma, ht, ngs, lh;
    int sba, tst;
};

vector<Hs> ds;

void nhap_dl()
{
    Hs t;
    int m;
    string s;
    ifstream fi ("input.in");
    while(true)
    {
        fi >> s; t.ma=s; if(s == "***") break;
        getline(fi, s);
        getline(fi, s); t.ht=s;
        fi >> s; t.ngs=s;
        fi >> s; t.lh=s;
        fi >> m; t.sba=m;
        t.tst=t.sba*25000;
        ds.push_back(t);
    }
    fi.close();
}

void prt_title()
{
    cout << setw(3) << "STT" << setw(6) << "Ma " << setw(25) << "Ho va ten" << setw(12) << "Ngay sinh" << setw(5) << "Lop" << setw(8) << "So b_a"
    << setw(15) << "Tong s_t" << endl;
}

void print(Hs x, int k)
{
    cout << setw(3) << k << setw(6) << x.ma << setw(25) << x.ht
    << setw(12) << x.ngs << setw(5) << x.lh << setw(8) << x.sba
    << setw(15) << x.tst << endl;
}

void show()
{
    prt_title();
    int k = 1;
    for(auto v:ds) print(v, k++);
}

void Tong_st()
{
    int64_t ts = 0;
    for(auto v:ds) ts += v.tst;
    cout << "Tong so tien: "<<ts;
}

void Search()
{
    string HT;
    int k = 0;
    cout << "Ho va ten: "; getline(cin, HT);
    for(auto v:ds)
        if(v.ht == HT) print(v, k++);
}

void Menu()
{
    cout << "\nHay chon: ";
    cout << "\n1. Nhap du lieu. ";
    cout << "\n2. Xem du lieu. ";
    cout << "\n3. Tinh tien. ";
    cout << "\n4. Tim kiem. ";
    cout << "\n5. Thoat. ";
}

int main()
{
    Menu();
    char c = '*';
    while(true)
    {
        cout << " \nHay chon: "; cin >> c;
        switch(c)
        {
            case '1':{nhap_dl(); break;}
            case '2':{show(); break;}
            case '3':{Tong_st(); break;}
            case '4':{Search(); break;}
            case '5': return 0;
        }
        Menu();
    }
}
