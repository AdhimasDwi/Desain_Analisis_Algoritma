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

