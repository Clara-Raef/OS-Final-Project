#include <stdio.h>
#include <stdlib.h>
#define FILE_ERROR "wcat: cannot open file"     //define macros
#define ARGC_ERROR "wcat: no input file"
#define TEST_FILE1 "test0.txt"
#define TEST_FILE2 "test1.txt"

int getFileLength(char *);
void getFileChar(char *, char *, int);

int main(int argc, char *argv[]) {
	if (argc <= 1) {
		printf( "%s\n", ARGC_ERROR );
		exit(0);
	} else {
		for (int i = 1; i < argc; i++) {
			int length = getFileLength(argv[i]);
			char *contents = (char *) malloc (length * sizeof(char));
			getFileChar(argv[i], contents, length);
			printf( "                            File Name = %s\n", argv[i] );
			printf( "------------------------------------------------------------------------\n" );
			printf( "%s\n\n\n", contents );
		}
	}
	return EXIT_SUCCESS;
}

int getFileLength(char *fileName) {
	FILE *file = fopen(fileName, "r");
	if (file == NULL) {
		printf( "%s\n", FILE_ERROR );
		exit(1);
	} else {
		int length = 0;
		while (getc(file) != EOF)
			length++;
		fclose(file);
		return length;
	}
}

void getFileChar(char *fileName, char *contents, int length) {
	FILE *file = fopen( fileName, "r" );
	if (file == NULL) {
		printf( "%s\n", FILE_ERROR );
		exit(1);
	} int i = 0;
	while (i < length) {
		contents[i] = getc(file);
		i++;
	} fclose(file);
	contents[i] = '\0';
}
