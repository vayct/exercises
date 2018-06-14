#include <cstdio>
#include <iostream>
using namespace std;

int main() {
	int TC, test;
	cin >> TC;
	while(TC--)
	{	
		double total = 0;
		int one, two, three;
		cin >> test;
		while(test --){

			cin >> one >> two >> three;
			total += one * three;
			
		}
		cout << total <<endl;
	

	}
}
