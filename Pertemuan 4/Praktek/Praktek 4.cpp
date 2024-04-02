#include <iostream>
#include <string>

using namespace std;

class info{
	private : 
	string a,b;
	int c;
	
	public :
		info (string nama, string alamat, int usia):a(nama),b(alamat),c(usia){
			cout<< "\ninformasi biodata anda :\n";
		}
		~info(){
			
		}
			  void data (){
			  	cout <<"nama\t: " << a << endl << "umur\t: " << c << endl << "alamat\t: " << b <<endl; 
			  }
		 
		
};
int main (){
int z;
string y,x;
cout << "masukan nama anda\t: ";
getline(cin,y);
cout << "masukan usia anda\t: ";
cin >> z;
cout << "masukan alamat anda\t: ";
cin.ignore();
getline (cin,x);
{
	info obj(y,x,z);
	obj.data();
}
return 0;
}
