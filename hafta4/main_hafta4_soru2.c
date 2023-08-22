#include <stdio.h>
#include <stdlib.h>
void bubblesort(int dizi[],int n){
	int gecici;
	int i,j;
	for(i=0;i<n-i;i++){
		for(j=0;j<n-i-1;j++){
			if(dizi[j]>dizi[j+1]){
				gecici=dizi[j];
				dizi[j]=dizi[j+1];
				dizi[j+1]=gecici;
			}
		}
	}
}


int main() {
	int dizi[10];
	int n,i;
	printf("kac eleman gireceksiniz:");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("%d.eleman:",i+1);
		scanf("%d",&dizi[i]);
	}
	printf("siralanmadan onceki hali:");
	for(i=0;i<n;i++){
		printf(" %d ",dizi[i]);
	}
	printf("bubble sort ile siralanmis hali:\n");
	bubblesort(dizi,n);
	
	for(i=0;i<n;i++){
		printf(" %d ",dizi[i]);
	}
	return 0;
}
