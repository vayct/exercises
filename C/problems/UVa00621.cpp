#include <cstdio>
#include <string>
#include <iostream>
using namespace std;
int main() {
	int TC;
	scanf("%d", &TC);
	while(TC--)
	{
		string s;
		cin >> s;
		int len =  s.length();
		if ( !s.compare("1") || !s.compare("4") || !s.compare("78"))
			cout <<"+"<< endl;
		else if ( len > 2){

			if (( s[len - 2] == '3') && ( s[len-1] == '5'))
				cout << "-" << endl;
			else if ((s[0] == '9') && (s[len-1] =='4'))
				cout << "*" << endl;
			else if ((s[0] == '1') && (s[1] == '9') && (s[2] == '0'))
				cout << "?" << endl;

		}
		



	}
}
