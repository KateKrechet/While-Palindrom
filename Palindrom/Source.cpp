#include <iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Russian");
	int n;
	cout << "Введите любое число: "; cin >> n;
	int buffer_n = n;
	int mirror_n = 0;
	cout << "Пошаговое преобразование: " << endl;
	while (buffer_n!=0)
	{
		mirror_n *= 10;
		mirror_n += buffer_n % 10;
		buffer_n /= 10;
		cout << mirror_n << "\t\t" << buffer_n << endl;

	}

	cout << "Первоначальное число: " << n << endl;
	cout << "Перевернутое число: " << mirror_n << endl;
	if (n == mirror_n)
		cout << "Число является палиндромом" << endl;
	else
		cout << "Число НЕ является палиндромом" << endl;
	main();
}