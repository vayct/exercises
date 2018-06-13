#include <cstdio>
#include <iostream>
using namespace std;
int main() {
	string word;
	int c = 1;
	string print;
	while (1)
	{
		cin >> word;
		if ( !word.compare("#")) break;

		if ( !word.compare("HELLO")) print = "ENGLISH";
		else if ( !word.compare("HOLA")) print = "SPANISH";
		else if ( !word.compare("HALLO")) print = "GERMAN";
		else if ( !word.compare("BONJOUR")) print = "FRENCH";
		else if ( !word.compare("CIAO")) print = "ITALIAN";
		else if ( !word.compare("ZDRAVSTVUJTE")) print = "RUSSIAN";
		else print = "UNKNOWN";

		cout <<"Case " <<c<<": "<<print<<endl;
		c++;
	}
}
