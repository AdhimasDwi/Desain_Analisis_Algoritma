#include <iostream>
using namespace std;
class Karyawan{
	private :
	string nama;
	int usia,gaji;
	
	public :
		void setNama(string a){
			nama=a;
		}
		string getNama(){
			return nama;
		}
		void setUsia(int b){
			usia=b;
		}
		int getUsia(){
			return usia;
		}
		
		void setGaji(int c){
			gaji=c;
		}
		int getGaji(){
			return gaji;
		}
};

int main(){
	
	Karyawan kry;
	string nama;
	int usia, gaji;
	
	cout<<"Masukan Nama = ";
	getline(cin, nama);
	cout<<"Masukan Usia = ";
	cin>>usia;
	cout<<"Masukan Gaji = ";
	cin>>gaji;
	
	kry.setNama(nama);
	kry.setUsia(usia);
	kry.setGaji(gaji);
	cout << endl;
	cout<<"Nama : "<<kry.getNama() << endl;
	cout<<"Usia : "<<kry.getUsia() << endl;
	cout<<"Gaji : " << kry.getGaji() << endl;
	return 0;
}
