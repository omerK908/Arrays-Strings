#include <stdio.h>
#include "aAndS.h"
	
int main(){
	int i = 3;
	int len = 8;
	int arr[] = {1, 3, 2, 4, 6, 5, 8, 7};
	int arr2[] = {8,7,6,5,4,3,2,1};
	int arr3[] = {5,3,7,9,3,5,7,5,3,7,3,6,3};
	int len3 = sizeof(arr3) / sizeof(*arr3);
	int* p = arr3;
	printIntArray(arr3, len3);
	insertion_sort(p, len3);
	printIntArray(arr3, len3);
	printf("%d\n", len3); 
	char s[] = {'a', 'b', 'a', '1', '\0', 'a'};
	char s1[LINE] = "";
	char w[WORD] = "";
	int getWord = getword (w);
	printf("%d\n", getWord);
	printCharArray(w, getWord);
	//printf("%lu\n", sizeof(s1) / sizeof(*s1));
	
	
	return 0;
}


	
