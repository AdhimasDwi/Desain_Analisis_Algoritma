#include <iostream>
#include <string>
using namespace std;

class Kendaraan {
protected:
    string merek;
    int tahunProduksi;
public:
    Kendaraan() {}
    Kendaraan(string _merek, int _tahunProduksi) : merek(_merek), tahunProduksi(_tahunProduksi) {}

    void inputInfo() {
        cout << "Masukkan Merek Kendaraan\t\t: ";
        getline(cin, merek);
        cout << "Masukkan Tahun Produksi\t\t\t: ";
        cin >> tahunProduksi;
        cin.ignore(); // ignore the newline character left in the input buffer
    }

    void info() {
        cout << "Merek\t\t: " << merek << ",  " << "Tahun Produksi  : " << tahunProduksi << endl;
    }
};

class Mobil : public Kendaraan {
protected:
    int jumlahPintu;
public:
    Mobil() {}
    Mobil(string _merek, int _tahunProduksi, int _jumlahPintu) : Kendaraan(_merek, _tahunProduksi), jumlahPintu(_jumlahPintu) {}

    void inputInfo() {
        Kendaraan::inputInfo(); // Call base class Kendaraan's inputInfo() function
        cout << "Masukkan Jumlah Pintu\t\t\t: ";
        cin >> jumlahPintu;
        cin.ignore(); // ignore the newline character left in the input buffer
    }

    void info() {
        Kendaraan::info(); // Call base class Kendaraan's info() function
        cout << "Jumlah Pintu\t: " << jumlahPintu << endl;
    }
};

int main() {
    string merekMobil;
    int tahunProduksiMobil, jumlahPintuMobil;

    Mobil mobil;

    cout << "Input Informasi Mobil" << endl;
    mobil.inputInfo();

    cout << "\n\nInformasi Mobil" << endl;
    mobil.info();

    return 0;
}

