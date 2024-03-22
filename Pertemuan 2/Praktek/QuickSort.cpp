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
 
 
 
 
