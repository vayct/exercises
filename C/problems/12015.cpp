#include <cstdio>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int TC;
	int z=1;
	cin >> TC;
	while(TC--)
	{
		string s[10];
		int rank[10];
		int highest = 0;
		int curr;

		for(int i = 0; i < 10 ; i++ ){
			cin >> s[i] >> curr;
			rank[i] = curr;
			highest = max(highest, curr);
		}

		printf("Case #%d:\n", z++);
		for(int i = 0; i < 10 ; i++) {
			if(rank[i] == highest)
				cout << s[i] << endl;
		}


	}
}
