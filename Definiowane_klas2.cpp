#include <iostream>
#include <fstream>

using namespace std;

class Uczen {
public:
	string imie, nazwisko, klasa;
	int rok_ur = 0;

	string ustawImie(string im) {
		imie = im;
		return imie;
	}
	string ustawNazwisko(string naz) {
		nazwisko = naz;
		return nazwisko;
	}
	string ustawKlase(string klas) {
		klasa = klas;
		return klasa;
	}
	int ustawRokUrodzenia(int a) {
		rok_ur = a;
		return rok_ur;
	}

};

int main()
{
	fstream plik("dane.txt", ios::out);
	Uczen uczen_a;

	uczen_a.ustawImie("Bob");
	uczen_a.ustawNazwisko("Rose");
	uczen_a.ustawKlase("4");
	uczen_a.ustawRokUrodzenia(2005);


	Uczen uczen_b;

	uczen_b.ustawImie("Mariusz");
	uczen_b.ustawNazwisko("Pudzianowski");
	uczen_b.ustawKlase("10");
	uczen_b.ustawRokUrodzenia(1999);

	if (uczen_a.rok_ur > uczen_b.rok_ur) {
		int pomoc = uczen_a.rok_ur - uczen_b.rok_ur;
		cout << "uczen: " << uczen_a.imie << " " << uczen_a.nazwisko << " jest mlodszy o: " << pomoc;
		

	}
	else {
		
		int pomoc = uczen_a.rok_ur - uczen_b.rok_ur;
		cout << "uczen: " << uczen_a.imie << " " << uczen_a.nazwisko << " jest mlodszy o: " << pomoc;


	}
	plik << uczen_a.imie<<endl;
	plik << uczen_a.nazwisko << endl;
	plik << uczen_a.rok_ur << endl;
	plik << endl;
	
	plik << uczen_b.imie << endl;
	plik << uczen_b.nazwisko << endl;
	plik << uczen_b.rok_ur << endl;



}
