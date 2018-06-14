#include <cstdio>
#include <iostream>
#include <string>
#include <sstream>
using namespace std;
int main() {
	int TC;
	long long total= 0;
	scanf("%d\n", &TC);
	while(TC--)
	{
		string s;
		getline(cin,s, '\n');

		istringstream iss(s);
		do {
			string subs;
			iss >> subs;
			if(!subs.compare("donate")){
				int money;
				iss >> money;
				total += money;
			}else if (!subs.compare("report")){
				printf("%lld\n", total);
			}
		}
		while (iss);

	}
}

