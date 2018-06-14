#include <cstdio>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int n;
	while(cin >> n)
	{

		int b,h,w;
		cin >> b>> h >> w;
		int total[h];	
		for(int z = 0; z < h; z++){
			int a,p;
			int not_enough_bed = 0;
			cin >> p;
			for(int i =0; i < w; i++){
				cin >> a;
				
				not_enough_bed = max(not_enough_bed,a);

				
			}
			if(not_enough_bed >= n)
				total[z] = n * p;
			else
				total[z] = 0;

			//cout << "hotel: " << z << "  | total: " << total[z] << "{ " << n << "} " << p<< endl;
		}

		int answer = total[0];
		for(int i =1; i < h; i++){
			if(( total[i] < answer) && (total[i] != 0))
				answer = total[i];
			else if(answer == 0)
				answer = total[i];
		}

		if((answer < b) && (answer >0))
			cout << answer << endl;
		else
			cout << "stay home" << endl;


	}
}
