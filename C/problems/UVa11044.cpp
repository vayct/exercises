#include <cstdio>

int main() {
	int TC, a,b;
	scanf("%d", &TC);

	while(TC--){
		scanf("%d %d",&a,&b);
		int length = a - 2;
		int width = b - 2;
		int one = (length%3 == 0) ? 0 : 1;
		int two = (width%3 == 0) ? 0 : 1;
		printf("%d\n", (length/3 + one) * (width/3 + two));
	}
}
