#include <cstdio>
int main() {

	//output requires the format
	//"Case [NUMBER]: [ANSWER]" followed by a blank line
	int a, b, c = 1; 
	while (scanf("%d %d", &a, &b) != EOF)
	// notice the two ‘\n’ | 6 3 | Case 2: 12
	printf("Case %d: %d\n\n", c++, a + b);


	//requires output blank line only between test cases, not after the last output
	
	int x,y,z =1;
	while (scanf("%d %d", &x, &y) != EOF){
		if( z > 1) printf("\n");
		printf("Case %d: %d\n", z++, x + y);
	}

}
