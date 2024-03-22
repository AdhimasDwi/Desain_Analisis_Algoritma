//MERGE SORT
#include <iostream>
using namespace std;

void merge (int arr[], int l, int m, int r)
{
	int x, y, z;
	int n1 = m - l + 1;
	int n2 = r - m;
	
	int L[n1], R[n2];
	
	for (x = 0; x < n1; x++)
        L[x] = arr[l + x];
	for (y = 0; y < n2; y++)
	    R[y] = arr[m + 1 + y];
	x = 0;
	y = 0;
	z = l;
	
	while(x < n1 && y < n2) 
	{
		if (L[x] >= R[y]) 
		{
			
			arr[z] = L[x];
			x++;
		}
		else 
		{
			
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
	
		arr[z] = R[y];
		y++;
		z++;
	}
}

void mergesort(int arr[], int l, int r)
{
	if (l < r) 
	{
		int m = l + (r - l) / 2;
		
		mergesort (arr, l, m);
		mergesort (arr, m + 1, r);
		
		merge(arr, l, m, r);
	}
}

void show(int A[], int size)
{
	int i;
	for (i = 0; i < size; i++) 
		cout << A[i] << " ";
}

int main() {
    int size;
    
    cout << "Masukan banyak data : ";
    cin >> size;

    int* arr = new int[size];

	for (int i = 0; i < size; i++)
	{
		
		cout << "\nMasukkan Data Array ke - " << i << " = ";
		cin >> arr[i];
	}

    mergesort(arr, 0, size - 1);

    cout << "Hasil : ";
    show(arr, size);


    return 0;
}









////QUICK SHORT
//#include<iostream>
//using namespace std;
// void swap(int arr[],int pos1,int pos2){
// 	int temp;
// 	temp=arr[pos1];
// 	arr[pos1]=arr[pos2];
// 	arr[pos2]=temp;
// }
// 
// int partition(int arr[],int low,int high,int pivot){
// 	int i=low;
// 	int j=low;
// 	while (i<=high){
// 		if(arr[i]<pivot){
// 			i++;
//		 }
//		 else{
//		 	swap(arr,i,j);
//		 	i++;
//		 	j++;
//		 }
//	 }
//	 
//	 return j-1;
// }
// 
// void quickSort(int arr[],int low,int high){
// 	if(low<high){
// 		int pivot =arr[high];
// 		int pos=partition(arr,low,high,pivot);
// 		quickSort(arr,low,pos-1);
// 		quickSort(arr,pos+1,high);
//	 }
//	 
// }
// 
// int main(){
// 	int n;
// 	cout<<"Tentukan Panjang Array : ";
// 	cin>>n;
// 	int arr[n];
// 	for(int i=0;i<n;i++){
// 		cin>>arr[i];
//	 }
//	 quickSort(arr,0,n-1);
//	 cout<<"Berikut Adalah Array yang Telah Disortir :  ";
//	 for(int i=0;i<n;i++){
//	 	cout<<arr[i]<<" ";
//	 }
// }
