#include<iostream>
#include<cstring>
using namespace std;

const int N=100;
int dist[N][N];
void floydWarshall(int n){
	for(int k=0;k<n;k++){
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
			if (dist[i][k]+dist[k] [j]<dist[i][j]){
				dist[i][j]=dist[i][k]+dist[k][j];
			}
		}
	}
}
}

int main(){
	int n;
	cout<<"Masukkan Jumlah Node Pada Graph : ";
	cin>>n;
	memset(dist,0x3f,sizeof dist);
	for(int i=0;i<n;i++){
		dist[i][i]=0;
	}
	cout<<"Masukkan Jarak Antar Node : ";
	cin>>n;
	for (int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			int w;
			cin>>w;
			dist[i][j]=w;
		}
	}
	floydWarshall(n);
	cout<<"Hasil Jalur Terpendek Antar Node : "<<endl;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout<<dist[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
