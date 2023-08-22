#include <stdio.h>
#include <stdlib.h>

struct student{
	char name[10];
	char surname[10];
	int number;
	float midtermGrade;
};


int main() {
	struct student s1[10];
	int i;
	for(i=0;i<3;i++){
		printf("%d.ogrencinin adini giriniz:",i+1);
		scanf("%s",s1[i].name);
		printf("%d.ogrencinin soyadini giriniz:",i+1);
		scanf("%s",s1[i].surname);
		printf("%d.ogrencinin numarasini giriniz:",i+1);
		scanf("%d",&s1[i].number);
		printf("%d.ogrencinin vize notunu giriniz:",i+1);
		scanf("%f",&s1[i].midtermGrade);
	}
	printf("\n 3 ogrencinin bilgileri:\n");
		for(i=0;i<3;i++){
		printf("%d.ogrencinin adi %s:\n",i+1,s1[i].name);
		printf("%d.ogrencinin soyadi: %s\n",i+1,s1[i].surname);
		printf("%d.ogrencinin numarasi: %d\n",i+1,s1[i].number);
		printf("%d.ogrencinin vize notu: %.2f\n",i+1,s1[i].midtermGrade);
		printf("\n\n");
	}
	return 0;
}
