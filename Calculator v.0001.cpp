// Calculator.cpp: Okre�la punkt wej�cia dla aplikacji konsoli.
//

#include "stdafx.h"
#include "iostream"
#include "cmath"
#include "conio.h"

using namespace std;

//FUNKCJE:
void hello();
void cls();
void menu();
void rownanie_kwadratowe();
void sin();
void version();


//MAIN
int main()
{
	setlocale(LC_ALL, "");
	version();
	hello();
	cls();
	menu();
    return 0;
}


void version()
{
	
	cout.width(65);
	cout << endl << endl << endl << endl << endl << endl << endl << endl;
	cout << right << "VERSION v.0001";
	cout << endl << endl << endl << endl << endl << endl << endl << endl;
	cout.width(75);
	cout << "Aby kontynuowa� naci�nij ENTER.";
	cin.get();
	cls();
}
void hello()
{
	cout << "Witam w moim kalkulatorze, mam nadziej� �e wyr�czy Ci� w zadaniach z matematyki, " << endl;
	cout << "kt�rymi jeste� gn�biony przez wiele lat ma�o potrzebnej nauki. :P :)" << endl << endl;
	cout << "Tak�e do dzie�a. Aby przej�� do menu naci�nij ENTER.";

	cin.get();
}
void cls()
{
	system("CLS");
}
void rownanie_kwadratowe()
{
	cout << "Tutaj obliczysz r�wnanie kwadratowe, delt� oraz miejsca zerowe funkcji." << endl << endl;
	cout << "Podaj a: ";
	double a;
	cin >> a;
	cout << "Podaj b: ";
	double b;
	cin >> b;
	cout << "Podaj c: ";
	double c;
	cin >> c;

	double delta;
	delta = pow(b, 2) - 4 * a*c;
	cout << endl << "Delta = " << delta << endl << endl;


	if (delta < 0)
	{
		cout << "Delta jest ujemna, r�wnanie nie ma rozwi�zania.";
	}
	if (delta == 0)
	{
		double x11 = -(b / 2 * a);
		cout << "Delta jest r�wna zero, r�wnanie ma jedno rozwi�zanie: " << x11;
	}
	if (delta > 0)
	{
		double x21 = (-b - sqrt(delta)) / (2 * a);
		double x22 = (-b + sqrt(delta)) / (2 * a);
		cout << "Delta jest dodatnia, miejsca zerowe to: x1 = " << x21 << " x2 = " << x22;
	}

	cout << endl <<endl << "Je�li chcesz wr�ci� do menu wci�nij ENTER, je�li chcesz zako�czy� wci�nij ESCAPE.";
	char wybor = _getch();

	switch (wybor)
	{
	case 13:
		cls();
		menu();
		break;

	case 27:
		exit(0);
		break;

	default:
		cout << endl << endl << "Wyst�pi� b��d.";
		break;
	}

	cin.get();
}
void menu()
{
	cout << "MENU:" << endl << endl;
	cout << "1. R�wnanie kwadratowe." << endl;
	cout << "2. Sinusy, cosinusy i tangensy. [W ROZWOJU]" << endl << endl;
	cout << "Wybierz opcj� z menu: ";
	char a = _getch();

	switch (a)
	{
	//1
	case 49:
		cls();
		rownanie_kwadratowe();
		break;

	//2
	case 50:
		cls();
		sin();


	default:
		cout << endl << endl << "Wyst�pi� b��d, spr�buj jeszcze raz.";
			break;
	}

	cin.get();

}
void sin()
{
	cout << "Tutaj dowiesz si� jaki sinus, cosinus lub tangens ma k�t podany przez Ciebie.";
	cout << endl << endl << "Interesuje Ci�: ";
	cout << endl << "1. Sinus";
	cout << endl << "2. Cosinus";
	cout << endl << "3. Tangens";
	char kod = _getch();
	switch (kod)
	{
	//1 SINUS
	case 49:
		cout << endl << endl << "Podaj k�t i zatwierd� enter: ";
		int kat1;
		cin >> kat1;
		switch (kat1)
		{
		case 1:
		{
			cout << endl << "Sinus k�ta " << kat1 << " wynosi 0,0175" << endl;
			cout << endl << "Je�li chcesz jeszcze raz pozna� jak�� warto�� funkcji trygonometrycznej, wci�nij BACKSPACE.";
			cout << endl << "Je�li chcesz wr�ci� do menu wci�nij ENTER, a je�li chcesz zako�czy� wci�nij ESCAPE.";
			char wybor = _getch();
			switch (wybor)
			{
				//BACKSPACE
			case 8:
				cls();
				sin();
				break;

				//ENTER
			case 13:
				cls();
				menu();
				break;

				//ESCAPE
			case 27:
				exit(0);
				break;

			default:
				cout << endl << endl << "Wyst�pi� b��d.";
				break;
			}
			break; }

		case 2:
		{
			cout << endl << "Sinus k�ta " << kat1 << " wynosi 0,0349" << endl;
			cout << endl << "Je�li chcesz jeszcze raz pozna� jak�� warto�� funkcji trygonometrycznej, wci�nij BACKSPACE.";
			cout << endl << "Je�li chcesz wr�ci� do menu wci�nij ENTER, a je�li chcesz zako�czy� wci�nij ESCAPE.";
			char wybor = _getch();
			switch (wybor)
			{
				//BACKSPACE
			case 8:
				cls();
				sin();
				break;

				//ENTER
			case 13:
				cls();
				menu();
				break;

				//ESCAPE
			case 27:
				exit(0);
				break;

			default:
				cout << endl << endl << "Wyst�pi� b��d.";
				break;
			}
			break; }
		}
		
	//2 COSINUS
	case 50:
		cout << endl << endl << "Podaj k�t i zatwierd� enter: ";
		int kat2;
		cin >> kat2;
		switch (kat2)
		{
		case 1:
			break;
		}

	//3 TANGENS
	case 51:
		cout << endl << endl << "Podaj k�t i zatwierd� enter: ";
		int kat3;
		cin >> kat3;
		switch (kat3)
		{
		case 1:
			break;

		}
		
	//default
	default:
		cout << "Wyst�pi� b��d.";
		cin.get();
		cin.get();
		break;
	}

	
	
}