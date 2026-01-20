#include <stdio.h> // Necessary for printf()
#include <time.h>
#include <stdlib.h>

int main() {
	
	srand(time(NULL));

	// generate a number from 1-10 inlusive
	int myrand = rand() % 11;

	if (myrand >= 0 && myrand <= 4) {
		printf("Eat more beef, kick less cats\n");
	}	else if (myrand >= 5 && myrand <= 9) {
		printf("FRODO LIVES\n");
	}	else {
		printf("Larn is the best roguelike\n");
	}

	printf("The random number was: %d\n", myrand);

	return 0;
}
