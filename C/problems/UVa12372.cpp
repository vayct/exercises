#include <cstdio>
int main() {
	int TC;
	int x = 1;
	int a,b,c;
	scanf("%d", &TC);
	while(TC--)
	{
		scanf("%d %d %d", &a, &b, &c);
		if( (a <= 20) && ( b <= 20) && (c <= 20)) {
			printf("Case %d: good\n", x++);
		}
		else {
			printf("Case %d: bad\n", x++);
		}


	}
}
