#include<iostream>
using namespace std;

int tambah(float m, float n){
	int hasil = m+n;
	return hasil;
}
int kurang(float m, float n){
	int hasil = m - n;
	return hasil;
}
float kali(float m,float n){
	float hasil = m * n;
	return hasil;
	
}
float bagi(float m,float n){
	float hasil = m / n;
	return m/n;
	
}

int main()
{
    char a, pilih;
    float i1, j2;
    int hasil,m,n;
	awal : 
	
	cout << "Masukkan Bilangan Pertama : ";
    cin >> i1;
    cout<<"Masukkan Bilangan Kedua\t  : ";
	cin>>j2;
    
    cout << "Pilih Operasi Yang Akan Dilakukan [ Tambah (+),Kurang (-),Kali (*),Bagi (/) ] : ";
	cin >> a;
	
    switch (a){
		case '+':
			hasil =tambah(m,n);
			cout << "Hasil Pertambahan = " << tambah(i1, j2);
		break;
		case '-':
			hasil=kurang(m,n);
			cout << "Hasil Pengurangan = " << kurang(i1, j2);
		break;
		case '*':
			hasil=kali(m,n);
			cout << "Hasil Perkalian   = " << kali(i1, j2);
		break;
		case '/' :
			hasil=bagi(m,n);
			if (j2 == 0){
				cout << "Pembagian dengan 0 tidak dapat dilakukan.";
			}else{
			cout << "Hasil Pembagian   = " << bagi(i1, j2); 
			}
		
	}
	
	cout << endl << "Apakah Anda Ingin Mengulang Program : [y / n]  ";
	cin >> pilih;
	cout<<endl;
	while (pilih == 'y' ){
		goto awal;
		
	}
return 0 ;

}
