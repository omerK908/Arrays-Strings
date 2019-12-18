#define LINE 256
#define WORD 30
#define ENTER '\n'
#define TAB '\t'
#define SPACE ' '
#define END '\0'

int get_line (char s[]);

int get_word(char w[]);

int substring(char* str1, char* str2);

int similar(char *s, char *t, int n);

void print_lines(char* str);

void print_similar_words(char * str);