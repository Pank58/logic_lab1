#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct  {
	char Name[10];
	char Famil[15];
	int age, Nomzach;
}student;

void searchNF(student list[], int c, const char* Name, const char* Famil) {
	int s = 0;
	for (int i = 0; i < c; i++)
	{
		if (strcmp(list[i].Name, Name) == 0 && (strcmp(list[i].Famil, Famil) == 0)) {
			printf("Result:%s %s age:%d, num: %d", list[i].Name, list[i].Famil, list[i].age, list[i].Nomzach);
			break;
			s = 1;
		}
	
	}
	if (s != 1) {
		printf("Not found");
	}
}

void searchZ(student list[], int c, int Nomzach) {
	int s = 0;
	for (int i = 0; i < c; i++)
	{
		if (Nomzach==list[i].Nomzach) {
			printf("Result:%s %s age:%d, num: %d", list[i].Name, list[i].Famil, list[i].age, list[i].Nomzach);
			s = 1;
			break;
			
		}
	}
	if (s == 0) {
		printf("Not found");
	}
}

int main()
{
	char SName[10], SFamil[15];
	int count = 0, sNomzach=0, t;
	student st_list[10];
	printf("Count stidents:");
	scanf("%d", &count);
	for (int i = 0; i < count; i++) {
		printf("name student Num%d:", i + 1);
		scanf("%s", st_list[i].Name);
		printf("surname student Num%d:", i + 1);
		scanf("%s", st_list[i].Famil);
		printf("age student Num%d:", i + 1);
		scanf("%d", &st_list[i].age);
		printf("number record book student Num%d:", i + 1);
		scanf("%d", &st_list[i].Nomzach);
	}

	printf("1-search by name or 2-search by record book: ");
	scanf("%d", &t);
	if (t == 1) {
		printf("input needed Name:");
		scanf("%s", SName);
		printf("input needed Surname:");
		scanf("%s", SFamil);
		searchNF(st_list, count, SName, SFamil);
	}
	else if (t == 2) {
		printf("input needed number record book:");
		scanf("%d", &sNomzach);
		searchZ(st_list, count, sNomzach);
	}
	else
	{
		printf("Error");
	}
	return 0;
}

