#include<bits/stdc++.h>
using namespace std;
struct thongtin 
{
	string tenxe;
	string mauxe;
	int socho;
	int namsx;
	int giathue;
};
void nhapds(thongtin a[],int &n) {
	cout<<"Nhap vao so xe: ";cin>>n;
	for(int i=0;i<n;i++) {
		cout<<"Nhap vao thong tin xe thu "<<i+1<<endl;
		cout<<"Nhap vao ten xe: ";
		fflush(stdin);
		getline(cin,a[i].tenxe);
		cout<<"Nhap vao mau xe: ";getline(cin,a[i].mauxe);
		cout<<"Nhap vao so cho cua xe: ";cin>>a[i].socho;
		cout<<"Nhap vao nam san xuat cua xe: ";cin>>a[i].namsx;
		cout<<"Nhap vao gia thue cua xe: ";cin>>a[i].giathue;
	}
}
void hiends(thongtin a[],int n) {
	cout<<"STT"<<setw(10)<<"Ten xe"<<setw(10)<<"Mau xe"<<setw(10)<<"So cho"<<setw(10)<<"Nam sx"<<setw(10)<<"Gia thue "<<endl;
	for(int i=0;i<n;i++) {
		cout<<setw(2)<<i+1<<setw(10)<<a[i].tenxe<<setw(10)<<a[i].mauxe<<setw(10)<<a[i].socho<<setw(10)<<a[i].namsx<<setw(10)<<a[i].giathue<<endl;
	}
}
void tim(thongtin a[],int n) {
	int x,y;
	cout<<"Nhap vao khoang ban muon tim kiem: "<<endl;
	cout<<"nam thu nhat: ";cin>>x;
	cout<<"nam thu hai: ";cin>>y;
	if (x>y) {
		int tg=x;
		x=y;
		y=tg;
	}
	cout<<"Danh sach nhung xe co 5 cho va trong khoang tu nam "<<x<<" va "<<y<<" la "<<endl;
	cout<<"STT"<<setw(10)<<"Ten xe"<<setw(10)<<"Mau xe"<<setw(10)<<"So cho"<<setw(10)<<"Nam sx"<<setw(10)<<"Gia thue "<<endl;
	bool kiemtra=false;
	for(int i=0;i<n;i++ )	{
		if(a[i].socho==5&&a[i].namsx>=x&&a[i].namsx<=y) {
			cout<<setw(2)<<i+1<<setw(10)<<a[i].tenxe<<setw(10)<<a[i].mauxe<<setw(10)<<a[i].socho<<setw(10)<<a[i].namsx<<setw(10)<<a[i].giathue<<endl;
			kiemtra=true;
		}
	}
	if(kiemtra==false) cout<<"Khong co xe nam san xuat tu nam "<<x<<" va "<<y<<endl;
}
void xoa(thongtin a[],int &n) {
	int nam;
	cout<<"Nhap vao so nam tro lai ma ban muon xoa: ";
	cin>>nam;
	bool kiemtra=false;
	for(int i=0;i<n;i++) {
		if(nam==2021-a[i].namsx) {
			kiemtra=true;
			a[i]=a[i+1];
			n--;
			i=i-1;
		}
	}
	if(kiemtra==false) cout<<"Khong co nam nam san xuat cach day "<<nam<<" nam"<<endl;
}
void tanggia(thongtin a[],int n) {
	int nam;
	cout<<"Nhap vao nam ma ban muon tang gia: ";cin>>nam;
	bool kiemtra=false;
	for(int i=0;i<n;i++) {
		if(a[i].socho==5&&a[i].socho==5) {
			kiemtra=true;
			a[i].giathue=a[i].giathue*1,1; 
		}
	}
	if(kiemtra==false) cout<<"Khong co xe nao san xuat nam "<<nam<<" va co 5 cho"<<endl;
}

void thempt(thongtin a[], int &n){
	cout<<"nhap so xe ma ban muon them: ";
	cin>>n;
		for(int j=0;j<n;j++){
		cout<<"Nhap vao thong tin xe thu "<<j+2<<endl;
		cout<<"Nhap vao ten xe: ";
		fflush(stdin);
		getline(cin,a[j].tenxe);
		cout<<"Nhap vao mau xe: ";getline(cin,a[j].mauxe);
		cout<<"Nhap vao so cho cua xe: ";cin>>a[j].socho;
		cout<<"Nhap vao nam san xuat cua xe: "<<endl;cin>>a[j].namsx;
		cout<<"Nhap vao gia thue cua xe: ";cin>>a[j].giathue;
	}
}
/*void Tong(thongtin a[], int &n){
	int tong=0, i;
	cout<<"Tong gia tien tat ca xe la: ";
	cin>>a[i].giathue;
	for( i=0;i<n;i++){
	
	tong+=a[i].giathue;
}
}
void sapxep(thongtin a[], int &n){
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n;j++){
			if(strcmp(hiends[i].giatien, hiends[j].giatien)>0){
				swap(hiends[i],hiends[j]);
			}
		}
	}
}*/
int main () {
	int n=10;
	thongtin a[100];
	int c;
	bool kiemtra=false;
	cout<<"1.Nhap vao danh sach xe"<<endl;
	cout<<"2.Hien danh sach xe"<<endl;
	cout<<"3.Tim thong tin theo nam"<<endl;
	cout<<"4.Xoa cac xe duoc san xuat"<<endl;
	cout<<"5.Tang gia 10% cho cac xe san xuat nam"<<endl;
	cout<<"6.Them xe muon nhap them vao"<<endl;
	cout<<"7.Tinh Tong gia thue xe"<<endl;
	cout<<"0.Dung lai"<<endl;
	do {
		cout<<"Moi ban chon: ";
		cin>>c;
		switch(c) {
			case 1: {
				nhapds(a,n);
				kiemtra=true;
				break;
			}
			case 2: {
				if(kiemtra) {
					hiends(a,n);
					break;
				}
				else {
					cout<<"BAN CHUA NHAP!!!!!"<<endl;
					break;
				}
			}
			case 3: {
				if(kiemtra) {
					tim(a,n);
					break;
				}
				else {
					cout<<"BAN CHUA NHAP!!!!"<<endl;
				}
			}
			case 4: {
				if(kiemtra) {
					xoa(a,n);
					hiends(a,n);
					break;
				}
				else {
					cout<<"BAN CHUA NHAP!!!!"<<endl;
				}
			}
			case 5: {
				if(kiemtra) {
					tanggia(a,n);
					hiends(a,n);
					break;
				}
				else {
					cout<<"BAN CHUA NHAP!!!!"<<endl;
					break;
				}
			}
			case 6: {
				if(kiemtra){
					thempt(a,n);
					break;
				}
					else {
					cout<<"BAN CHUA NHAP!!!!"<<endl;
					break;
				}
			}
			/*case 7: {
				if(kiemtra){
					Tong(a,n);
					break;
				}
					else {
					cout<<"BAN CHUA NHAP!!!!"<<endl;
					break;
				}
			}*/
			default: {
				break;
			}
		}
	}
	while(c!=0);
}
		

