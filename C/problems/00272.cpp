#include <cstdio>
int main() {
	char x;
	int counter = 1;
	while(scanf("%c", &x) != EOF){
		if ( x == '"')
			if ( counter == 1) {
				counter = counter * -1;
				printf("``");
			}
			else{
				counter = counter * -1;
				printf("''");
			}
		else printf("%c", x);
	}
}
