#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


//#3


struct Book{
	int number;
	char title[10];
};

void main(void) {
	int i;
	struct Book **bookshelf;
	
	bookshelf = (struct Book**)malloc(3*sizeof(struct Book*));
	for (i=0;i<3;i++)
		bookshelf[i] = (struct Book*)malloc(10*sizeof(struct Book));
		
	bookshelf[1][3].number = 5;
	strcpy(bookshelf[1][3].title, "C++ programming");
	
	(bookshelf[2]+4)->number = 3;
	strcpy((bookshelf[2]+4)->title, "Communications Theory");
	
	printf("book (1,3): %i, %s\n", (bookshelf[1]+3)->number, (bookshelf[1]+3)->title);
	printf("book (2,4): %i, %s\n", bookshelf[2][4].number, bookshelf[2][4].title);
	
	//구조체 포인터 3개가 각각 가리키는 주소를 해제시킴 
	for(i=0;i<3;i++)
		free(bookshelf[i]);
		
	//구조체 2중 포인터가 가리키는 주소를 해제시킴 
	free(bookshelf);
}

//result

/*
book (1,3): 5, C++ programming
book (2,4): 3, Communications Theory
*/

