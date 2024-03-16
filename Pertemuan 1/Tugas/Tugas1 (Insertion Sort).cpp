//#include <iostream>
//using namespace std;
//
//void insertionSort(int arr[], int n) {
//    int i, r, j;
//    for (i = 1; i < n; i++) {
//        r = arr[i];
//        j = i - 1;
//        while (j >= 0 && arr[j] > r) {
//            arr[j + 1] = arr[j];
//            j = j - 1;
//        }
//        arr[j + 1] = r;
//        cout<<endl;
//        cout << "proses sorting "<<endl;
//        for (int k = 0; k < n; k++) {
//            cout << arr[k]<<" ";
//        }
//        cout << endl;
//    }
//}
//
//int main() {
//    int array[6];
//    int n ;
//
//    // Input array
//    cout << "masukan banyak array : " ;
//	cin>> n ;
//	cout<<endl;
//    for(int i = 0; i < n; i++) {
//        cout << "masukan angka ke " << i << " : ";
//        cin >> array[i];
//    }
//
//    // Sorting array
//    insertionSort(array, n);
//
//    // Output hasil akhir
//    cout << "\nhasil akhir "<<endl;
//    for(int i = 0; i < n; i++) {
//        cout << array[i]<<" ";
//    }
//    cout << endl;
//
//    return 0;
//}

#include <iostream>
using namespace std;

void insertionSort(int arr[], int n) {
    int i, r, j;
    for (i = 1; i < n; i++) {
        r = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] < r) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = r;
        cout<<endl;
        cout << "proses sorting "<<endl;
        for (int k = 0; k < n; k++) {
            cout << arr[k]<<" ";
        }
        cout << endl;
    }
}

int main() {
    int array[100];
    int n ;

    // Input array
    cout << "masukan banyak array : " ;
	cin>> n ;
	cout<<endl;
    for(int i = 0; i < n; i++) {
        cout << "masukan angka ke " << i << " : ";
        cin >> array[i];
    }

    // Sorting array
    insertionSort(array, n);

    // Output hasil akhir
    cout << "\nhasil akhir "<<endl;
    for(int i = 0; i < n; i++) {
        cout << array[i]<<" ";
    }
    cout << endl;

    return 0;
}




