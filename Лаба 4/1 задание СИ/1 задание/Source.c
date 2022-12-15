#include <stdlib.h>
#include <stdio.h>

struct student 
{
	char sex[3];
	char name[50];
	int mark;
};

int main(void)
{
	struct student misha;
	strcpy(misha.sex, "male");
	strcpy(misha.name, "Misha");
	misha.mark = 3;

	struct student vania;
	strcpy(vania.sex, "male");
	strcpy(vania.name, "Vania");
	vania.mark = 5;

	struct student lida;
	strcpy(lida.sex, "female");
	strcpy(lida.name, "Lida");
	lida.mark = 4;

	struct student masha;
	strcpy(masha.sex, "female");
	strcpy(masha.name, "masha");
	masha.mark = 3;

	if (vania.mark >= 4)
	{
		printf("Good %s, his mark %d", vania.name,vania.mark);
	}
	if (misha.mark >= 4)
	{
		printf("Good %s, his mark %d", misha.name, misha.mark);
	}
}

