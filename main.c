#include <stdio.h>
#include <stdlib.h>

int main() {

  FILE * fp;
  char s;
  fp = fopen("file2.txt", "r");
  if (fp == NULL) {
    printf("\nCAN NOT OPEN FILE");
    exit(1);
  }
  do {
    s = getc(fp); // Read file character by character.
    printf("%c", s);
  }
  while (s != EOF);
  fclose(fp);

  return 0;

}
