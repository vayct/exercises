#include <cstdio>
#include <iostream>
using namespace std;
int main() {
	int month,num;
	double down, loan, borrower, car_worth, monthly_payment;

	int curr;
	double depreciation, past_dep;
	while(1)
	{
		cin >> month >> down >> loan >> num;
		if(month < 0) break;
		//cout <<"month: " << month <<"down: " << down <<"loan: "<< loan << "num: " <<  num << endl;
		int counter = 0;
		int found = 1;
		int target;
		borrower = loan;
		car_worth = down + loan;
		monthly_payment = loan / month;

	//	printf("borrower %f | car_worth %f\n", borrower, car_worth);
		cin >> curr >> depreciation;
		if(curr == 0){
			car_worth = car_worth * (1- depreciation);
			past_dep = depreciation;
			//printf("curr: %d | counter: %d | borrower:%f | car_worth:%f | dep: %f\n", curr, counter, borrower, car_worth, past_dep);

			if(borrower < car_worth){
				target = 0;
				found = 0;
			}
			counter++;


		}
		num--;
		while(num ){
			num--;
			
		//	scanf("%d %lf\n", &curr, &depreciation);
			cin >> curr >> depreciation;
			while ( curr > counter) {
				borrower = borrower - monthly_payment;
				car_worth = car_worth * (1- past_dep);
				//printf("curr: %d | counter: %d | borrower:%f | car_worth:%f | dep: %f\n", curr, counter, borrower, car_worth, past_dep);
				if ( borrower < car_worth){
					if(found == 1){
						target = counter;
						found = 0;


					}
				}
				counter++;
			}





		past_dep = depreciation;
		}//while num-- end

		int leftover = month - counter + 1;
	//	printf("leftover :%d\n", leftover);
		while(leftover && found) {
			leftover--;
			car_worth = car_worth * (1- past_dep);
			borrower = borrower - monthly_payment;
			//printf("curr: %d | counter: %d | borrower:%f | car_worth:%f | dep: %f\n", curr, counter, borrower, car_worth, past_dep);
			if ( borrower < car_worth){
				if(found == 1) {
					target = counter;
					found = 0;


				}
							found = 0;
			}
			counter++;






		}

	if(target == 1){
		printf("1 month\n");
	}
	else{ 
		printf("%d months\n", target);
	}

}
}
