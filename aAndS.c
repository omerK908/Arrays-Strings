#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>
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
	printIntArray(arr, len);
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
	
	int count = 0;
	printf("Enter word: ");
	char c = getchar();
	w[0] = c;
	while(c != ENTER && c != TAB && c != SPACE && c != END){		
		count++;
		c = getchar();
		w[count] = c;
	}
	return count;
}

int substring(char* str1, char* str2){
	
	int ln1 = strlen(str1);
 	int ln2 = strlen(str2);
	 if(ln1 - ln2 > 0){
		for (size_t i = 0; i < ln1 - ln2; i++) {
    		_Bool flag = 1;
    		for (size_t j = 0; j < ln2 && flag; j++) {
      			flag = flag && (*(str1 + i + j) == *(str2 + j));
    		}
    	if(flag)return 1;
  		}
	 }else if(ln1 == ln2){
		 for (size_t i = 0; i < ln1; i++){		 
			 if(*(str1 + i) != *(str2 + i)) return 0;
		 }
		 return 1;
	 }else return 0;
	 return 0;

}

int similar(char *s, char *t, int n){
	int ln1 = strlen(s);
 	int ln2 = strlen(t);
	if(ln1 == ln2){
		for (size_t i = 0; i < ln1; i++)
		{
			if(*(s + i) != *(t + i))return false;
		}
		return true;
	}
	else if(ln1 > ln2){
		int i = 0, j = 0, notSim = 0, sim = 0;
		while(i < ln1 && j < ln2){
			if(*(s + i) == *(t + j)){
				i++;
				j++;
			}else{
				i++;
				n--;
			}
		}
		if(n < 0)return false;
		return true;
	}
	return false;
	 
	 /*
  	for (size_t i = 0; i < ln1 - ln2; i++) {
    	_Bool flag = 1;
		int count = n;
    	for (size_t j = 0; j < ln2 && flag; j++) {
			if(*(s + i + j) != *(t + j)){
				count--;
				if(count < 0)return 0;
			}
    	}
    	if(count >= 0)return 1;
  	}
  	return 0;
	  */
}

/*

void searchInText(char s[], char txt[]);

void print_similar_words(char * str);
*/

void printIntArray(int arr[], int length){
	for(int i = 0; i < length; i++){
		printf("%d", arr[i]);
		if(i + 1 < length){
			printf(",");
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