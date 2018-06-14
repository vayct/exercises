#include <cstdio>
#include <iostream>
using namespace std;



long unsigned int get_digit(long unsigned int x){

	if (x >= 10)
		get_digit(x/10);

	return x%10;

}


long unsigned int all_sum(long unsigned int *x){

	int total = 0;

	while(*x > 9){
		total += get_digit(*x);
		*x = *x/10;
	}
	*x = total + *x;
	if(*x > 9){
		all_sum(x);

	}
	return *x;

}

int main() {
	long unsigned int s;
	while(1)
	{
		cin >> s;
		if (s == 0) break;	


		int answer = all_sum(&s);
		cout <<  answer << endl;



	}
}
