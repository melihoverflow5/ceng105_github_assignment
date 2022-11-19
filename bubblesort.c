#include<stdio.h>
#include<stdlib.h>
void bubbleSort(int A[], int N){
	int i, j, temp;
	
	for(i=0; i<N; i++){
		for(j=0; j<N-i-1; j++){
			if(A[j]>A[j+1]){
				temp=A[j];
				A[j]=A[j+1];
				A[j+1]=temp;
			}
		}
	}
	
}

void printArray(int A[], int N){
	int i;
	for(i=0; i<N; i++)
		printf("%d ", A[i]);
	
}
int main(){
	int num, i, *Arr;
	printf("Kac tane eleman greceksiniz: ");
	scanf("%d", &num);
	Arr=(int *)malloc(num*sizeof(int));
	printf("\nDegerleri girebilirsiniz:\n");
	for(i=0; i<num; i++){
		printf("\n%d. degeri giriniz: ", i+1);
		scanf("%d", &Arr[i]);
	}
	bubbleSort(Arr, num);
	printf("\nGirmis oldugunuz degerlerin kucukden buyuge dogru siralanisi:\n");
	printArray(Arr, num);
	
	
	return 0;
}
