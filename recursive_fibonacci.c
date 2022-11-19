#include<stdio.h>

/*int iterFibo(int N) {
   int F1=1, F2=1, Next;
   for(int i=2;i<=N;i++) {
      Next= F1+F2;
      F1=F2;
      F2=Next;
   }
   return F2;
}*/
int recFibo(int N) {
  if(N<=2) return 1;
  return recFibo(N-1) + recFibo(N-2);
}

int main() {
   int VAL= 7;
   printf("Fibo(%d)= %d recursive: %d\n", VAL, recFibo(VAL));
}
