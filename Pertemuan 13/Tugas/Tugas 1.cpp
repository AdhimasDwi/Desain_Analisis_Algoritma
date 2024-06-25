#include <iostream>
#include <vector>
using namespace std;

const int TABLE_SIZE = 13; // Ukuran tabel hash

class HashTable {
private:
    vector<int> table;
    vector<bool> occupied;

    // Fungsi hash pertama
    int hash1(int key) {
        return key % TABLE_SIZE;
    }

    // Fungsi hash kedua
    int hash2(int key) {
        return 1 + (key % (TABLE_SIZE - 1));
    }

public:
    HashTable() {
        table.resize(TABLE_SIZE, -1); // Inisialisasi tabel dengan nilai -1
        occupied.resize(TABLE_SIZE, false); // Inisialisasi semua slot sebagai tidak terisi
    }

    // Menyisipkan elemen ke dalam hash table
    void insert(int key) {
        int index = hash1(key);
        int step = hash2(key);

        // Cari slot kosong menggunakan double hashing
        while (occupied[index]) {
            index = (index + step) % TABLE_SIZE;
        }

        table[index] = key;
        occupied[index] = true;
    }

    // Mencari elemen dalam hash table
    bool search(int key) {
        int index = hash1(key);
        int step = hash2(key);

        // Cari elemen dengan double hashing
        while (occupied[index]) {
            if (table[index] == key) {
                return true;
            }
            index = (index + step) % TABLE_SIZE;
        }

        return false;
    }

    // Menghapus elemen dari hash table
    void remove(int key) {
        int index = hash1(key);
        int step = hash2(key);

        // Cari elemen dengan double hashing
        while (occupied[index]) {
            if (table[index] == key) {
                table[index] = -1;
                occupied[index] = false;
                return;
            }
            index = (index + step) % TABLE_SIZE;
        }
    }

    // Menampilkan hash table
    void display() {
        for (int i = 0; i < TABLE_SIZE; ++i) {
            if (occupied[i]) {
                std::cout << i << " --> " << table[i] << endl;
            } else {
                std::cout << i << endl;
            }
        }
    }
};

int main() {
    HashTable hashTable;

    // Menyisipkan beberapa elemen ke dalam hash table
    hashTable.insert(10);
    hashTable.insert(22);
    hashTable.insert(31);
    hashTable.insert(4);
    hashTable.insert(15);
    hashTable.insert(28);
    hashTable.insert(17);
    hashTable.insert(88);
    hashTable.insert(59);

    // Menampilkan hash table setelah penyisipan
    cout << "Hash table setelah penyisipan:" << endl;
    hashTable.display();

    // Mencari beberapa elemen dalam hash table
    cout << "\nMencari 22: " << (hashTable.search(22) ? "Ditemukan" : "Tidak Ditemukan") << endl;
    cout << "Mencari 25: " << (hashTable.search(25) ? "Ditemukan" : "Tidak Ditemukan") << endl;

    // Menghapus elemen dari hash table
    hashTable.remove(22);
    cout << "\nHash table setelah menghapus 22:" << endl;
    hashTable.display();

    return 0;
}

