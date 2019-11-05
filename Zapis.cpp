// Zapis.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
#include <fstream>
using namespace std;
class ZapisDoPliku
{
public:
	ZapisDoPliku(string czytanyPlik, string c1, string c2);
	void wpisz();
	 
	~ZapisDoPliku();
	
private:
	ofstream zapis;
	ifstream czytane;
	string czytanyPlik, c1, c2,linia;
	ZapisDoPliku();
};

ZapisDoPliku::ZapisDoPliku()
{
}

ZapisDoPliku::ZapisDoPliku(string czytanyPlik, string s1, string s2)
{
	c1 = s1;
	c2 = s2;
	czytane = ifstream(czytanyPlik);
	zapis = ofstream("nowy_" + czytanyPlik);
}
void ZapisDoPliku::wpisz() {
	while (czytane.eof!=true) {
		czytane >> linia;
		if (linia == c1) zapis << c2;
		else zapis << linia;
	}

}

ZapisDoPliku::~ZapisDoPliku()
{
}

int main()
{
	ZapisDoPliku plik = ZapisDoPliku("Czytany.txt", "dziki jenot", " ulewa");
	plik.wpisz();
	plik.~ZapisDoPliku();

	
	
}
	
	/* void kopiowanieDoPliku(string czytanyPlik , string c1,string c2)
	{
		string linia;
		string zapisywanyPlik = "nowy_" + czytanyPlik;
		ifstream czytane(czytanyPlik);
		ofstream zapis(zapisywanyPlik);
		while(!czytane.eof) {
			czytane >> linia;
			if (linia == c1) zapis << c2;
			else zapis << linia;
		}    
}*/

