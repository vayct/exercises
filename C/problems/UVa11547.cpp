#include <cstdio>
int main() {
	int TC,b;
	scanf("%d", &TC);
	while(TC--)
	{
		scanf("%d", &b);
		int total = (((((((b * 567)/9)+7492)*235)/47)-498)/10)%10;
		if (total < 0) total = total * -1;
		printf("%d\n", total);
		

	}
}
