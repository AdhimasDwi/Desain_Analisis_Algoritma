#include <iostream>
using namespace std;
class Laptop{
	private :
		string pemilik;
		string merk;
		public:
		Laptop(string var1,string var2)	{
			pemilik =var1;
			merk=var2;
			cout<<"Paket Laptop "<<merk<<" Milik "<<pemilik<<" Sudah Dikirim"<<endl;
		}
};
int main(){
	Laptop laptopFadlan(" Fadlan"," Asus");
	Laptop laptopRisma (" Risma"," Acer");
	Laptop laptopCarlos("Carlos"," Lenovo");
	return 0;
}
