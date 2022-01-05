#include <stdlib.h>
#include <stdio.h>
int main(int argc, char *argv[]){

	if(argc < 2){
		printf("my-zip: file1 [file2 ...] \n");
		exit(1);
	}

	for(int filenum = 1; filenum < argc; filenum++){

		FILE *fp = fopen(argv[filenum], "r");

		if(fp == NULL){
			printf("cannot open file\n");
			exit(1);
		}

		char buf;
		buf = fgetc(fp);
		int count = 1;
		char temp = buf;
		buf = fgetc(fp);

		while(buf != EOF){

			if(buf == temp){
				count++;
			}

			else{
				fwrite(&count, sizeof(int), 1, stdout);
				fwrite(&temp, sizeof(temp), 1, stdout);
				temp = buf;
				count = 1;
			}
			buf = fgetc(fp);
		}

		fclose(fp);
	}
	return(0);
}
