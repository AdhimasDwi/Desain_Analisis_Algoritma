#include <iostream>
#include <string>
using namespace std;

class Contact {
private:
    string nama, nomor;

public:
    Contact() {}

    Contact(string nama, string nomor) {
        this->nama = nama;
        this->nomor = nomor;
    }

    string getName() {
        return nama;
    }

    string getPhoneNumber() {
        return nomor;
    }
};

int main() {
    const int maxContacts = 10;
    Contact contacts[maxContacts];
    int jumlahKontak = 0;
    string choice;

    cout << "Masukkan Kontak [Maksimal 10 Kontak]! " << endl;

    while (jumlahKontak < maxContacts) {
        string nama, nomor;
        cout << "\nMasukkan Nama Kontak Ke-" << (jumlahKontak + 1) << "\t    : ";
        getline(cin, nama);
        cout << "Masukkan Nomor Telepon Kontak Ke-" << (jumlahKontak + 1) << "  : ";
        getline(cin, nomor);

        contacts[jumlahKontak] = Contact(nama, nomor);
        jumlahKontak++;

        cout << "Kontak Berhasil Ditambahkan." << endl;
        cout << "\nTambahkan Kontak Lagi (y/n) : ";
        getline(cin, choice);
        if (choice != "y" && choice != "Y") {
            break;
        }
    }
    
    cout << "\nDaftar kontak:";
    
    for (int i = 0; i < jumlahKontak; i++) {
        cout << "\nKontak ke-" << (i + 1) << "\nNama Kontak\t: " << contacts[i].getName() << "\nNomor Telepon   : " << contacts[i].getPhoneNumber() << endl;
    }
    
    return 0;
}
