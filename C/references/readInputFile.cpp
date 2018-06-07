#include <iostream>
#include <fstream>
using namespace std;


ifstream fin("test.in");
int main() {


	int numTrials;
	fin >> numTrials;

	for (int t= 0; t < numTrials; t++) {
		int n;
		fin >> n;
		cout <<n;
	}


}

