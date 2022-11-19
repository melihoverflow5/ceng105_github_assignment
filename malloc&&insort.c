#include<stdio.h>
#include<stdlib.h>

void insort(int a[], int num){
	int i, j, temp;
	for(i=1; i<num;i++){
		temp=a[i];
		j=i-1;
		while(j>=0 && a[j]>temp){
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=temp;
	}
}
void printarry(int a[], int num){
	int i;
	for(i=0;i<num; i++)
		printf("%d ", a[i]);
}

int main(){
	
	int *a, i, num;
	
	printf("Bellege kac tane deger girmek istiyorsunuz: ");
	scanf("%d", &num);
	a=(int *)malloc(num*sizeof(int));
	printf("\nDegerleri giriniz:\n");
	for(i=0; i<num; i++){
		printf("%d. degeri giriniz:", i+1);
		scanf(" %d", &a[i]);
	}
	
	insort(a, num);
	printf("\nBu yazilimde insorted sort kullanilmistir.\nGirdiginiz degerlerin kucukten buyuge dogru siralanisi:\n");
	printarry(a, num);
	free(a);
	return 0;
}
