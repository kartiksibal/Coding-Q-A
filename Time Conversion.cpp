#include <iostream>

using namespace std;
int main(int argc, char *argv[]) {
	
	int hr, new_time,mm,ss;
	
	string time;
	
	cin >> time;
	
	hr = (time[0] - '0') * 10 + (time [1] - '0');
	mm = (time[3] - '0') * 10 + (time [4] - '0');
	ss = (time[6] - '0') * 10 + (time [7] - '0');
	
	if (time[8] == 'P' && hr != 12)
	{
		new_time = (hr + 12);
	}	
	
	else if(time[8] == 'A' && hr == 12)
	{
		new_time = (hr - 12);
	}

	cout << new_time << ":" << mm << ":"<< ss;
	
}