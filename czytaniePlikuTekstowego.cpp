// czytaniePlikuTekstowego.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
#include <iostream>
#include <fstream>
#include <vector>
using namespace std;
bool wpis(string nazwaPliku, string c1, string c2)
{
	ifstream czytany(nazwaPliku);
	if (!czytany.good()) return false;
	ofstream wpisywany("nowy_" + nazwaPliku);
	string wyjscie;
	vector<string> wyrazy; //proc na przesuniecie bitowe
	while (czytany >> wyjscie) {
		wyrazy.push_back(wyjscie);
		cout << "xd\n";
	}
	for (string wyraz : wyrazy) {
		wpisywany << (wyraz == c2 ? c1 : wyraz);
	}
	return true;
}
int main()
{
	string c1, c2, nazwa;
	cout << "podaj nazwe pliku ";
	cin >> nazwa;
	cout << "podaj początkowy string ";
	cin >> c2;
	cout << "podaj zamienik ";
	cin >> c1;
	if (wpis(nazwa,c1,c2)){
		cout << "operacja pomyslna";
	}
	else {
		cout << "wystapil blond";
	}
	
	
}


