#include <iostream>
#include <string>
using namespace std;

class infobuku {
	private : 
	string bookname;
	string writer;
	int year;
	
	public :
		infobuku(){
			bookname = "_";
			writer = "_";
			year = 0;
		}
		
		void setjudul (string a, string b, int c) {
			bookname = a;
			writer = b;
			year = c;
		}
	
		void displayinfo () {
		
			cout << "Judul\t\t: "<<bookname<<endl;
			cout << "Penulis\t\t: " <<writer<<endl;
			cout << "Tahun Terbit\t: "<<year<<endl;
		}
	
//	infobuku : judul(""),Penulis(" "),Tahun Terbit (0){}	
	
};

int main () 
{
	infobuku buku1;
	infobuku buku2;
	
	buku1.setjudul("Harry Potter and the Philosopher's stone", "J.K. Rowling", 1997);
	buku2.setjudul("To Kill a Mockingbird", "Harper Lee", 1960);
	
	cout <<"Informasi buku 1: " << endl;
	buku1.displayinfo();
	cout << "-------------------------------------";
	
	cout << "\nInformasi buku 2: " << endl;
	buku2.displayinfo();
	cout << "-------------------------------------";
	
	return 0;
}
