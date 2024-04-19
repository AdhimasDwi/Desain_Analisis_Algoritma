#include <iostream>
#include <string>

using namespace std;

// Kelas dasar Mahasiswa
class Mahasiswa {
public :
    string nama;
    int umur;
    string jurusan;
    string fakultas;

public:
    Mahasiswa(string _nama, int _umur, string _jurusan, string _fakultas)
        : nama(_nama), umur(_umur), jurusan(_jurusan), fakultas(_fakultas) {}

    virtual void displayStatus() = 0; // Fungsi murni virtual

    virtual ~Mahasiswa() {} // Destruktor virtual
};

// Kelas turunan Alumni dari Mahasiswa
class Alumni : public Mahasiswa {
public:
    Alumni(string _nama, int _umur, string _jurusan, string _fakultas)
        : Mahasiswa(_nama, _umur, _jurusan, _fakultas) {}

    void displayStatus() override {
        cout << "Status : Alumni" << endl;
    }
};

// Kelas turunan MahasiswaAktif dari Mahasiswa
class MahasiswaAktif : public Mahasiswa {
public:
    MahasiswaAktif(string _nama, int _umur, string _jurusan, string _fakultas)
        : Mahasiswa(_nama, _umur, _jurusan, _fakultas) {}

    void displayStatus() override {
        cout << "Status : Mahasiswa Aktif" << endl;
    }
};

int main() {
    char lagi;
    Mahasiswa *daftarMahasiswa[100]; // Array untuk menyimpan pointer ke objek Mahasiswa, maksimal 100 mahasiswa

    int count = 0; // Menghitung jumlah mahasiswa yang dimasukkan
    do {
        string nama, jurusan, fakultas;
        int umur;
        char status;

        cout << "Masukkan nama mahasiswa\t\t: ";
        cin >> nama;
        cout << "Masukkan umur mahasiswa\t\t: ";
        cin >> umur;
        cout << "Masukkan jurusan mahasiswa\t: ";
        cin >> jurusan;
        cout << "Masukkan fakultas mahasiswa\t: ";
        cin >> fakultas;
        cout << "Apakah mahasiswa tersebut alumni? (y/n) : ";
        cin >> status;

        Mahasiswa* mahasiswa;

        if (status == 'y' || status == 'Y') {
            mahasiswa = new Alumni(nama, umur, jurusan, fakultas);
        } else {
            mahasiswa = new MahasiswaAktif(nama, umur, jurusan, fakultas);
        }

        daftarMahasiswa[count] = mahasiswa;
        count++;

        cout << "Tambahkan data mahasiswa lagi? (y/n): ";
        cin >> lagi;
    } while (lagi == 'y' || lagi == 'Y');

    cout << "\n\nDaftar Mahasiswa:" << endl;
    for (int i = 0; i < count; ++i) {
        cout << "Nama\t\t: " << daftarMahasiswa[i]->nama << endl;
        cout << "Umur\t\t: " << daftarMahasiswa[i]->umur << endl;
        cout << "Jurusan\t\t: " << daftarMahasiswa[i]->jurusan << endl;
        cout << "Fakultas\t: " << daftarMahasiswa[i]->fakultas << endl;
        daftarMahasiswa[i]->displayStatus();
        cout << endl;
        delete daftarMahasiswa[i]; // Membersihkan memori
    }

    return 0;
}

