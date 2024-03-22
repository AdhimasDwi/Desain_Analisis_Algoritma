//#include <iostream>
//#include <string>
//using namespace std;
//
//class Mahasiswa {
//	public :
//		string nama;
//		int npm,a,i;
//		
//		void cetakData(){
//			for(int i=1;i<=a;i++){
//			cout<<"Mahasiswa "<<i<<" : ";
//			cout<<"\nNama : "<<nama;
//			cout<<"\nNPM  : "<<npm;
//		}
//}
//};
//
//int main(){
//	string nama;
//	int npm,a,n;
//	Mahasiswa mhs;
//	cout<<"Masukkan Banyak Data : ";
//	cin>>a;
//	cout<<endl;
//	for(int i=1;i<=a;i++){
//	cout<<"Masukkan Nama Mahasiswa "<<i<<" : ";
//	cin>>mhs.nama;
//	cout<<"Masukkan NPM Mahasiswa  "<<i<<" : ";
//	cin>>mhs.npm;
//}
//	cout<<endl;
//	for(int i=1;i<=a;i++){
//    mhs.cetakData();
//}
//cout<<endl;
//}



#include <iostream>
#include <string>

using namespace std;

class Mahasiswa {
private:
    string nama;
    string npm;

public:
    Mahasiswa() : nama(""), npm("") {}

    Mahasiswa(string _nama, string _npm) : nama(_nama), npm(_npm) {}

    void setNama(string _nama) {
        nama = _nama;
    }

    void setNPM(string _npm) {
        npm = _npm;
    }

    string getNama() const {
        return nama;
    }

    string getNPM() const {
        return npm;
    }
};

int main() {
    int jumlahMahasiswa;
    cout << "Masukkan jumlah mahasiswa: ";
    cin >> jumlahMahasiswa;

    Mahasiswa *daftarMahasiswa = new Mahasiswa[jumlahMahasiswa];
cout<<endl;
    for (int i = 0; i < jumlahMahasiswa; ++i) {
        string nama, npm;
        cout << "Masukkan nama mahasiswa " << i+1 << ": ";
        cin >> nama;
        cout << "Masukkan NPM mahasiswa  " << i+1 << ": ";
        cin >> npm;

        daftarMahasiswa[i] = Mahasiswa(nama, npm);
    }

    for (int i = 0; i <jumlahMahasiswa; ++i) {
    	cout << "\nMahasiswa " <<i+1;
        cout << "\nNama\t: " << daftarMahasiswa[i].getNama() ;
		cout<<endl<< "NPM\t: " << daftarMahasiswa[i].getNPM() << endl;
    }

    
    return 0;
}

