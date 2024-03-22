//QUICK SORT
#include<iostream>
using namespace std;
// Fungsi untuk swap dua elemen pada array
 void swap(int arr[],int pos1,int pos2){
 	int temp;
 	temp=arr[pos1];
 	arr[pos1]=arr[pos2];
 	arr[pos2]=temp;
 }
// Fungsi untuk mengembalikan posisi dari pivot setelah dipartition
 int partition(int arr[],int low,int high,int pivot){
 	int i=low;
 	int j=low;
 	// Melakukan loop sampai batas high
 	while (i<=high){
 		// Jika elemen lebih besar dari pivot, maka i++
 		if(arr[i]>pivot){
 			i++;
		 }
		 // Jika elemen lebih kecil dari pivot, maka swap antara arr[i] dan arr[j]
		 else{
		 	swap(arr,i,j);
		 	i++;
		 	j++;
		 }
	 }
	 // Mengembalikan posisi pivot setelah di partition
	 return j-1;
 }
 // Fungsi untuk implementasi Quick Sort
 void quickSort(int arr[],int low,int high){
 		// Jika low kurang dari high, maka lakukan Quick Sort
 	if(low<high){
 		// Menentukan pivot, yaitu elemen terakhir
 		int pivot =arr[high];
 		// Memanggil fungsi partition untuk mengembalikan posisi pivot setelah di partition
 		int pos=partition(arr,low,high,pivot);
 			// Quick Sort array kiri
 		quickSort(arr,low,pos-1);
 			// Quick Sort array kanan
 		quickSort(arr,pos+1,high);
	 }
 }
 
 int main(){
 	int n;
 	// Meminta pengguna untuk memasukkan panjang array
 	cout<<"Tentukan Panjang Array : ";
 	cin>>n;
 	int arr[n];
 	// Meminta pengguna untuk memasukkan nilai-nilai array
 	for(int i=0;i<n;i++){
 		cin>>arr[i];
	 }
	 	// Memanggil fungsi quickSort dengan parameter awal dan akhir array
	 quickSort(arr,0,n-1);
	 // Menampilkan informasi bahwa array telah disortir
	 cout<<"Berikut Adalah Array yang Telah Disortir :  ";
	 	// Menampilkan nilai-nilai array yang telah disortir
	 for(int i=0;i<n;i++){
	 	cout<<arr[i]<<" ";
	 }
 }






//MERGE SORT
#include <iostream>// Menggunakan library iostream untuk input dan output
using namespace std;
// Fungsi merge digunakan untuk menggabungkan dua array yang telah diurutkan menjadi 
// satu array yang diurutkan
void merge (int arr[], int l, int m, int r)
{
	int x, y, z;
	int n1 = m - l + 1;// Ukuran array kiri
	int n2 = r - m;// Ukuran array kanan
	
	int L[n1], R[n2];// Membuat array kiri dan kanan
	// Mengisi array kiri dan kanan
	for (x = 0; x < n1; x++)
        L[x] = arr[l + x];
	for (y = 0; y < n2; y++)
	    R[y] = arr[m + 1 + y];
	// Melakukan proses merge dari array kiri dan kanan
	x = 0;
	y = 0;
	z = l;
	
	while(x < n1 && y < n2) 
	{
		if (L[x] <= R[y]) 
		{
			// Menempatkan nilai yang lebih kecil dari array kiri ke array hasil
			arr[z] = L[x];
			x++;
		}
		else 
		{
			// Menempatkan nilai yang lebih kecil dari array kanan ke array hasil
			arr[z] = R[y];
			y++;
		}
		z++;
	}
	while (x < n1) 
	{
		arr[z] = L[x];
		x++;
		z++;
	}
	
	while (y < n2) 
	{
	// Menempatkan sisa nilai yang masih ada di array kiri
		arr[z] = R[y];
		y++;
		z++;
	}
}

void mergesort(int arr[], int l, int r)// Fungsi untuk mengurutkan array menggunakan algoritma merge sort
{
	if (l < r) // Jika batas kiri lebih kecil dari batas kanan, maka array belum terurut secara sempurna
	{
		int m = l + (r - l) / 2;// Membagi array menjadi dua array kecil
		
		mergesort (arr, l, m);// Mergesort array kiri
		mergesort (arr, m + 1, r);// Mergesort array kanan
		
		merge(arr, l, m, r);// Menggabungkan array kiri dan kanan yang sudah diurutkan
	}
}

void show(int A[], int size)// Fungsi untuk menampilkan array ke layar
{
	int i;
	for (i = 0; i < size; i++) 
		cout << A[i] << " ";
}

int main() {
    int size;
    //input data
    cout << "Masukan banyak data : ";
    cin >> size;

    int* arr = new int[size];// Alokasi memori untuk array

	for (int i = 0; i < size; i++)
	{
		//Input Data
		cout << "\nMasukkan Data Array ke - " << i << " = ";
		cin >> arr[i];
	}

    mergesort(arr, 0, size - 1);// Memanggil fungsi mergesort untuk mengurutkan array
//Menampilkan Hasil
    cout << "Hasil : ";// Menampilkan hasil
    show(arr, size);// Menampilkan array yang sudah diurutkan


    return 0;
}
 
 

