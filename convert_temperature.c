#include <stdio.h>

int main() {
  float tem,farhe,cel;

  printf("to convert a tem to fahrenhiet and celsius\n");
  printf("temperature to celsius\n");
  scanf("%f",&tem);
  farhe=(tem*9/5)+32;
  printf(" %ffahrenhiet.\n",farhe);

  printf("celsius to temperature\n");
  scanf("%f",&tem);
  cel=(tem-32*5/9);

printf(" %fcelsius",cel);

  return 0;
}