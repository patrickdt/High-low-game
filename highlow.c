#include <stdio.h>
int
main(int argc, char **argv) {
while(1){
	printf("Welcome to the High Low game...\n");
	char enter;
	char c;
	int low = 1;
	int high = 100;
	int mid = (low + high)/2;
	char end;

  // Write your implementation here...

	while (1) {
		printf("Think of a number between 1 and 100 and press <enter>");
		enter = getchar();
		if (enter == 10) {break;}
		else{getchar();}	
	}
	
	while (1){
		printf("Is it higher than %d? (y/n)\n",mid);
		c = getchar();	
		getchar();
		if (c == 'y') {
			if (mid==low && mid==high){
			low++;
			break;
			}
			else if (high>low && mid > 1){
				low = mid + 1;
				mid = (high+low)/2;}
			else{
				break;
			}
		}
		else if (c == 'n'){
			if (mid==low && mid==high){
				break;
			}
			else if (high>low && mid > 1){
				high = mid - 1;
				mid = (high+low)/2;
			}
			else
				break;	
		}
		else {
			printf("Type y or n\n");
		}
	}
	
	if(low == 100)
		printf("\n>>>>>> The number is 101\n\n");
	else{
		printf("\n>>>>>> The number is %d\n\n",low);
	}
	printf("Do you want to continue playing (y/n)?");
	end = getchar();
	getchar();
	if (end == 'n'){
		printf("Thanks for playing!!!\n");
		break;
	}
}
