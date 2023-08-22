#include <stdio.h>
#include <stdlib.h>

void selectionsort(int dizi[], int n) {
	int i,j,min,gecici;
    for (i=0;i<n-1;i++) {
         min=i;
         
        for (j=i+1;j<n;j++) {
            if (dizi[j] < dizi[min]) {
                min=j;
            }
        }

        gecici=dizi[i];
        dizi[i]=dizi[min];
        dizi[min]=gecici;
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
	printf("\nselection sort ile siralanmis hali:\n");
	selectionsort(dizi,n);
	
	for(i=0;i<n;i++){
		printf(" %d ",dizi[i]);
	}
	return 0;
}
