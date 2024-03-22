#include <iostream>
using namespace std;

void print(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i];
        if (i < size - 1) cout << ", ";
    }
    cout << "]" << endl;
}

void mrg(int ar[], int low, int mid, int high, int& comparisons, int& mov) {
    int ls = mid - low + 1;
    int rs = high - mid;

    int l[ls];
    int r[rs];

    for (int i = 0; i < ls; i++) {
        l[i] = ar[low + i];
        mov++;
    }
    for (int j = 0; j < rs; j++) {
        r[j] = ar[mid + 1 + j];
        mov++;
    }

    int i = 0, j = 0, k = low;

    while (i < ls && j < rs) {
        comparisons++;
        if (l[i] >= r[j]) { 
            ar[k] = l[i];
            i++;
        } else {
            ar[k] = r[j];
            j++;
        }
        k++;
        mov++;
    }

    while (i < ls) {
        ar[k] = l[i];
        i++;
        k++;
        mov++;
    }

    while (j < rs) {
        ar[k] = r[j];
        j++;
        k++;
        mov++;
    }
}

void ms(int arr[], int low, int high, int& comparisons, int& movements) {
    if (low < high) {
        int mid = low + (high - low) / 2;

        cout << "Memecah List [";
        print(arr + low, mid - low + 1);

        ms(arr, low, mid, comparisons, movements);

        cout << "Memecah List [";
        print(arr + mid + 1, high - mid);
        ms(arr, mid + 1, high, comparisons, movements);

        cout << "Menggabungkan List [";
        print(arr + low, high - low + 1);
        mrg(arr, low, mid, high, comparisons, movements);
    }
}

int main() {
    int data[100], size;
    int comparisons = 0, movements = 0;
    
    cout<<"Masukan 10 elemen : ";
    for (int i = 0; i < 10; i++) {
       cin >> data[i];
    }
	
	system("cls");
	
    cout << "Data awal: [";
    for (int i = 0; i < 10; i++) {
        cout << data[i];
        if (i < 10 - 1) cout << ", ";
    }
    cout << "]" << endl;

    ms(data, 0, 10 - 1, comparisons, movements);

    cout << "\nData terurut secara descending: [";
    for (int i = 0; i < 10; i++) {
        cout << data[i];
        if (i < 10 - 1) cout << ", ";
    }
    cout << "]" << endl;

}
