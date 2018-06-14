#include <cstdio>
#include <algorithm>
using namespace std;
int main() {
	int TC;
	scanf("%d", &TC);
	int list[3];
	int c =1;
	while(TC--)
	{
		for(int i = 0; i < 3; i++)
			scanf("%d", &list[i]);

		sort(list,list + 3);
		printf("Case %d: %d\n", c++, list[1]);

	}
}
