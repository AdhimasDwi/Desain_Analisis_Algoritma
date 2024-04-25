#include <iostream>
#include <string>

using namespace std;

struct Barang {
    string nama;
    int harga;
};

int main() {
    Barang daftarBarang[5] = {
        {"Buku", 5000},
        {"Pensil", 1000},
        {"Pulpen", 2000},
        {"Penghapus", 500},
        {"Penggaris", 1500}
    };

    string nama;
    cout << "Masukkan Nama Barang Yang Ingin Dicari : ";
    getline(cin,nama);
        
    bool ketemu = false;
    for (int a = 0; a < 5; a++) {
        if (daftarBarang[a].nama == nama) {
            cout << "\nBarang " << nama << " Ditemukan Dengan Harga Rp." << daftarBarang[a].harga << endl;
            ketemu = true;
            break;
        }
    }

    if (!ketemu) {
        cout << "Maaf, barang " << nama << " Tidak Ditemukan Dalam Daftar " << endl;
    }

    return 0;
}
