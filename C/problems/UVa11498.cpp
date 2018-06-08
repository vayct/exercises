#include <cstdio>
int main(){
	while(1){
	int k, N,M;
	scanf("%d", &k);
	if (k == 0) break;
	scanf("%d %d", &N, &M);

	int x,y;
	while(k--)
	{
		scanf("%d %d", &x, &y);

		if((x == N) || (y == M)) printf("divisa\n");
		else if ((x > N) && (y > M)) printf("NE\n");
		else if ((x > N) && (y < M)) printf("SE\n");
		else if ((x < N) && (y > M)) printf("NO\n");
		else if ((x < N) && (y < M)) printf("SO\n");


	}
	}


}
