#include <iostream>
#include <vector>
using namespace std;

vector<int> choice;

void combination(int n, int k) {
	if(choice.size() == k){
		for(int i = 0; i < k; i++){
			cout<<choice[i];
		}
		cout<<endl;
	}

	else{
		int next = (choice.empty() ? 0 : 1 + choice.back());
		for(int j=next; j < n; j++){
			choice.push_back(j);
			
			if(true)
				combination(n,k);

			choice.pop_back();
		}
	}
}


int main(){

	combination(5,3);

	return 0;
}
