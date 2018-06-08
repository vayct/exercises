#include <cstdio>
int main() {
	
	//Number of test cases given in the first line of input
	int TC,a,b;
	scanf("%d", &TC);
	while (TC--) {
		scanf("%d %d" , &a, &b);
		printf("%d\n", a + b);
	}

	//mutile test cases terminated by special values (like zeroes)
	int c,d;
	while( scanf("%d %d", &c, &d), (c || d) )
		printf("%d\n", c + d);

	//multiple test cases terminate by EOF
	int e,f;
	while (scanf ("%d %d", &e, &f) == 2)
		//or while(scanf("%d %d", &e, &f) != EOF)
		printf("%d\n", e + f);

}
