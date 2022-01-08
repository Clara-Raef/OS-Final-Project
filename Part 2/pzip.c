#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <pthread.h>
#include <string.h>

int argcc;
char **argvv;

FILE* open_file(char* filename) {
  FILE* fp = fopen(filename, "r");
  if (fp == NULL) {
    printf("wzip: cannot open file\n");
    exit(1);
  }

  return fp;
}

void *thread() {

  if (argcc < 2) {
    printf("wzip: file1 [file2 ...]\n");
    exit(1);
  }

  FILE* fp;
  int c = 0;
  int previous = -1;
  int counter = 0;

  // for each file you entered
  for (int i = 1; i < argcc; i++) {
    fp = open_file(argvv[i]);

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

}

int main(int argc, char** argv)
{


   argcc = argc;
   argvv = argv;
   
   
    int i;
    pthread_t tid;
  
    // Let us create three threads
    for (i = 0; i < 1; i++)
        pthread_create(&tid, NULL, thread, (void *)&tid);
               
  
    pthread_exit(NULL);
    return 0;
}
