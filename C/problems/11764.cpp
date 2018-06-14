#include <cstdio>
#include <iostream>
using namespace std;

int main() {
	int TC;
	int z = 1;
	cin >> TC;
	while(TC--)
	{
		int wall;
		int high=0;
		int low=0;
		int prev, curr;
		cin >> wall;
		if(wall == 0){
			high = 0;
			low = 0;
		}
		else if(wall == 1){
			cin >> curr;
			high = 0;
			low = 0;
		}
		else {

			cin >> curr;
			prev=curr;
			wall--;
			while(wall--){
				cin >> curr;
				if(curr > prev)
					high++;
				if(curr < prev)
					low++;

				prev = curr;


			}

		}
		printf("Case %d: %d %d\n", z++, high,low);



	}
}
