#include <cstdio>
#include <iostream>
using namespace std;
int main() {
	string s;
	int c = 1;
	while(1)
	{
		cin >> s;
		if( !s.compare("*"))
			break;

		if( !s.compare("Hajj"))
			printf("Case %d: Hajj-e-Akbar\n", c++);
		else if ( !s.compare("Umrah"))
			printf("Case %d: Hajj-e-Asghar\n" , c++);



	}
}
