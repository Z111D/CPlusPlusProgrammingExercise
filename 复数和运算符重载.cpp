#include <iostream>
using namespace std;
class Complex {	//�����ඨ��
public:	//�ⲿ�ӿ�
	Complex(double r = 0.0, double i = 0.0) : real(r), imag(i) { }	//���캯��
	friend Complex operator + (const Complex &c1, const Complex &c2);	//�����+����
	friend Complex operator - (const Complex &c1, const Complex &c2);	//�����-����
	friend ostream & operator << (ostream &out, const Complex &c); //�����<<����
private:	//˽�����ݳ�Ա
	double real;	//����ʵ��
	double imag;	//�����鲿
};

Complex operator + (const Complex &c1, const Complex &c2) {
	return Complex(c1.real + c2.real, c1.imag + c2.imag); 
}

Complex operator - (const Complex &c1, const Complex &c2) {
	return Complex(c1.real - c2.real, c1.imag - c2.imag); 
}

ostream & operator << (ostream &out, const Complex &c) {
	out << "(" << c.real << ", " << c.imag << ")";
	return out;
}

