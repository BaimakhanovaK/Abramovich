#include<iostream>
#include<cmath>
#include <iomanip>

using namespace std;

void main() {
	
	int b = 0;
	cout << "Nomer zadaniya: ";
	cin >> b;

	if (b == 1)
	{
		//zadacha so sbornika 79
		double sum = 1;
		double x;

		for (double x = 0.1; x <= 10; x = x + 0.1)
		{
			sum = sum*(1 + sin(x));
			cout << sum << endl;
		}
		cout <<sum << endl;
	}
	else if (b == 2)
	{
		//zadacha so sbornika 78(b)...dani chisla a i n. vichislit' : a(a+1)...(a+n-1)
		int p = 1;
		int n = 10;

		for (int a = 1; a <= n - 1; a = a+1)
		{
			p = p*(a + 1);
			cout << p << endl;
		}
		cout << "Result: "<< p << endl;
	}
	else if (b == 3)
	{
		//zadacha 80...

		double sum = 0;
		double x;
		int p = 1;
		int n=13;
		int k = 1;

		cout << "Vvedite chislo: ";
		cin >> x;
		
		for (int i = 1; i <= n; i = i + 2)
		{
			p = 1;
			for (int j = 1; j <= i; j++)
			{
				p = p*j;		
			}
			sum = sum + k*pow(x, i) / p;
			k = k*(-1);	
		}
			cout << sum;
	}
	else if (b == 4)
	{
		//zadacha 83
		int a;
		double sum = 0;
		int c = 1;

		cin >> a;
		while (sum <= a)
		{
			sum = sum + 1.0 / c;
			c++;
		}
		cout<< sum << endl;
		cout << c-1 << endl;
	}
}