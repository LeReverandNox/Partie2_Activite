#include <stdio.h>
#include <stdlib.h>

int main (void)
{
	int reponse = 0;

	printf("Quel est la réponse à la grande question de la vie, de l'univers et tout le reste ? ");
	scanf("%d", &reponse);

	if (reponse == 42)
	{
		printf("Vous etes un être humain valeureux !\nJe suis fier de vous !\n");
	}
	else
	{
		printf("Hors de ma vue, ignorant !\n");
	}

	return 0;
}

