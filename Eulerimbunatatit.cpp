//Euler imbunatatita
#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
double df(double x, double y)
{
	double a = x + y;            //functia pentru definire dy/dx
	return a;
}
int main()
{
	double x0, y0, x, y_i, dy1, dy2, dy_avg, y_n, h;    //valorile initiale
	cout << "\nIntroduceti valorile initiale x0 si y0:\n";
	cin >> x0 >> y0;                    
	cout << "\nIntroduceti valoarea lui x pentru care se calculeaza y:\n";
	cin >> x;
	cout << "\nIntroduceti valoarea lungimii h:\n";
	cin >> h;                    
	cout << "x" << setw(16) << "y" << setw(16) << "hy'" << setw(16) << "y_new" << setw(16) << "hy_new'" << setw(16) << "hy'avg" << setw(16) << "y_n+1" << endl;
	cout << "--------------------------------------------------------------------------------------------------\n";
	while (fabs(x - x0)>0.0000001)

	{
		dy1 = h * df(x0, y0);
		y_i = y0 + dy1;
		dy2 = h * df(x0, y_i);
		dy_avg = (dy1 + dy2) / 2.0;
		y_n = y0 + dy_avg;
		cout << x0 << setw(16) << y0 << setw(16) << dy1 << setw(16) << y_i << setw(16) << dy2 << setw(16) << dy_avg << setw(16) << y_n << endl;
		x0 = x0 + h;            //calculam noul x.
		y0 = y_n;
	}
	cout << x0 << setw(16) << y0 << endl;
	cout << "Valoarea aproximativa a lui y in x=0 este " << y0 << endl;
	return 0;
}