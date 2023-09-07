#include<iostream>
using namespace std;


//#define WHILE_1
#define WHILE_2
void main()
{
	setlocale(LC_ALL, "");
#ifdef WHILE_1
	int i = 0;//счетчик цикла
	int n;//колличество итерация
	cout << "Введите колличество итераций: "; cin >> n;
	while (i < n)
	{
		cout << ++i << " Hello" << endl;
		//i++;
	}
#endif // WHILE_1

	int n;
	cout << "Введите колличество итераций: "; cin >> n;
	while (n--)
	{
		cout << n << "\t";
	}
	cout << endl;



}