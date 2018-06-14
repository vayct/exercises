#include <cstdio>
int main() {
	int c = 1;
	int n;
	int curr;
	while(1)
	{
		scanf("%d", &n);
		int total = 0;
		if( n == 0) break;
		while(n--)
		{
			scanf("%d", &curr);
			if (curr == 0) total--;
			else if (( curr>0) && (curr<100)) total++;
		}

		printf("Case %d: %d\n", c++, total);


	}
}
