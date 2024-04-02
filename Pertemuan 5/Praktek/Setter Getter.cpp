#include <iostream>
using namespace std;
class Calculator {
private:
    double num1;
    double num2;

public:
    // Setter
    void setNumbers(double n1, double n2) {
        num1 = n1;
        num2 = n2;
    }

    // Getter
    double getNum1() const {
        return num1;
    }

    double getNum2() const {
        return num2;
    }

    // Operasi Pertambahan
    double add() const {
       return num1 + num2;
    }

    // Operasi Pengurangan
    double subtract() const {
        return num1 - num2;
    }

    // Operasi Perkalian
    double multiply() const {
        return num1 * num2;
    }

    // Operasi Pembagian
    float divide() const {
        	return num1 / num2;
	}
    
};

int main() {
    double num1, num2;

    cout << "Masukkan Angka 1 : ";
    cin >> num1;

    cout << "Masukkan Angka 2 : ";
   cin >> num2;

    Calculator calc;
    calc.setNumbers(num1, num2);

   cout << "Pertambahan : " << calc.add() << endl;
    cout << "Pengurangan : " << calc.subtract() <<endl;
    cout << "Perkalian   : " << calc.multiply() <<endl;
    if(num2==0){
    	cout << "ERROR!";
	}else{
	cout << "Pembagian   : " << calc.divide() << endl;}

    return 0;
}









