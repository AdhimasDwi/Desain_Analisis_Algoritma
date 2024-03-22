#include <iostream>
#include <string>

using namespace std;

class Pelajar {
private:
    string nama;
    int umur;
    string kelas;
    bool statusPinjam;

public:
    // Constructor
    Pelajar() : nama(""), umur(0), kelas(""), statusPinjam(false) {}

    // Setter
    void setNama(string _nama) {
        nama = _nama;
    }

    void setUmur(int _umur) {
        umur = _umur;
    }

    void setKelas(string _kelas) {
        kelas = _kelas;
    }

    void setStatusPinjam(bool pinjam) {
        statusPinjam = pinjam;
    }

    // Getter
    string getNama() const {
        return nama;
    }

    int getUmur() const {
        return umur;
    }

    string getKelas() const {
        return kelas;
    }

    bool getStatusPinjam() const {
        return statusPinjam;
    }

    void pinjamBuku(string judulBuku) {
        if (!statusPinjam) {
            cout << endl<< nama << " (" << kelas << ") meminjam buku \"" << judulBuku << "\" dari perpustakaan." << endl;
            statusPinjam = true;
        } else {
            cout << "Maaf, " << nama << " (" << kelas << ") sudah meminjam buku." << endl;
        }
    }

    void kembalikanBuku(string judulBuku) {
        if (statusPinjam) {
            cout <<endl<<endl<< nama << " (" << kelas << ") mengembalikan buku \"" << judulBuku << "\" ke perpustakaan." << endl;
            statusPinjam = false;
        } else {
            cout << "Maaf, " << nama << " (" << kelas << ") tidak sedang meminjam buku." << endl;
        }
    }
};

int main() {
    Pelajar pelajar;

    // Input data pelajar
    string nama, kelas;
    int umur;
    cout << "Masukkan nama pelajar\t: ";
    getline(cin, nama);
    cout << "Masukkan umur pelajar\t: ";
    cin >> umur;
    cin.ignore(); // Membuang karakter newline di buffer
    cout << "Masukkan kelas pelajar\t: ";
    getline(cin, kelas);

    // Set data pelajar
    pelajar.setNama(nama);
    pelajar.setUmur(umur);
    pelajar.setKelas(kelas);

    // Meminjam dan mengembalikan buku
    string judulBuku;
    cout << "Masukkan judul buku yang ingin dipinjam : ";
    getline(cin, judulBuku);
    pelajar.pinjamBuku(judulBuku);

    cout << "\nMasukkan judul buku yang ingin dikembalikan : ";
    getline(cin, judulBuku);
    pelajar.kembalikanBuku(judulBuku);

    return 0;
}






