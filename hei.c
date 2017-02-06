#include <stdlib.h>

int main()
{
  char c = 0;
  for(int i = 0; i <= 0xff; ++i)
    printf("%d\t%c\n", i, i);
  return 1;
}
