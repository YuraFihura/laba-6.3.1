#include<iostream>
#include<iomanip>
#include<time.h>

using namespace std;

template <typename T>
void Input(T a, const size_t n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "a[" << i << "] = ";
		int t;
		cin >> t;
		a[i] = t;
	}
	cout << endl;
}

void Input(int* a, const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "a[" << i << "] = ";
		int t;
		cin >> t;
		a[i] = t;
	}
	cout << endl;
}

template <typename T>
void Print(const T	a, const size_t n)
{
	for (int i = 0; i < n; i++)
		cout << setw(4) << a[i];
	cout << endl;
}

void Print(int* a, const int n)
{
	for (int i = 0; i < n; i++)
		cout << setw(4) << a[i];
	cout << endl;
}

template <typename T>
int Count(const T a, const size_t n)
{
	int m = -15;
	for (int i = 0; i < n; i++)
	{
		if (a[i] % 2 == 0 && a[i] > m)
			m = a[i];
	}
	return m;
}

int Count(int* a, const int n)
{
	int m = -15;
	for (int i = 0; i < n; i++)
	{
		if (a[i] % 2 == 0 && a[i] > m)
			m = a[i];
	}
	return m;
}

int main()
{
	srand(time(0));

	int n;

	cout << "n = "; cin >> n;

	int* a = new int[n];

	Input(a, n);
	cout << "a = [ " << Count(a, n) << " ];" << endl;
	Print(a, n);
	Count(a, n);

	return 0;
}
