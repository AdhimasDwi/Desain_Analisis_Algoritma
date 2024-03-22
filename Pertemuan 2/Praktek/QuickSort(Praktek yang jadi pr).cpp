#include<iostream>
using namespace std;

void quick(int arr[], int kiri, int kanan) {
    if (kiri >= kanan) {
        return;
    }

    int a = kiri, b = kanan;
    int temp;
    int tengah = arr[kiri + (kanan - kiri) / 2];

    while (a <= b) {
        while (arr[a] > tengah) { // ubah kondisi ini
            a++;
        }

        while (arr[b] < tengah) { // ubah kondisi ini
            b--;
        }

        if (a <= b) {
            temp = arr[a];
            arr[a] = arr[b];
            arr[b] = temp;
            a++;
            b--;
        }
    }

    quick(arr, kiri, b);

    if (a < kanan) {
        quick(arr, a, kanan);
    }
}

int main() {
    int n;
    cout << "Masukkan Banyak Data : ";
    cin >> n;

    int data[n];
    cout<<endl;
    for (int i = 0; i < n; i++) {
        cout << "Masukkan Angka : ";
        cin >> data[i];
    }

    cout << "\nData Sebelum Diurutkan : ";
    for (int i = 0; i < n; i++) {
        cout << data[i] << " ";
    }
    quick(data,0,n-1);
cout<<endl;
cout<<"Data Setelah Diurutkan : ";
for(int i=0;i<n;i++){
cout<<data[i]<<" ";
}
}
