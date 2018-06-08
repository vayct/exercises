#include <cstdio>
int main(){
	int a,b,c,d, TC;
	while (scanf("%d %d %d %d", &a,&b,&c,&d))
	{
		if ((a + b + c + d) == 0)
			break;
		else
		{
			int first = (b == a) ? 0 : ((40-b) +a)%40 * 9;
			int second = (b == c) ? 0 : ((40-b) +c)%40 * 9;
			int third = (d == c) ? 0 : ((40-d)+c)%40 * 9;
			printf("%d\n", 1080 + first + second + third);
		}
	}
}
