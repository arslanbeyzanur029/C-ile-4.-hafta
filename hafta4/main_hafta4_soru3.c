#include <stdio.h>
#include <stdlib.h>

void insertionsort(int dizi[],int n){
	int i,j,gecici;
	 for (i=1; i<n; i++) {
        gecici=dizi[i];
        j=i-1;

        while (j >= 0 && dizi[j] > gecici) {
            dizi[j+1] = dizi[j];
            j--;
        }

        dizi[j+1] = gecici;
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
	printf("\ninsertion sort ile siralanmis hali:\n");
	insertionsort(dizi,n);
	
	for(i=0;i<n;i++){
		printf(" %d ",dizi[i]);
	}
	return 0;
}
