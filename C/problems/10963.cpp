#include <cstdio>
#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int TC;
	int z = 1;
	cin >> TC;
	while(TC--)
	{
		int W,north, south;
		cin >> W;

		int match = 1;
		int init = 1;
		int prev;
		while(W--){
			cin >> north >> south;
			if(init == 1){
				prev = abs (north - south);
				init = 0;

			} else {
				int test = abs(north-south);
				if( test != prev){
					match = 0;


				}

			
			}
			
			
		}
			if( match == 1) {
				if(z>1) printf("\n");
				printf("yes\n");
			} else {
				if(z>1) printf("\n");
				printf("no\n");
			}
			z++;

	}
}
