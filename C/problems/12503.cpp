#include <cstdio>
#include <iostream>
using namespace std;


int main() {
	int TC;
	cin >> TC;
	while(TC--)
	{

		int n;
		int total = 0;
		cin >> n;
		string s;
		int counter = 1;
		int arr[n+1];
		int len = n+1;
		while(n--){
			cin >> s;
			if(!s.compare("SAME")){
				cin >> s;
				int step;
				cin >> step;
				arr[counter] = step;

			}
			else if(!s.compare("LEFT"))
				arr[counter] = -1000;
			else if(!s.compare("RIGHT"))
				arr[counter] = 1000;


			counter++;
		}
		for(int i = 1; i < len; i++) {
			int test = arr[i];
			while((test >= 1) && (test <= (len))){
				test = arr[test];

				

			}

			total += test;
			//printf("total: %d\n", total);
		}

		int answer = total/1000;
		printf("%d\n", answer);
	}
}
