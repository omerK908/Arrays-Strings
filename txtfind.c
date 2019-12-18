#include <stdio.h>
#include <math.h>
#include <string.h>
#include "txtfind.h"
#include <stdbool.h> 

int get_line (char s[]){
	char c;
	
	int counter = 0;
	do
	{
		c = getchar();
		if (c != EOF && c!= ENTER && counter < LINE)
		{
			s[counter] = c;
			counter++;
		}
	} while (c != EOF && c!= ENTER && counter < LINE);
	s[counter] = END;
	if(c == EOF){
		return EOF;
	}
	return counter;
}

int get_word(char w[]){
	char c;
	int counter = 0;
	do
	{
		c = getchar();
		if (c != EOF && c!= ENTER && c != TAB && c != SPACE && counter < WORD)
		{
			w[counter] = c;
			counter++;
		}
	} while (c != EOF && c!= ENTER && c != TAB && c != SPACE && counter < WORD);
	w[counter] = END;
	if(c == EOF){
		return EOF;
	}
	return counter;
}

int substring(char* str1, char* str2){
	char *p1, *p2, *p3;
	int i=0,j=0,flag=0;

	p1 = str1;
	p2 = str2;

	for(i = 0; i < strlen(str1); i++)
	{
		if(*p1 == *p2)
		{
			p3 = p1;
			for(j = 0; j < strlen(str2); j++)
			{
				if(*p3 == *p2)
				{
					p3++;p2++;
				}
    			else{
					break;
				}
        	}
			p2 = str2;
			if(j == strlen(str2))
			{
				flag = 1;
    			return true;
        	}
    	}
    	p1++; 
	}
	if(flag==0)
	{
    	return false;
	}
	return false;
}

int similar(char *s, char *t, int n){
	int ln1 = strlen(s);
 	int ln2 = strlen(t);
	if(ln1 == ln2){
		for (size_t i = 0; i < ln1; i++)
		{
			if(*(s + i) != *(t + i))return false;
		}
		return 1;
	}
	else if(ln1 > ln2){
		int i = 0, j = 0;
		while(i < ln1 && j < ln2){
			if(*(s + i) == *(t + j)){
				i++;
				j++;
			}else{
				i++;
				n--;
			}
		}
		if(i < ln1){
			n--;
			i++;
		}
		if(n < 0){
			return false;
		}
		return true;
	}
	return false;
}

void print_lines(char* str){
	char s[LINE];
	int ln = get_line(s); //read the empty line
	do{
		ln = get_line(s);
		if(substring(s, str)){
			printf("%s\n", s);
		}
	}while(ln != EOF);
}

void print_similar_words(char * str){
	char s[WORD];
	int ln = get_word(s); //read the empty line
	
	do{
		ln = get_word(s);
		if(similar(s, str, 1)){
			printf("%s\n", s);
		}
	}while(ln != EOF);
}

void printCharArray(char* arr){
	int length = strlen(arr);
	for(int i = 0; i < length; i++){
		printf("%c", *(arr + i));
		if(i + 1 >= length){
			printf("\n");
		}
	}
}
