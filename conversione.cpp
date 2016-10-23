
#include <iostream>
using namespace std;


int dectobin(int num, int& i, int& tot)
{
	int div = num / 2;
	int res = num % 2;
	if (res == 1)
	{
		int pot = 1;
		for (int f = 0; f<i; f++) pot *= 10;
		tot += pot;
	}
	if (div == 0) { return 0; }
	i++;
	dectobin(div, i, tot);
	return tot;
}
int dectoott(int num, int& j, int& tot1)
{
	int div = num / 8;
	int res = num % 8;
	int pot = 1;
	for (int f = 0; f<j; f++) pot *= 10;
	tot1 += res*pot;
	j++;
        if (div==0) {return 0;}
	dectoott(div, j, tot1);
	return tot1;
}
int main()
{
	int num;
	cout << "Inserisci il numero decimale: ";
	cin >> num;
	int i = 0;
  int j=0;
	int tot = 0;
  int tot1=0;
	int somma1 = 0;
	int bin = dectobin(num, i, tot);
	cout << "In binario: " << bin << endl;
	int ott = dectoott(num, j, tot1);
	cout << "in ottale: " << ott << endl;
}

