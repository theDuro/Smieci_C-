
#include <iostream>
#include <string>
#include <cmath>
using namespace std;
class C
{
public:
	
	~C();
	C(double a, double, double c);
	double delta();
	
	double getP();
	double getQ();
	string zakres();
	string wynik();
	
private:
	double a, b, c;
	C();
	
	double getX1();
	double getX2();
};

C::C(double a,double ,double c)
{
	this->a = a;
	this->b = b;
	this->c = c;
}

C::~C()
{
}

double C::getP() {
	return -b - 2 * a;
}
double C::getQ() {
	return delta() / 4 * a;
}

double C::delta() {
	return b * b - 4 * a * c;
}
string C::zakres() {
	return  a > 0 ? "od -nieskonczonosc do  " : " od +nieskonczonosc do " + to_string(getQ());


}

double C:: getX1() { return (-sqrt(delta()) - b) / 2*a; }
double C::getX2() { return (sqrt(delta()) - b) / 2 * a; }

string C:: wynik() {
	if (delta() > 0)
		return "dwa miejsca zerowe " + to_string(getX1()) + to_string(getX2());
	else if (delta() == 0) return "jedno miejsce zerowe " + to_string(getP());
	else return "nie mam miejsc zerowych ";
}
using namespace std;
int main()
{
	C trujmian =  C(1,2,3);
	cout <<  trujmian.wynik << "\n wspulzedna x wieszchołka =" << trujmian.getP << "\nwspulzendna y wieszcholka  = " << trujmian.getQ <<  endl;



	

}


