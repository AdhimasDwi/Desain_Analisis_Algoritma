#include <iostream>
using namespace std;


class BangunDatar {
public:
   
    virtual double hitungLuas() = 0;
};


class Persegi : public BangunDatar {
private:
    double sisi;

public:
    Persegi(double s) : sisi(s) {}

    double hitungLuas() {
        return sisi * sisi;
    }
};

// Declare a derived class for PersegiPanjang
class PersegiPanjang : public BangunDatar {
private:
    double panjang;
    double lebar;

public:
    PersegiPanjang(double p, double l) : panjang(p), lebar(l) {}

    double hitungLuas() {
        return panjang * lebar;
    }
};

// Declare a derived class for Segitiga
class Segitiga : public BangunDatar {
private:
    double alas, tinggi;

public:
    Segitiga(double a, double t) : alas(a), tinggi(t) {}

    double hitungLuas() {
        return (alas * tinggi) / 2;
    }
};

int main() {
    double a, b, c, d, e;
    cout << "Masukkan Sisi Persegi\t\t\t: ";
    cin >> a;
    cout << "Masukkan Panjang Persegi panjang\t: ";
    cin >> b;
    cout << "Masukkan Lebar Persegi Panjang\t\t: ";
    cin >> c;
    cout << "Masukkan Alas Segitiga\t\t\t: ";
    cin >> d;
    cout << "Masukkan Tinggi Segitiga\t\t: ";
    cin >> e;

    BangunDatar *bangun1 = new Persegi(a);
    BangunDatar *bangun2 = new PersegiPanjang(b, c);
    BangunDatar *bangun3 = new Segitiga(d, e);

    cout << endl << endl;
    cout << "Luas Bangun Datar : " << endl;
    cout << "Luas Persegi\t\t: " << bangun1->hitungLuas() << endl;
    cout << "Luas Persegi Panjang\t: " << bangun2->hitungLuas() << endl;
    cout << "Luas Segitiga\t\t: " << bangun3->hitungLuas() << endl;

    delete bangun1;
    delete bangun2;
    delete bangun3;

    return 0;
}





