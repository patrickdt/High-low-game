#include <stdio.h>
int
main(int argc, char **argv) {
	
		printf("Welcome to the High Low game...\n");
		char enter;
		char c;
	while(1){	
		int low = 1;
		int high = 100;
		int mid = 50;
		char end;

  // Write your implementation here...

		while (1) {
			printf("Think of a number between 1 and 100 and press <enter>");
			enter = getchar();
			if (enter == 10) {break;}
			else{getchar();}	
		}
		
		while(1){		
		//mid = (low + high)/2;
			while (1){
				printf("Is it higher than %d? (y/n)\n",mid);
				c = getchar();	
				getchar();
				if (c == 'y') {
					low = mid + 1;
					break;	
				}
				else if (c == 'n'){
					high = mid - 1;
					break;	
				}
				else {
					printf("Type y or n\n");
				}
			}
			if (high<low) break;
			//if not keep on going
			mid = (high+low)/2;
		} 
		
		printf("\n>>>>>> The number is %d\n\n",low);
		printf("Do you want to continue playing (y/n)?");
		end = getchar();
		getchar();
		
		if (end == 'n'){
			printf("Thanks for playing!!!\n");
			break;
		}
	}	
}	
