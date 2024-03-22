#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <stdio.h>
using namespace std;

int part(int ar[], int low, int high) {
    int pivot = ar[high];
    int i = low - 1;

    for (int j = low; j < high; j++) {
        if (ar[j] > pivot) {
            i++;
            swap(ar[i], ar[j]);
        }
    }
    swap(ar[i + 1], ar[high]);
    return i + 1;
}

void qs(int rr[], int low, int high,int n) {
    if (low < high) {
        int pi = part(rr, low, high);
		
		
		cout << "[";
        for (int i = 0; i <n; i++) {
        	cout << rr[i] << " ";
    	}
    	cout << "]";
    	cout << endl;

        qs(rr, low, pi - 1,n);
        qs(rr, pi + 1, high,n);
    }
}

int main() {
    int ar[100];
    int n;
    cout<<"Masukkan Banyak Data : ";
    cin>>n;
	
	cout<<"Masukkan Angka :  ";
	for (int i = 0; i < n; i++) {
        cin>>ar[i];
    }
	cout<<endl;
    cout << "Data Yang Akan Disorting : ";
    for (int i = 0; i < n; i++) {
       	cout << ar[i] << " ";
    }
    cout << endl << endl;

    cout << "Quick Sort: " << endl;
    qs(ar, 0, n- 1,n);

    return 0;
}
