#include <iostream>
#include <stdlib.h>
using namespace std;

void flipFive(int position, bool* board){

	//error checking
	if(position < 0 | position > 8){
		return;
	}


	//flip center position
	board[position] = !board[position];

	//flip top position
	if(position - 3 >= 0){
	//	cout<<"FLIP TOP\n";
		board[position -3] = ! board[position -3];
	}

	//flip bottom position if available
	if(position + 3 <= 8){
	//	cout<<"FLIP BOT\n";
		board[position + 3] = !board[position +3];
	}

	//flip right position if possible
	if((position + 1)%3 != 0){
	//	cout<<"FLIP RIGHT\n";
		board[position + 1] = !board[position+1];
	}

	//flip left position if possible
	if(((position -1)%3 != 2) &( (position-1) >= 0)){
	//	cout<<"FLIP LEFT\n";
		board[position -1] = !board[position - 1];
	}
}



int test(int level, bool* board){


	int counter = 0;
	for(int i =0; i < 9; i++){
		if(board[i] == true){
			counter++;
		//	cout<<"COUNTER ++:"<<counter<<endl;
		}
	}
	if(counter == 0){
		return level;
	}










	int tracker = 10;
	for(int i = level; i < 9;i++){

		flipFive(i,board);

		/*
		for(int z =0; z < 9 ; z++){
			cout<<board[z]<< " ";
		}
		cout<<endl;
		*/

		bool newBoard[9];
		for(int z = 0; z < 9; z++){
			newBoard[z] = board[z];
		}
				
		tracker = min(tracker, test(level+1,newBoard));

		flipFive(i,board);

		
		}


	


	return tracker;

}


int main(){

	int SIZE = 9;
	char input[9];
	bool testBoard[9];


	//read input
	for(int i =0; i < SIZE; i ++){
		cin >> input[i];
	}

	//convert input to true or false
	for(int i =0; i < SIZE; i ++){
		if(input[i] == '.'){
			testBoard[i] = false;

		}else{
			testBoard[i] = true;
		}
	}

	/*
	for(int z=0; z < SIZE; z++){
	flipFive(z, testBoard);

	for(int i=0; i < SIZE; i++){

		if(testBoard[i] == false){
			cout <<".";
		}else{
			cout <<"*";
		}

		if(i%3 == 2){
			cout<<endl;
		}
	}
	cout<<endl;
	}
	*/



	int result = test(0, testBoard);

	cout<<result<< endl;

}
