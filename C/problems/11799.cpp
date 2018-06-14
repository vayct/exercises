#include <cstdio>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int TC;
	int z =1;
	cin >> TC;
	while(TC--)
	{
		int n;
		int highest = 0;
		int curr;
		cin >> n;
		while(n--){
			cin >> curr;
			highest = max(curr, highest);

		}
		printf("Case %d: %d\n", z++, highest);


	}
}
