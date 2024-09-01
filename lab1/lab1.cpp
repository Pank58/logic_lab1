#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct student {
	char Name[10];
	char Famil[15];
	char age[10], Nomzach[15];
	struct student* next;
}Node;

int i = 1;
char specchar = '/';

Node* getLast(Node* head) {
	if (head == NULL) {
		return NULL;
	}
	while (head->next) {
		head = head->next;
	}
	return head;
}


Node* input_head() {
	Node* list = (Node*)malloc(sizeof(Node));
	printf("name student Num%d:", i);
	scanf("%s", list->Name);
	printf("surname student Num%d:", i);
	scanf("%s", list->Famil);
	printf("age student Num%d:", i);
	scanf("%s", list->age);
	printf("number record book student Num%d:", i);
	scanf("%s", list->Nomzach);
	list->next = NULL;
	return(list);
}

int input(Node* head) {
	int f = 0;
	Node* last = getLast(head);
	Node* list = (Node*)malloc(sizeof(Node));
	printf("name student Num%d:", i);
	scanf("%s", list->Name);
	printf("surname student Num%d:", i);
	scanf("%s", list->Famil);
	printf("age student Num%d:", i);
	scanf("%s", list->age);
	printf("number record book student Num%d:", i);
	scanf("%s", list->Nomzach);
	list->next = NULL;
	last->next = list;
	printf("Do you want to continue the list(+ - yes;/ - no)\n");
	scanf(" %c", &specchar);
	getchar();
	if (specchar == '+') {
		f = 1;
	}
	return(f);
}



void searchNF(Node* head, const char* Name, const char* Famil) {
	int s = 0;
	while (head != NULL) {
		if (strcmp(head->Name, Name) == 0 && (strcmp(head->Famil, Famil) == 0)) {
			printf("Result:%s %s age:%s, num: %s", head->Name, head->Famil, head->age, head->Nomzach);
			s = 1;
			break;
		}
		else
		{
			head = head->next;
		}

	
	}
	if (s != 1) {
		printf("Not found");
	}
}

void searchZ(Node* head, const char* Nomzach) {
	int s = 0;
	while (head != NULL) {
		if ((strcmp(head->Nomzach,Nomzach)==0)) {
			printf("Result:%s %s age:%s, num: %s", head->Name, head->Famil, head->age, head->Nomzach);
			s = 1;
			break;
		}
		else
		{
			head = head->next;
		}


	}
	if (s != 1) {
		printf("Not found");
	}
}

int main()
{
	char SName[10], SFamil[15], sNomzach[15];
	int   t=0;
	int f = 0;
	Node* head = input_head();
	printf("Do you want to continue the list(+ - yes;/ - no)\n");
	scanf(" %c", &specchar);
	getchar();
	if (specchar == '+') {
		f = 1;
	}
	while (f == 1)
	{
		i++;
		f = input(head);
	}


	printf("1-search by name or 2-search by record book: ");
	scanf("%d", &t);
	if (t == 1) {
		printf("input needed Name:");
		scanf("%s", SName);
		printf("input needed Surname:");
		scanf("%s", SFamil);
		searchNF(head, SName, SFamil);
	}
	else if (t == 2) {
		printf("input needed number record book:");
		scanf("%s", sNomzach);
		searchZ(head, sNomzach);
	}
	else
	{
		printf("Error");
	}
	return 0;
}

