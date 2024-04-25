#include <iostream>
#include<algorithm>
using namespace std;
const int N = 100;
int nim[N];
int binarySearch (int x,int l,int r){
	if (r >= l){
		int mid =l+(r-l)/2;
		if (nim[mid]==x)
		return mid;
		if (nim[mid]>x)
		return binarySearch(x,l,mid -1);
		return binarySearch(x,mid+1,r);
		
	}
	return -1;
}

int main(){
	int n;
	cout<<"Masukkan Jumlah Mahasiswa : ";
	cin>>n;
	cout<<"Masukkan NIM Mahasiswa : "<<endl;
	for(int i=0;i<n;i++){
		cin>>nim[i];
	}
	sort(nim,nim + n);
	int x;
	cout<<"Masukkan NIM Yang Dicari : ";
	cin>>x;
	int hasil =binarySearch(x,0,n-1);
	if (hasil == -1)
	cout<<"NIM Tidak Ditemukan "<<endl;
	else
	cout<<"NIM Ditemukan Pada Indeks "<<hasil<<endl;
	return 0;
}
