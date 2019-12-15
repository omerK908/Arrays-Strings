#include <stdio.h>
#include <math.h>
#include <string.h>
#include "aAndS.h"





void shift_element(int* arr, int i){
	if(i < 0){
		printf("Cannot enter a negative number");
		return;
	}
	int tmp = *(arr + i);
	for(int y = i - 1; y >= 0; y--){
		*(arr + y + 1) = *(arr + y);
	}
	*arr = tmp;
}

void insertion_sort(int* arr, int len){
	int i, key, j; 
    for (i = 1; i < len; i++) { 
        key = *(arr + i); 
        j = i - 1;
        /* Move elements of arr[0..i-1], that are 
          greater than key, to one position ahead 
          of their current position */
        while (j >= 0 && *(arr + j) > key) { 
			shift_element((arr + j), 1);
			j--;
        } 
        *(arr + j + 1) = key; 
    } 
}

int get_line (char s[]){
	printf("Enter line: ");
	fgets(s, LINE, stdin);
	int counter = 0;
	char c = s[counter];
	while(c != ENTER && c != END){
		counter++;
		c = s[counter];
	}
	return counter;
}

int getword(char w[]){
	printf("Enter word: ");
	fgets(w, WORD, stdin);
	int counter = 0;
	char c = w[counter];
	while(c != ENTER && c!= TAB && c != SPACE && c != END){
		counter++;
		c = w[counter];
	}
	return counter;
	
}
/*

void searchInText(char s[], char txt[]);

int substring(char* str1, char* str2);
int similar(char *s, char *t, int n);
void print_similar_words(char * str);
*/

void printIntArray(int arr[], int length){
	for(int i = 0; i < length; i++){
		printf("%d", arr[i]);
		if(i + 1 < length){
			printf(", ");
		}else{
			printf("\n");
		}
	}
}
void printCharArray(char arr[], int length){
	for(int i = 0; i < length; i++){
		printf("%c", arr[i]);
		if(i + 1 >= length){
			printf("\n");
		}
	}
}