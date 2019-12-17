#include <stdio.h>
#include "textfind.h"
#include <string.h>
	
int main(){
	char w[WORD];
	get_word(w);
	char c = getchar();

	switch (c)
	{
	case 'a':
		print_lines(w);
		break;

	case 'b':
		print_similar_words(w);
		break;
	
	default:
		printf("Wrong command\n");
		break;
	}	
	
	return 0;
}