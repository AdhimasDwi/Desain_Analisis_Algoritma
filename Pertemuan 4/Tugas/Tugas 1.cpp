//Ini Termasuk Kedalam Conctructor

#include <iostream>
using namespace std;

// Definisikan class contoh
class contoh {
    private:
        // Atribut privat nilai
        int nilai;

    public:
        // Constructor dengan parameter integer n
        contoh(int n) {
            // Inisialisasi atribut nilai
            nilai = n;
        }

        // Method public getNum() untuk mengambil nilai
        int getNum() {
            return nilai;
        }
};

// Fungsi main
int main() {
    // Membuat objek dari class contoh dengan nilai 10
    contoh obj(10);

    // Menampilkan hasil nilai yang diinput
    cout << "Nilai Yang Diinput: " << obj.getNum() << endl;

    return 0;
}
