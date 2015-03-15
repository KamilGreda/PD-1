#include <iostream>
#include <iomanip>
#include <string>
#include "Klasy_struktury.h"
using namespace std;


int main()
{
	string imie, nazwisko;
	int staz;
	S_adres_zamieszkania adres;
	cout << "Podaj imie:" << endl;
	getline(cin, imie);
	cout << "Podaj nazwisko:" << endl;
	getline(cin, nazwisko);
	cout << "Podaj dlugosc stazu w latach:" << endl;
	cin >> staz;
	adres.uzupelnij();

	C_portier portier(imie,nazwisko,staz,adres);


	cout << endl;
	portier.wyswietl();

	return 0;
}