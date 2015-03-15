#include "Klasy_struktury.h"
#include <iostream>
#include <string>

int GLOBAL_Liczba_kierownikow = 0;
using namespace std;



void S_adres_zamieszkania::wyswietl()
{
	cout << ulica << " " << numer << endl;
	cout << kod << endl << miasto << endl;
}

void S_adres_zamieszkania::uzupelnij()
{
	cout << "Podaj ulice: " << endl;
	cin.clear();
	cin.sync();
	getline(cin, ulica);

	cout << "Numer domu: " << endl;
	cin >> numer;
	cout << "Kod pocztowy: " << endl;
	cin.clear();
	cin.sync();
	getline(cin, kod);
	cout << "Miasto: " << endl;
	getline(cin, miasto);
}

S_adres_zamieszkania S_adres_zamieszkania :: operator = (S_adres_zamieszkania adres2)
{

	ulica = adres2.ulica;
	numer = adres2.numer;
	kod = adres2.kod;
	miasto = adres2.miasto;
	return *this;
}



//konstruktor kopiuj¹cy
C_osoba::C_osoba(const C_osoba & osoba2)
{
	imie = osoba2.imie;
	nazwisko = osoba2.nazwisko;
	staz = osoba2.staz;
	adres = osoba2.adres;
}
//wyswietlanie osoby
void C_osoba::wyswietl()
{
	cout << imie << " " << nazwisko << endl;
	cout << staz << " lata stazu" << endl;
	cout << "Zamieszkaly: " << endl;
	adres.wyswietl();
}

void wybierz(E_stanowisko &stan)
{
	int n = 0;
	cout << "Wybierz stanowisko: " << endl;
	cout << "Prezes:    1 " << endl;
	cout << "Kierownik: 2" << endl;
	cout << "Pracownik: 3" << endl;
	cout << "Portier:   4" << endl;
	cin >> n;

	switch (n)
	{
	case 1:
	{
		stan = prezes;
		break;
	}

	case 2:
	{
		stan = kierownik;
		GLOBAL_Liczba_kierownikow++;
		break;
	}

	case 3:
	{
		stan = pracownik;
		cout << "Wybierz kierownika: " << endl;
		//DO ZROBIENIA!!!
		break;
	}

	case 4:
	{
		stan = portier;
		break;
	}
	}
}

//konstruktor rozszerzony osoby
C_osoba::C_osoba(string _imie, string _nazwisko, int _staz, S_adres_zamieszkania _adres)
{

	imie = _imie;
	nazwisko = _nazwisko;
	staz = _staz;
	adres = _adres;
}//konstruktor rozszerzony


//klasa pochodna portier


void C_portier::wyswietl()
{
	cout << imie << " " << nazwisko << endl;
	cout << staz << " lata stazu" << endl;
	cout << "Zamieszkaly: " << endl;
	adres.wyswietl();
	cout << "Stanowisko: portier" << endl; //wyswietlanie enuma nie daje rady, switch zajmuje niepotrzebnie miejsce 
	cout << "Pensja: " << pensja << endl;
}
