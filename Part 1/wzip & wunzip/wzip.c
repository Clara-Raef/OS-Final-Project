#include <stdio.h>
#include <stdlib.h>


// check that file is opened correclty 
FILE* open_file(char* filename) {
  FILE* fp = fopen(filename, "r");
  if (fp == NULL) {
    printf("wzip: cannot open file\n");
    exit(1);
  }

  return fp;
}

// chech that you entered at least 2 words 
int main(int argc, char** argv) {
  if (argc < 2) {
    printf("wzip: file1 [file2 ...]\n");
    exit(1);
  }

  FILE* fp;
  int c = 0;
  int previous = -1;
  int counter = 0;

  // for each file you entered
  for (int i = 1; i < argc; i++) {
    fp = open_file(argv[i]);

    while ((c = fgetc(fp)) != EOF) {
      
      // at first character
      if (previous == -1) {
        previous = c;
        counter++;
      } else if (c != previous) {
        fwrite(&counter, sizeof(int), 1, stdout);
        fputc(previous, stdout);
        counter = 1;
      } else {
        counter++;
      }

      previous = c;
    }

    fclose(fp);
  }

  if (counter > 0) {
    fwrite(&counter, sizeof(int), 1, stdout);
    fputc(previous, stdout);
  }

  return 0;
}
