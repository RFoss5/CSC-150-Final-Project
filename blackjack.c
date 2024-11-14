#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	srand(time(NULL));
	int i=1,jqk=1;
	int deck[52],hand[5],dealer[2];
	while(i<40){
	for(int m=1;m<11;m++){
		deck[i]=m;
		i++;
		}
	}
	while(i<53){
			deck[i]=10;
			i++;
	}
	for (int l = 0; l < 2; l++) {
  		int num = rand() % 52 + 1;
  		hand[l]=deck[num];
  		printf("%d ",hand[l]);
	}
	printf("This is your hand, what would you like to do?\n1. Hit\n2. Stay\n");
	scanf("%d ", &jqk);
	printf("\n");
}
