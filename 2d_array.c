#include <stdio.h>
void print1D(int A[], int NRows, int NCols) {
	int i, j;
   for(i=0;i<NRows;i++) {
     for(j=0; j<NCols;j++)
        printf("%3d ", A[i*NCols+j]);
     printf("\n");
   }
}

void print2D(int A[ ][4], int NRows, int NCols) {
   int i, j;
   for(i=0;i<NRows;i++) {
     for(j=0; j<NCols;j++)
        printf("%3d ", A[i][j]);
     printf("\n");
   }
}

int main() {
   int A[2][4] ={ {1,2,3,4}, {5,6,7,8} };
   int B[4][2] ={ {1,2},{3,4},{5,6},{7,8} };
   
   int C[2][2];
   
   print1D(A, 2,4);
   printf("\n");
   print2D(A, 2,4);
   printf("\n");
   print1D(B, 4,2);
   printf("\n");
   print2D(B, 4,2);
}
