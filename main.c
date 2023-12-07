#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[])
{
	
	//¿¹Á¦
	
	int *score;
	int i;
	
	score = (int*) malloc (100 * sizeof (int));
	
	if (score = NULL)
	{
		printf("malloc failed!\n");
		return 0;
	}
	
	for (i=0; i<100; i++)
		score[i] = 0;
		
	system("PAUSE");
	return 0;
}
