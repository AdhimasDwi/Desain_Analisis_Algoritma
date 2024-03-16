//#include <iostream>
//using namespace std;
//
//void selectionSort(int arr[], int n) {
//    int i, j, z, temp;
//    for (i = 0; i < n-1; i++) {
//        z = i;
//        for (j = i+1; j < n; j++) {
//            if (arr[j] < arr[z]) {
//                z= j;
//            }
//        }
//        if (z != i) {
//            temp = arr[i];
//            arr[i] = arr[z];
//            arr[z] = temp;
//            cout<<endl;
//            cout << "proses sorting "<<endl;
//            for (int k = 0; k < n; k++) {
//                cout << arr[k]<<" ";
//            }
//            cout << endl;
//        }
//    }
//}
//
//int main() {
//    int array[100];
//    int n ;
//
//    // Input array
//    cout << "masukan banyak array : " ;
//	cin>>n;
//	cout<<endl;
//    for(int i = 0; i < n; i++) {
//        cout << "masukan nilai elemen " << i << " : ";
//        cin >> array[i];
//       
//    }
//
//    // Sorting array
//    selectionSort(array, n);
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

void selectionSort(int arr[], int n) {
    int i, j, z, temp;
    for (i = 0; i < n-1; i++) {
        z = i;
        for (j = i+1; j < n; j++) {
            if (arr[j] > arr[z]) {
                z= j;
            }
        }
        if (z != i) {
            temp = arr[i];
            arr[i] = arr[z];
            arr[z] = temp;
            cout<<endl;
            cout << "proses sorting "<<endl;
            for (int k = 0; k < n; k++) {
                cout << arr[k]<<" ";
            }
            cout << endl;
        }
    }
}

int main() {
    int array[100];
    int n ;

    // Input array
    cout << "masukan banyak array : " ;
	cin>>n;
	cout<<endl;
    for(int i = 0; i < n; i++) {
        cout << "masukan nilai elemen " << i << " : ";
        cin >> array[i];
       
    }

    // Sorting array
    selectionSort(array, n);

    // Output hasil akhir
    cout << "\nhasil akhir "<<endl;
    for(int i = 0; i < n; i++) {
        cout << array[i]<<" ";
    }
    cout << endl;

    return 0;
}
