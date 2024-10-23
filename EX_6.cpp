#include <iostream>
using namespace std;

class Complex {
private:
    float real, imag;

public:
    void input() {
        cout << "Enter real and imaginary parts: ";
        cin >> real >> imag;
    }

    Complex add(Complex c) {
        Complex temp;
        temp.real = real + c.real;
        temp.imag = imag + c.imag;
        return temp;
    }

    Complex subtract(Complex c) {
        Complex temp;
        temp.real = real - c.real;
        temp.imag = imag - c.imag;
        return temp;
    }

    Complex multiply(Complex c) {
        Complex temp;
        temp.real = (real * c.real) - (imag * c.imag);
        temp.imag = (real * c.imag) + (imag * c.real);
        return temp;
    }

    void display() {
        cout << real << " + " << imag << "i" << endl;
    }
};

int main() {
    Complex c1, c2, result;

	cout << "Enter first complex number:" << endl;
    c1.input();
    cout << "Enter second complex number:" << endl;
    c2.input();

    result = c1.add(c2);
    cout << "Sum: ";
    result.display();

    result = c1.subtract(c2);
    cout << "Difference: ";
    result.display();

    result = c1.multiply(c2);
    cout << "Product: ";
    result.display();

    return 0;
}
