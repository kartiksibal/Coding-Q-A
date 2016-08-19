#include <iostream>
using namespace std;

int main()
{
	int arr[1000],e,sum = 0;
	
	cin >> e;
	
	
	for(int i = 0; i < e; i++)
	{
		cin >> arr[i];
	}

	for (int j = 0 ; j < e; j++)
	{
		
		sum += arr[j];
	}

	cout << sum;

}