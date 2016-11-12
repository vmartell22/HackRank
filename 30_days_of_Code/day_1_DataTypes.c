#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

  int i = 4;
  double d = 4.0;
  char s[] = "HackerRank ";

  int j = 0;
  double e = 0.0;
  char s2[80];

  // Read and save an integer, double, and String to your variables.
  scanf("%d",&j);
  scanf("%lf",&e);
  scanf(" %[^\n]\n",s2);

  // Print the sum of both integer variables on a new line.
  printf("%d\n", i+j);
  // Print the sum of the double variables on a new line.
  printf("%.1lf\n", d+e);
  // Concatenate and print the String variables on a new line
  // The 's' variable above should be printed first.
  printf("%s", s );
  printf("%s\n", s2 );
  return 0;
}

