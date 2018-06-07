#include <iostream>
#include <vector>
using namespace std;

vector<int> perm;

void permutation(int n){
	if(perm.size() == n){
		for(int i =0; i < n ; i++){
			cout<<perm[i];
		}
		cout<<endl;
	}
	else {
		vector<bool> used(n, false);
		for(int k =0; k < perm.size(); k++)
			used[perm[k]] = true;

		for(int j =0; j < n; j++){
			if(!used[j]){
				perm.push_back(j);
				permutation(n);
				perm.pop_back();
			}
		}
	}
}

int main(){
	permutation(4);
}
