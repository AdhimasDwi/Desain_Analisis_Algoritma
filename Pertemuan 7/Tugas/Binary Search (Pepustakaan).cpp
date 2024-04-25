#include <iostream>
#include <string>
using namespace std;
// Fungsi untuk mencari rak buku berdasarkan huruf awal dari judul buku
int binarySearch(char rak[], int n, char target) {
    int low = 0;
    int high = n - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;
        
        if (rak[mid] == target) {
            return mid + 1; // Jika ditemukan, kembalikan nomor rak buku
        } else if (rak[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    return -1; // Jika tidak ditemukan, kembalikan -1
}

int main() {
    // Array untuk menyimpan huruf awal dari judul buku dan nomor rak buku yang sesuai
    char rak[] = {'A', 'B','C', 'D', 'E','F', 'G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
    int num_racks = sizeof(rak) / sizeof(rak[0]);

    char input;
    bool ulang= true;

    while (ulang) {
        // Meminta input dari pengguna
        cout << "\nMasukkan Huruf Awal Dari Judul Buku Yang Ingin Dicari (Huruf Besar) : ";
        cin >> input;

        // Melakukan pencarian biner
        int result = binarySearch(rak, num_racks, input);

        // Menampilkan hasil pencarian
        if (result != -1) {
            cout << "Buku Dengan Huruf Awal '" << input << "' Dapat Ditemukan Di Rak Nomor " << result << endl;
        } else {
            cout << "Buku Dengan Huruf Awal '" << input << "' Tidak Ditemukan." << endl;
        }

        // Memeriksa apakah pengguna ingin mengulangi pencarian
        char choice;
        cout << "Apakah Anda Ingin Mencari Buku Lain? (y/n): ";
        cin >> choice;
        if (choice != 'y' && choice != 'Y') {
            ulang = false;
        }
    }


    return 0;
}

