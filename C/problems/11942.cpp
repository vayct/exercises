#include <cstdio>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int TC;
	int z = 0;
	cin >> TC;
	while(TC--)
	{
		int arr[10];
		int arr_cpy[10];
		int curr;
		for(int i = 0;i < 10; i++){
			cin >> curr;
			arr[i] = curr;
			arr_cpy[i] =curr;
			
		}

		sort(arr, arr+10);

		int asc = 1;
		int desc = 1;
		for(int i =0; i <10; i++){
			if(arr[i] != arr_cpy[i])
				asc = 0;
			if(arr[9-i] != arr_cpy[i])
				desc = 0;

		}

		if(z == 0){ printf("Lumberjacks:\n"); z++;}
		if(asc + desc)
			printf("Ordered\n");
		else printf("Unordered\n");



	}
}
