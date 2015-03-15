/*
int GLOBAL_Liczba_kierownikow = 0;

enum E_stanowisko // do rozró¿niania klas pochodnych
{
	prezes = 1, kierownik = 2, pracownik = 3, portier = 4

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

//klasa bazowa
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

//konstruktor kopiuj¹cy portiera
C_portier::C_portier(const C_portier & portier2)
{
imie = portier2.imie;
nazwisko = portier2.nazwisko;
staz = portier2.staz;
adres = portier2.adres;
}

konstruktor rozszerzony portiera
C_portier::C_portier(string _imie, string _nazwisko, int _staz, S_adres_zamieszkania _adres) 
//konstruktor kopiuj¹cy portiera
/*C_portier::C_portier(const C_portier & portier2)
{
imie = portier2.imie;
nazwisko = portier2.nazwisko;
staz = portier2.staz;
adres = portier2.adres;
}
//konstruktor rozszerzony portiera
//C_portier::C_portier(string _imie, string _nazwisko, int _staz, S_adres_zamieszkania _adres) 


//wyswietlanie portiera


void C_portier::wyswietl()
{
	cout << imie << " " << nazwisko << endl;
	cout << staz << " lata stazu" << endl;
	cout << "Zamieszkaly: " << endl;
	adres.wyswietl();
	cout << "Stanowisko: portier" << endl; //wyswietlanie enuma nie daje rady, switch zajmuje niepotrzebnie miejsce 
	cout << "Pensja: " << pensja << endl;
}

*/