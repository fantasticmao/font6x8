#include <stdio.h>
#include <stdlib.h>

#include "font6x8.h"

void usage(char *exec) {
  printf("Usage: %s <string>\n", exec);
  printf("\t<string> ASCII characters\n");
}

void render(const char *bitmap) {
  char bit;
  for (int y = 0; y < 8; y++) {
    for (int x = 0; x < 6; x++) {
      bit = bitmap[x] >> y & 1;
      printf("%c", bit ? 'x' : '.');
    }
    printf("\n");
  }
}

int main(int argc, char *argv[]) {
  if (argc != 2) {
    usage(argv[0]);
    return 1;
  }

  char *str = argv[1];
  for (char c = *str; c != '\0'; c = *++str) {
    if (c > 127 || c < 0) {
      usage(argv[0]);
      return 2;
    }
    printf("Character '%c'\n", c);

    const char *bitmap = font6x8_ascii[c];
    render(bitmap);
  }
  return 0;
}