//Euler
#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
double df(double x, double y)            //Functie de definire  dy/dx
{
	double a = x + y;                //dy/dx=x+y
	return a;
}
int main()
{
	int n;
	double x0, y0, x, y, h;
	cout.precision(5);            // pentru precizie
	cout.setf(ios::fixed);
	cout << "\nIntroduceti valorile initiale ale lui x0 si y0:\n";        //Initial values
	cin >> x0 >> y0;
	cout << "\nPentru ce valoare a lui x sa se calculeze y\n";
	cin >> x;
	cout << "\nIntroduceti lungimea h:\n";
	cin >> h;
	cout << "x" << setw(19) << "y" << setw(19) << "dy/dx" << setw(16) << "y_new\n";
	cout << "----------------------------------------------------------\n";
	while (fabs(x - x0)>0.0000001)
	{
		y = y0 + (h*df(x0, y0));            //calculam noul y,  y0+h*dy/dx   
		cout << x0 << setw(16) << y0 << setw(16) << df(x0, y0) << setw(16) << y << endl;
		y0 = y;
		x0 = x0 + h;                //calculam noul x.
	}
	cout << x0 << setw(16) << y << endl;
	cout << "Valoarea aproximativa a lui y in x=0 este " << y << endl;        //afisarea solutiei
	return 0;
}