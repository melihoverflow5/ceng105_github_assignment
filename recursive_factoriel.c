#include <stdio.h>

int RecFact(int N) {
   if(N<=1) return 1; /* Termination Condition: */
   return N* RecFact(N-1);
}
int main() {
   printf("%d!= %d\n", 5, RecFact(5));
}
