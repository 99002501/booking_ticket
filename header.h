
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char r;
struct book{
	char code[20];
	char name[20];
	char date[20];
	int cost;
}b;
int seat=80;
void insert_details();
void view_All();
void find();
void book_ticket();
void old_records();
