
#include <iostream>
#include <cstdlib>
#include <stdlib.h>
#include <math.h>

using namespace std;

class modul // створення класу щоб було легше працювати
{
private: // тут ми вказуєм наші змінні
	float a, b, mod, res, x;
	int A, B;
public: // додаємо наші функції щоб не вказувати нові змінні в нову функцію
	void Modul();
	void Modul_power();
	void Modul_multiplication();
	void random();
	void enter();
};

void modul::enter() // введення наших змінних
{
	cout << "Enter number of mod =" << endl; cin >> mod;
	cout << "Enter number a =" << endl; cin >> a;
	cout << "Enter number b =" << endl; cin >> b;
	cout << "Enter number x =" << endl; cin >> x;
	cout << "Enter the starting point A =" << endl; cin >> A;
	cout << "Enter the end point В =" << endl; cin >> B;
}

void modul::Modul() // розв’язувати рівняння виду  a mod m = x
{
	printf("fmod of a mod m = x is %f\n", fmod(a, mod));
}

void modul::Modul_power() //розв’язувати рівняння виду a^b mod m = x
{
	printf("fmod of a^b mod m = x is %f\n", fmod(pow(a,b), mod));
}

void modul::Modul_multiplication() //розв’язувати рівняння виду  a*x ≡ b mod m
{
	printf("fmod of a*x = b mod m is %f\n", fmod(a * x, fmod(b,mod)));
}

void modul::random()
{
	// генератор випадкових чисел
	srand(time(NULL));

	// Формула для получення числа
	int num = A + rand() % (B - A + 1);

	cout << "Your randomly generated number = " << num << endl;
}

int main()
{
	modul r;
	r.enter();
	r.Modul();
	r.Modul_power();
	r.Modul_multiplication();
	r.random();
}
