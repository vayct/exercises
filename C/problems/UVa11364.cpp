#include <cstdio>
int main() {
	
	int TC;
	scanf("%d", &TC);
	while (TC--)
	{
		int n;
		scanf("%d" , &n);
		int init, min, max;
		scanf("%d", &init);
		min = init;
		max = init;
		n--;
		int curr;
		while(n--)
		{
			scanf("%d", &curr);
			if(curr > max) max = curr;
			if(curr < min) min = curr;
		}
		printf("%d\n", 2 * (max - min));

	}
}
