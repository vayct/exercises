#include <cstdio>
#include <iostream>
using namespace std;

int main() {
	int TC;
	int z =1;
	cin >> TC;
	while(TC--)
	{
		int calls;
		cin >> calls;
		int mile = 0;
		int juice = 0;
		int curr;
		while(calls--)
		{
			cin >> curr;
			if(curr != 0){
				mile += (curr/30  + 1);
				juice +=( curr/60 + 1);
			}
					
		
		}
	//printf("m: %d | j: %d\n", mile, juice);
	mile = mile * 10;
	juice = juice * 15;
	if(juice == mile)
		printf("Case %d: Mile Juice %d\n", z++, mile);
	else if (juice < mile)
		printf("Case %d: Juice %d\n", z++, juice);
	else if (mile < juice)
		printf("Case %d: Mile %d\n", z++, mile);


	}
}
