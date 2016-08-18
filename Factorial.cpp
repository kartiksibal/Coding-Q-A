#include <iostream>
using namespace std;

int main()
{
	int a[3], b[3],one,two;
	
	for (int i = 0; i < 3; i++) cin >> a[i];
	for (int j = 0; j < 3; j++) cin >> b[j];
	
	for (int k = 0; k < 3; k++)
		{
			if (a[k] > b[k]) one++;
			if (b[k] > a[k]) two++;
			if (a[k] == b[k]) continue; 
		}

	cout << one << two;

}