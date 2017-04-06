#include <stdio.h>
#include <math.h>

int main (void){
	
	//printf("Welcome to Bowling Score Calculator.\nPlease enter Strikes as 10.\nPlease enter Spares as a sum equaling 10.\n");
	//printf("Example: Ball 1 = 3. If you picked up the Spare, enter 7 for your next ball.\n");
	//printf("In this program, you will enter your scores one ball at a time, one frame at a time.\n");
	
	int score1;
	int score2;
	printf("Please enter your score for Frame 1: ");
	scanf("%i", &score1);
	if (score1 <= 9) {
		scanf("%i", &score2);
		if (score1 + score2 > 10) {
			printf("Error. Score cannot excede 10 for any individual frame\n");
			scanf("%i", &score2);
		}
		if (score1 == 10)	{
			printf("%i\n", score1);
		} 
		else if (score1 <=9) {
			printf("%i|%i\n", score1, score2);
		}
	}
	
	//printf("%i%i\n", score1, score2);
	
	return (0);
}

int frameScore(int ball1; int ball2; int ball3)	{
	
}