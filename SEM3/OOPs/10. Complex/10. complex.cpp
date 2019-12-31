#include<iostream>
using namespace std;

class Complex {
    private:
        float real, imag;
    public:
        Complex(float r = 0, float i =0) {
            real = r; imag = i;
        }
        Complex(Complex const &c) {
            real = c.real;
            imag = c.imag;
        }
        void input() {
        cout<<"Enter values in the form of a+ib:\n\ta: ";
        cin>>this->real;
        cout<<"\tb: ";
        cin>>this->imag;
        }
        void print() {
            cout << real << " + i(" <<imag<<")\n";
        }
        friend Complex operator + (Complex const &, Complex const &);
        friend Complex operator - (Complex const &, Complex const &);
        friend Complex operator * (Complex const &, Complex const &);
        friend Complex operator / (Complex const &, Complex const &);
};

Complex operator + (Complex const &c1, Complex const &c2)
{
	return Complex(c1.real + c2.real, c1.imag + c2.imag);
}

Complex operator - (Complex const &c1, Complex const &c2)
{
    return Complex(c1.real - c2.real, c1.imag - c2.imag);
}

Complex operator * (Complex const &c1, Complex const &c2)
{
    return Complex(c1.real*c2.real - c1.imag*c2.imag, c1.real*c2.imag + c1.imag*c2.real);
}

Complex operator / (Complex const &c1, Complex const &c2)
{
    float denominator =  c2.real*c2.real + c2.imag*c2.imag;
    float real = (c1.real*c2.real + c1.imag*c2.imag)/denominator;
    float imag = (c1.imag*c2.real - c1.real*c2.imag)/denominator;
    return Complex(real, imag) ;
}

int main()
{
	Complex c1(10, 5), c2(2, 4);
	Complex c3 = c1+c2;
	cout<<"\nOperator +: ";
	c3.print();
	c3 = c1-c2;
	cout<<"\nOperator -: ";
	c3.print();
	c3 = c1*c2;
	cout<<"\nOperator *: ";
	c3.print();
    c3 = c1/c2;
	cout<<"\nOperator /: ";
	c3.print();
	return 0;
}

