#define LINE 256
#define WORD 30
#define ENTER '\n'
#define TAB '\t'
#define SPACE ' '
#define END '\0'


void shift_element(int* arr, int i);

void insertion_sort(int* arr, int i);

int get_line (char s[]);

int getword(char w[]);
/*
void searchInText(char s[], char txt[]);


int substring(char* str1, char* str2);
int similar(char *s, char *t, int n);
void print_similar_words(char * str);
*/
void printIntArray(int arr[], int length);

void printCharArray(char arr[], int length);
