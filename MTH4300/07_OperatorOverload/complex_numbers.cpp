#include <iostream>
#include <cmath>
using namespace std;

class ComplexNumber{
    private:
        double real;
        double imag;

    public:
        ComplexNumber(double r = 0.0, double i = 0.0) : real(r), imag(i) {}

        ComplexNumber operator+(ComplexNumber rhs){
            return ComplexNumber(real + rhs.real, imag + rhs.imag);
        }

        ComplexNumber operator-(ComplexNumber rhs){
            return ComplexNumber(real - rhs.real, imag - rhs.imag);
        }

        ComplexNumber operator*(ComplexNumber rhs){
            return ComplexNumber(real*rhs.real - imag*rhs.imag, real*rhs.imag + rhs.real*imag);
        }

        friend ostream& operator<<(ostream& os, ComplexNumber rhs){
            os << rhs.real << " + " << rhs.imag << "i";
            return os;
        } //overloading for ostream and not the actual class, thus friend. Access to private attributes to ostream

        friend istream& operator>>(istream& is, ComplexNumber& rhs){
            is >> rhs.real >> rhs.imag;
            return is;
        } //overloading for ostream and not the actual class, thus friend. Access to private attributes to ostream
        
        double magnitude(){
            return sqrt(real * real + imag * imag);
        }
    };


int main(){
    ComplexNumber c1(1, 1);
    ComplexNumber rotation(cos(M_PI/2), sin(M_PI/2));
    ComplexNumber rot_c1 = c1 * rotation;

    //cout << rot_c1;

    ComplexNumber c2;
    cout << "Enter real and imaginary components: \n";
    cin >> c2;
    cout << c2 << '\n';
    cout << "The magnitude is: " << c2.magnitude();
    return 0;
}