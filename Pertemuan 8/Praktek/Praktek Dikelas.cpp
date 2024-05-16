#include <iostream>
#include <limits>

using namespace std;

const int MAX_SIZE = 3; // maximum size of the queue

int queue[MAX_SIZE];
int front = 0;
int rear = 0;
int count = 0;

void enqueue(int value) {
    if (count == MAX_SIZE) {
        cout << "Antrian Sudah Penuh!" << endl;
        return;
    }
    queue[rear] = value;
    rear = (rear + 1) % MAX_SIZE;
    count++;
}

void dequeue() {
    if (count == 0) {
        cout << "Antrian Masih Kosong!" << endl;
        return;
    }
    cout << "Mengeluarkan Antrian: " << queue[front] << endl;
    front = (front + 1) % MAX_SIZE;
    count--;
}

void displayQueue() {
    if (count == 0) {
        cout << "Antrian Masih Kosong!" << endl;
        return;
    }
    cout << "Antrian: ";
    for (int i = 0; i < count; i++) {
        cout << queue[(front + i) % MAX_SIZE] << " ";
    }
    cout << endl;
}

int main() {
    int choice, value;
    do {
        cout << "Menu Antrian:" << endl;
        cout << "1. Masukkan Nomor Peserta Kedalam Antrian" << endl;
        cout << "2. Hapus Nomor Peserta Terakhir Dari Antrian" << endl;
        cout << "3. Tampilkan Semua Nomor Peserta Dalam Antrian" << endl;
        cout << "4. Keluar Dari Program" << endl;
        cout << "Pilihan : ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Masukkan Nomor Peserta : ";
                cin >> value;
                enqueue(value);
//                cout<<"Nomor Peserta Dalam Antrian : "<<value;
                break;
            case 2:
                dequeue();
                break;
            case 3:
                displayQueue();
                break;
            case 4:
                cout << "Terima Kasih" << endl;
                break;
            default:
                cout << "Pilihan tidak valid." << endl;
        }
        cout << endl;
    } while (choice!= 4);

    return 0;
}
