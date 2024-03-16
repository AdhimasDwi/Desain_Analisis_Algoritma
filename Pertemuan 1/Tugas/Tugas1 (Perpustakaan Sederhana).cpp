#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
// Fungsi untuk membandingkan dua string (judul buku)
bool compareStrings(const string& a, const string& b) {
    return a < b;
}
int main() {
    string judul_buku[100]; // Maksimal 100 judul buku
    int jumlah_judul = 0;
    string judul;

    // Meminta pengguna untuk memasukkan judul buku. Ketik "selesai" untuk berhenti.
    cout << "Masukkan Judul Buku (Ketik 'selesai' Untuk BERHENTI ):\n";
    while (true) {
        cout << "> ";
        getline(cin, judul);
        if (judul == "selesai" || jumlah_judul >= 100) {
            break;
        }
        judul_buku[jumlah_judul++] = judul;
    }

    // Mengurutkan judul buku berdasarkan alfabet menggunakan fungsi sort
    sort(judul_buku, judul_buku + jumlah_judul, compareStrings);

    // Menampilkan judul buku yang telah diurutkan
    cout << "\nJudul Buku Setelah Diurutkan:\n";
    for (int i = 0; i < jumlah_judul; ++i) {
        cout << judul_buku[i] << endl;
    }

    return 0;
}

