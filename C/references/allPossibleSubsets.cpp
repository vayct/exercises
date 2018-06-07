#include <iostream>
#include <vector>
using namespace std;


vector<int> group;

void subsets(int n){
	
	for(int i =0; i < group.size(); i++){
		cout<<group[i];
	}
	cout<<endl;



	int next = (group.empty() ? 0 : 1 + group.back());

	for(int j =next; j < n; j++) {
		group.push_back(j);
		subsets(n);
		group.pop_back();
	}
}


int main() {
	subsets(3);
}
