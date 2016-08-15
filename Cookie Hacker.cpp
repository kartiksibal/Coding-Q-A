#include <iostream>

using namespace std;
int main(int argc, char *argv[]) {
	
	int guest, cookies_user, cookies_required, i;
	
	cin >> guest >> cookies_user;
	
	if( cookies_user < guest)
	{
		cookies_required = (guest - cookies_user);
		
		cout << cookies_required;
		
	}
	
	if (cookies_user > guest)
	{
		for (i = cookies_user; i > 0 ; i++)
		{
			if ( i % guest == 0)
			
			{
				break;
			}
			
		}
		
		cookies_required = ( i - cookies_user);
	
		cout << cookies_required;
	}
}