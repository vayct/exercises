#include <cstdio>
#include <iostream>
using namespace std;

int main() {
	int x,y;
	while(1)
	{

		cin >> x >> y;
		if((x == -1) && (y==-1)) break;

		if(x == y)
			cout << "0" << endl;
		else if (x < y){
			int one = y - x;
			int two = x - y + 100;


			int answer = (one > two)? two: one;
			cout << answer << endl;
		} else if ( x > y) {
			int three = x - y;
			int four = y - x + 100;
			int answer = (three > four)? four: three;
			cout << answer << endl;


		}


	}
}
