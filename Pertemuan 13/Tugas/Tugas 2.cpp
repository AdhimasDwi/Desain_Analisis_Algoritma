#include <iostream>

using namespace std;

// Struktur untuk tabel hash
struct HashTable {
    int *table;
    int size;
};

// Fungsi untuk menginisialisasi tabel hash
HashTable initializeHashTable(int size) {
    HashTable ht;
    ht.size = size;
    ht.table = new int[size];
    for (int i = 0; i < size; i++) {
        ht.table[i] = -1; // Inisialisasi dengan -1 untuk mewakili kosong
    }
    return ht;
}

// Fungsi untuk menghitung indeks hash
int hashFunction(int key, int size) {
    return key % size;
}

// Fungsi untuk memasukkan elemen ke tabel hash
void insertElement(HashTable &ht, int key) {
    int index = hashFunction(key, ht.size);
    
    // Linear probing
    while (ht.table[index] != -1) {
        index = (index + 1) % ht.size; // Mencari indeks berikutnya
    }
    ht.table[index] = key;
}

// Fungsi untuk menampilkan isi tabel hash
void displayHashTable(HashTable ht) {
    cout << "Isi Tabel Hash:\n";
    for (int i = 0; i < ht.size; i++) {
        cout << i << " --> ";
        if (ht.table[i] == -1) {
            cout << "Kosong" << endl;
        } else {
            cout << ht.table[i] << endl;
        }
    }
}

// Fungsi untuk mencari elemen dalam tabel hash
int searchElement(HashTable ht, int key) {
    int index = hashFunction(key, ht.size);
    
    // Linear probing
    while (ht.table[index] != -1) {
        if (ht.table[index] == key) {
            return index; // Elemen ditemukan
        }
        index = (index + 1) % ht.size; // Mencari indeks berikutnya
    }
    return -1; // Elemen tidak ditemukan
}

int main() {
    int size, numElements, key;

    cout << "Masukkan ukuran tabel hash: ";
    cin >> size;

    cout << "Masukkan jumlah elemen yang akan disisipkan: ";
    cin >> numElements;

    HashTable ht = initializeHashTable(size);

    cout << "Masukkan " << numElements << " elemen:\n";
    for (int i = 0; i < numElements; i++) {
        cin >> key;
        insertElement(ht, key);
    }

    displayHashTable(ht);

    cout << "Masukkan elemen yang ingin dicari dalam tabel hash : ";
    cin >> key;

    int index = searchElement(ht, key);
    if (index != -1) {
        cout << key << " ditemukan dalam tabel hash." << endl;
    } else {
        cout << key << " tidak ditemukan dalam tabel hash." << endl;
    }

    return 0;
}

