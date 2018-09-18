#include <iostream>
#include <stdlib.h>
#include <cstdlib>
using namespace std;

int repeat()
{
	int ch;
	cout << "\n\nDoresti sa incerci din nou?";
	cout << "\Pentru a continua apasa 1\n Pentru a iesi apasa alt buton";
	cin >> ch;
	if (ch == 1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int main()
{
	int option;
	float x, y, h;
	float k1, k2, k = 0;
label:
	cout << "Introduceti valorile: ";
	cout << endl << "X= ";
	cin >> x;
	cout << endl << "Y= ";
	cin >> y;
	cout << endl << "H= ";
	cin >> h;
	system("cls");
	cout << "\nDatele problemei: ";
	cout << "\nX= " << x << "\tY= " << y << "\tH= " << h;
	cout << "\nFormulele de calcul: " << endl;
	cout << endl << "Formula lui K1= hf[x0,y0]";
	cout << endl << "Formula lui K2= hf[x0+h,y0+k1]";
	cout << endl;
	cout << "\nAlegeti functia:";
	cout << "\t\n1. f(x)= x + y";
	cout << "\t\n2. f(x)= x * y";
	cout << "\t\n3. f(x)= x2 + xy";
	cout << "\nAdaugati optinea: ";
	cin >> option;
	switch (option)
	{
	case 1:
		k1 = (float)h*(x + y);
		cout << endl << "K1= " << k1;
		k2 = h * (x + h + y + k1);
		cout << endl << "K2= " << k2;
		k = (k1 + k2) / 2;
		cout << endl << "Media K= " << k;
		if (repeat() == 1)
		{
			system("cls");
			goto label;
		}
		else
		{
			exit(0);
		}
		break;
	case 2:
		k1 = (float)h*(x*y);
		cout << endl << "K1= " << k1;
		k2 = h * ((x + h)*(y + k1));
		cout << endl << "K2= " << k2;
		k = (k1 + k2) / 2;
		cout << endl << "Media K= " << k;
		if (repeat() == 1)
		{
			system("cls");
			goto label;
		}
		else
		{
			exit(0);
		}
		break;
	case 3:
		k1 = (float)h*((x*x) + (x*y));
		cout << endl << "K1= " << k1;
		k2 = x = (x + h);
		k2 = h * ((x*x) + ((y + k1)*x));
		cout << endl << "K2= " << k2;
		k = (k1 + k2) / 2;
		cout << endl << "media K= " << k;
		if (repeat() == 1)
		{
			system("cls");
			goto label;
		}
		else
		{
			exit(0);
		}
		break;
	default:
		cout << endl << "Optiune gresita";
	}//end switch
}