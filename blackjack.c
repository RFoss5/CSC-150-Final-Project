#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
	srand(time(NULL));
	int i=1,jqk=1,l,handtotal=0, dealertotal=0;
	int deck[52],hand[5];

	while(i<40){
	for(int m=1;m<11;m++){
		deck[i]=m;
		i++;
		}
	}
	while(i<53){
			deck[i++]=10;
			deck[i++]=10;
			deck[i++]=10;
	}
	for (l = 0; l < 2; l++) {
  		int num = rand() % 52 + 1;
  		hand[l]=deck[num];
  		handtotal+=deck[num];
  		printf("%d ",hand[l]);
  	}
  	for (int deal = 0; deal < 2; deal++) {
  		int num = rand() % 52 + 1;
  		dealertotal+=deck[num];
  	}
  	if((hand[0]==1&&hand[1]==10)||(hand[0]==10&&hand[1]==1)){
		handtotal+=10;
		jqk=3;
  	}
  		while(jqk<2){
		printf("\nThis is your hand, what would you like to do?\n1. Hit\n2. Stay\n");
		scanf("%d", &jqk);
			switch(jqk){
				case 1:
					int handsize=0;
					int num2=rand()%52+1;
					hand[l++]=deck[num2];
					handtotal+=deck[num2];
					while(handsize<5){
						if(hand[handsize]!=0)
						printf("%c ",hand[handsize]+'0');
						handsize++;
						}
					if(hand[4]!=0)
						jqk=2;
					if(handtotal>21){
						jqk=2;
						printf("\nYou busted!\n");
					}
					break;
				case 2:
					break;
				}
	}
	if(handtotal<22&&handtotal>dealertotal){
		printf("You Win!\nYour Hand:%d\nDealer's Hand:%d",handtotal,dealertotal);
	}else{
		printf("You Lose!\nYour Hand:%d\nDealer's Hand:%d",handtotal,dealertotal);
	}
	printf("\n");
}
