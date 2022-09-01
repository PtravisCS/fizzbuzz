#include <stdlib.h>
#include <stdio.h>
#include <math.h>

char * fizzbuzz(int i);
char * str;

int main(int argc, char * argv) {

  const int UPPER = 100;

  printf("\n");

  for (int i = 0; i <= UPPER; i++) {

    printf("%s\n", fizzbuzz(i));

  }

}

char * fizzbuzz(int i) {

  const int FIZZ = 3;
  const int BUZZ = 5;

  if ((i % FIZZ == 0) || (i % BUZZ == 0)) {

    if (i % FIZZ == 0) {

      if (i % BUZZ == 0) {

        return "fizzbuzz";

      } else {

        return "fizz";

      }

    } else {

      return "buzz";

    }

  } else {

    int length = snprintf(NULL, 0, "%i", i);
    free(str);
    str = malloc(length + 1);
    snprintf(str, length + 1, "%i", i);

    return str; 

  }

}

