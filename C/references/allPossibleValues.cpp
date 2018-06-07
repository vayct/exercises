#include <iostream>
#include <vector>
using namespace std;

vector<int> choice;

void baseEnumeration(int d, int B){
	if(choice.size() == d){
		for(int i = 0; i < d; i++){
			cout<<choice[i];
		}
		cout<<endl;
	}

	else{
		for(int j =0; j < B; j++){
			choice.push_back(j);
			
			baseEnumeration(d,B);
			choice.pop_back();
		}
	}
}

int main() {
	baseEnumeration(2,5);

}

