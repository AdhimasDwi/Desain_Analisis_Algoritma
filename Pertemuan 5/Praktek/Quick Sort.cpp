#include <iostream>
#include <string> 
using namespace std;

class math {
private:
    int num[2], Kali, Tambah, Kurang;
    float Bagi;
public:
    void setmath(int n1, int n2) {
        num[0] = n1;
        num[1] = n2;
    }
    int getKali() {
        Kali = num[0] * num[1];
        return Kali;
    }
    int getTambah() {
        Tambah= num[0] + num[1];
        return Tambah;
    }
    int getKurang() {
        Kurang = num[0] - num[1];
        return Kurang;
    }
    bool getBagi() {
        if (num[1] != 0) {
            Bagi = static_cast<float>(num[0]) / num[1];
            return true;
        } else {
            return false;
        }
    }
};

void swap(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

int partition(int arr[], int low, int high) {
    int pivot = arr[high];
    int i = (low - 1);

    for (int j = low; j <= high - 1; j++) {
        if (arr[j] < pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[high]);
    return (i + 1);
}

void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);

        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

int main() {
    math Mtk;
    int num[2];
    char lagi = 'y';
    string pilih;

    while (lagi == 'y') {
        cout << "Masukkan Dua Angka : ";
        cin >> num[0] >> num[1];

        quickSort(num, 0, 1);

        Mtk.setmath(num[0], num[1]);
        cout << "Pilih (+) Tambah , (-) Kurang , (*) Kali , (/)Bagi : ";
        cin >> pilih;

        if (pilih == "+") {
            cout << "\nPlus: " << Mtk.getTambah() << endl;
        } 
		else if (pilih == "-") {
            cout << "Minus : " << Mtk.getKurang() << endl;    
        } 
		else if (pilih == "*") {
            cout << "Perkalian: " << Mtk.getKali() << endl;            
        } 
		else if (pilih == "/") {
            if (Mtk.getBagi()) {
                cout << "Pembagian: " << Mtk.getBagi() << endl;
            } else {
                cout << "Pembagian Dengan 0 Tidak Bisa dilakukan." << endl;
            }
        } 

        cout << "\nApakah Ingin Mengulang [y / n]: ";
        cin >> lagi;
    }

    return 0;
}

