#include<iostream>
using namespace std;
int main (){
	int Nilai[20];
	int Posisi[20];
	int i,n,Bil,jmlh=0;
	bool ketemu;
	cout<<"Masukkan Jumlah Deret Bilangan = ";
	cin>>n;
	cout<<endl;
	
	for(i=0;i<n;i++){
		cout<<"Nilai Bilangan Ke-"<<i<<" = ";
		cin>>Nilai[i];
	}
	cout<<"\nDeret Bilangan = ";
	for(i=0;i<n;i++)
		cout<<Nilai[i]<<" ";
		cout<<"\n\nMasukkan Bilangan Yang Akan Dicari = ";
		cin>>Bil;
	
	for(i=0;i<n;i++){
		if(Nilai[i]==Bil){
			ketemu = true;
			Posisi[jmlh]=i;
			jmlh++;
		}
	}
	if (ketemu){
		cout<<"Bilangan " <<Bil<<" Ditemukan Sebanyak "<<jmlh;
		cout<<"\nPada Posisi Ke = ";
		for(i=0;i<jmlh;i++){
			cout<<Posisi[i]<<" ";
		}
	}
	else
	cout<<"Maaf,Bilangan "<<Bil<<" Tidak Ditemukan";
	getchar();
}
