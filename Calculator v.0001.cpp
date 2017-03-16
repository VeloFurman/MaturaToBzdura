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
	cout << "Aby kontynuowaæ naciœnij ENTER.";
	cin.get();
	cls();
}
void hello()
{
	cout << "Witam w moim kalkulatorze, mam nadziejê ¿e wyrêczy Ciê w zadaniach z matematyki, " << endl;
	cout << "którymi jesteœ gnêbiony przez wiele lat ma³o potrzebnej nauki. :P :)" << endl << endl;
	cout << "Tak¿e do dzie³a. Aby przejœæ do menu naciœnij ENTER.";

	cin.get();
}
void cls()
{
	system("CLS");
}
void rownanie_kwadratowe()
{
	cout << "Tutaj obliczysz równanie kwadratowe, deltê oraz miejsca zerowe funkcji." << endl << endl;
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
		cout << "Delta jest ujemna, równanie nie ma rozwi¹zania.";
	}
	if (delta == 0)
	{
		double x11 = -(b / 2 * a);
		cout << "Delta jest równa zero, równanie ma jedno rozwi¹zanie: " << x11;
	}
	if (delta > 0)
	{
		double x21 = (-b - sqrt(delta)) / (2 * a);
		double x22 = (-b + sqrt(delta)) / (2 * a);
		cout << "Delta jest dodatnia, miejsca zerowe to: x1 = " << x21 << " x2 = " << x22;
	}

	cout << endl <<endl << "Jeœli chcesz wróciæ do menu wciœnij ENTER, jeœli chcesz zakoñczyæ wciœnij ESCAPE.";
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
		cout << endl << endl << "Wyst¹pi³ b³¹d.";
		break;
	}

	cin.get();
}
void menu()
{
	cout << "MENU:" << endl << endl;
	cout << "1. Równanie kwadratowe." << endl;
	cout << "2. Sinusy, cosinusy i tangensy. [W ROZWOJU]" << endl << endl;
	cout << "Wybierz opcjê z menu: ";
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
		cout << endl << endl << "Wyst¹pi³ b³¹d, spróbuj jeszcze raz.";
			break;
	}

	cin.get();

}
void sin()
{
	cout << "Tutaj dowiesz siê jaki sinus, cosinus lub tangens ma k¹t podany przez Ciebie.";
	cout << endl << endl << "Interesuje Ciê: ";
	cout << endl << "1. Sinus";
	cout << endl << "2. Cosinus";
	cout << endl << "3. Tangens";
	char kod = _getch();
	switch (kod)
	{
	//1 SINUS
	case 49:
		cout << endl << endl << "Podaj k¹t i zatwierdŸ enter: ";
		int kat1;
		cin >> kat1;
		switch (kat1)
		{
		case 1:
		{
			cout << endl << "Sinus k¹ta " << kat1 << " wynosi 0,0175" << endl;
			cout << endl << "Jeœli chcesz jeszcze raz poznaæ jak¹œ wartoœæ funkcji trygonometrycznej, wciœnij BACKSPACE.";
			cout << endl << "Jeœli chcesz wróciæ do menu wciœnij ENTER, a jeœli chcesz zakoñczyæ wciœnij ESCAPE.";
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
				cout << endl << endl << "Wyst¹pi³ b³¹d.";
				break;
			}
			break; }

		case 2:
		{
			cout << endl << "Sinus k¹ta " << kat1 << " wynosi 0,0349" << endl;
			cout << endl << "Jeœli chcesz jeszcze raz poznaæ jak¹œ wartoœæ funkcji trygonometrycznej, wciœnij BACKSPACE.";
			cout << endl << "Jeœli chcesz wróciæ do menu wciœnij ENTER, a jeœli chcesz zakoñczyæ wciœnij ESCAPE.";
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
				cout << endl << endl << "Wyst¹pi³ b³¹d.";
				break;
			}
			break; }
		}
		
	//2 COSINUS
	case 50:
		cout << endl << endl << "Podaj k¹t i zatwierdŸ enter: ";
		int kat2;
		cin >> kat2;
		switch (kat2)
		{
		case 1:
			break;
		}

	//3 TANGENS
	case 51:
		cout << endl << endl << "Podaj k¹t i zatwierdŸ enter: ";
		int kat3;
		cin >> kat3;
		switch (kat3)
		{
		case 1:
			break;

		}
		
	//default
	default:
		cout << "Wyst¹pi³ b³¹d.";
		cin.get();
		cin.get();
		break;
	}

	
	
}
