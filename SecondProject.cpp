#include "SeconProject.h"

int main()
{
	srand(time(NULL));

	int a[10];//Massive
	int S = 0;//Sum
	int flag;

	for (int i = 0; i < 10; i++)
	{
		a[i] = rand() % 100 * pow(-1,rand() % 2);
		S += a[i];
	}
	print(a, 10);
	cout << "Summa = " << S << endl;

	if (S == a[0]) flag = 1;
	if (S > a[0]) flag = 2;
	if (S < a[0]) flag = 3;
	
	int* p = &flag;
	void (*f)(int* a, unsigned size);
	f = func2(p);
	f(a, 10);
	return 0;
}
