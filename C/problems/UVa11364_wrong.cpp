#include <cstdio>
#include <algorithm>
using namespace std;
int main() {
	
	int TC;
	scanf("%d", &TC);
	while (TC--)
	{
		int n;
		scanf("%d" , &n);
		int list[n];
		int copy = n;
		
		for (int i = 0; i < n; i++)
			scanf("%d", &list[i]);
		sort(list,list + n);

		int total=0;
		if(n == 1)
		{
			total = (list[0] * 2);
		}
		else for (int i = 1; i < n; i++)
		{
			total += (list[i] - list[i-1]) * 2;
		}
		printf("%d\n", total);
	}
}
