#include <iostream>
using namespace std;

int main(){

	int gnomeGroup;
	cin >> gnomeGroup;

	for(int i = 0; i < gnomeGroup; i++){

		int numGnome = 0;
		cin >> numGnome;
		int indexGnome[numGnome];

		cin >> indexGnome[0];
		int result;
		for(int z =1; z < numGnome; z++){
			cin >> indexGnome[z];
			if(indexGnome[z] !=( indexGnome[z-1] +1)){
				result = z;
			}
		}
		cout<<result<<endl;
		


	}



}
