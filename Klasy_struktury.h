
#ifndef Klasy_struktury
#define Klasy_struktury
#include <iostream>
#include <string>

using namespace std;


enum E_stanowisko
{
	prezes, kierownik, pracownik, portier
};
struct S_adres_zamieszkania
{
	string ulica;
	int numer;//mieszkania
	string kod;//pocztowy
	string miasto;

	S_adres_zamieszkania operator = (S_adres_zamieszkania adres2);
	void uzupelnij();
	void wyswietl();
};
class C_osoba
{
public:
	C_osoba();
	C_osoba(const C_osoba &);
	C_osoba(string, string, int, S_adres_zamieszkania);
	//	virtual ~C_osoba();

	string imie;
	string nazwisko;
	int staz;
	S_adres_zamieszkania adres;

	virtual void wyswietl();

};
class C_portier : public C_osoba
{
public:

	float pensja;
	E_stanowisko stanowisko;

	//C_portier(const C_portier &);

	C_portier(string imie, string nazwisko, int staz, S_adres_zamieszkania adres)
		: C_osoba(imie, nazwisko, staz, adres), stanowisko(portier), pensja(1200) {}
	void wyswietl();
};


#endif