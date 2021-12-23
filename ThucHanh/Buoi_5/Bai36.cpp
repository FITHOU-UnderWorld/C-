#include<bits/stdc++.h>
using namespace std;
struct LinhKien{
    char TenLinhKien[100];
    char QuyCach[20];
    char Loai[10];
    float DonGiaLoai1;
    float DonGiaLoai2;
};
void nhap(LinhKien ds[], int &n){
    for(int i=0; i<n; i++){
        fflush(stdin);
        cout<<"\nNhap ten linh kien: ";
        gets(ds[i].TenLinhKien);
        fflush(stdin);
        cout<<"Nhap quy cach: ";
        gets(ds[i].QuyCach);
        fflush(stdin);
        cout<<"Nhap loai (loai A, loai B): ";
        gets(ds[i].Loai);

        if(strcmp(ds[i].Loai, "loai A") == 0){
           cout<<"Nhap don gia loai 1(tot): ";
            cin>>ds[i].DonGiaLoai1;
        }else{
            cout<<"Nhap don gia loai 2(thuong): ";
            cin>>ds[i].DonGiaLoai2;
        }

    }
}

void xuat(LinhKien ds[],int &n){
    cout<<"\n--------------------"<<endl;
    cout<<"\n"<<setw(25)<<left<<"Ten linh kien"<<setw(15)<<left<<"Quy cach"<<setw(15)<<left<<"Loai"<<setw(12)<<left<<"Don gia loai (1 or 2)";
    for(int i=0; i<n; i++)
    {
	    cout<<"\n"<<setw(25)<<left<<ds[i].TenLinhKien;
	    cout<<setw(15)<<left<<ds[i].QuyCach;
	    cout<<setw(15)<<left<<ds[i].Loai;

	    if(strcmp(ds[i].Loai, "loai A") == 0){
           cout<<setw(12)<<left<<ds[i].DonGiaLoai1;
        }else{
            cout<<setw(12)<<left<<ds[i].DonGiaLoai2;
        }
    }
}

void sapxep(LinhKien ds[], int &n){
    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            if(strcmp(ds[i].TenLinhKien, ds[j].TenLinhKien) > 0){
                swap(ds[i], ds[j]);
            }
        }
    }
}

void du10linhkien(LinhKien ds[], int &n){
    int dem =0;
    for(int i=0; i<n; i++){
        if(strcmp(ds[i].Loai, "loai A") == 0){
            dem++;
        }
    }

    if(dem >= 10){
        cout<<"\nDa du 10 linh kien loai A can thien cho may!"<<endl;
    }else{
        cout<<"\nChua du 10 linh kien loai A can thien cho may!"<<endl;
    }
}
int main(){
    LinhKien ds[200];
    int chon;
    do
    {
        cout<<"\n--------------MENU-----------------\n";
        cout<<" \n1.Nhap danh sach cac linh kien!";
        cout<<" \n2.Hien thi danh sach linh kien da nhap!";
        cout<<" \n3.Sap xep linh kien giam dan theo loai va ten!";
        cout<<" \n4.Cho biet da co du 10 linh kien loai A can thiet chua!";
        cout<<" \n0.Thoat!\n";
        cout<<" \n ";
        cout<<"Lua chon: ";
        cin>>chon;
        switch(chon)
        {
        case 1:
            system("cls");
            int n;
            cout<<"\nNhap so luong linh kien: ";
            cin>>n;
            nhap(ds, n);
            break;
        case 2:
            system("cls");
            cout<<"\nDanh sach linh kien vua nhap!";
            xuat(ds, n);
            break;
        case 3:
            system("cls");
            cout<<"Sap xep linh kien thanh cong!";
            sapxep(ds, n);
            break;
        case 4:
            system("cls");
            cout<<"Cho biet co du linh kien lap may hay chua!";
            du10linhkien(ds, n);
            break;
        case 0:
            system("cls");
            exit(1);
            break;
        default :
            cout<<" \n Ban chon sai, moi chon lai! ";
        }
    }
    while(chon!=0);
}

