/* Levi Hazelwood
9/19/2019
This program will generate different stories based on user input*/

#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int main()
{	
	srand(time(NULL));
	
	int EXIT = 0;
	
	while (EXIT != 1 )
	{
	printf("\nWould you like to create a story? (Type 1 to exit/Type 2 to continue) ");
	scanf("%d", &EXIT);
	printf("\n");
	
	if (EXIT == 2)
	{
	
		char name1[20];
		char prof1[30];
		char name2[20];
		char adj1[20];
		char ani1[25];
		char emot1[20];
		char obj1[25];
		char adj2[25];
		printf("When entering responses, respond with one word.\n\n");
		printf("Enter a male name: ");
		scanf("%s", &name1);
		printf("Enter a profession: ");
		scanf("%s", &prof1);
		printf("Enter a name: ");
		scanf("%s", &name2);
		printf("Enter an adjective: ");
		scanf("%s", &adj1);
		printf("Enter an animal: ");
		scanf("%s", &ani1);
		printf("Enter an emotion: ");
		scanf("%s", &emot1);
		printf("Enter an object: ");
		scanf("%s", &obj1);
		printf("Enter an adjective ending in -est (Ex: Coolest): ");
		scanf("%s", &adj2);
		
		printf("\n");
		
		char *storyline[]={"Why is","Where is","Once upon a time, a dragon named","Today", "When I was walking down the street I saw" };
		char *storyline2[]={"dressed like a","He always seems to be up to something.\nI remember when he was a","was flying through the air when he spotted a","will be working as a","sad to hear he just lost his"};
		char *storyline3[]={"He must be really","fighting against the evil","saving a","alongside his pet", "I mourn for his loss of"};
		char *storyline4[]={"It's alright though because he is the","\nToo bad","from a","is the",""};
		char *storyline5[]={"guy around.\nI'd be surprised if he wasn't dressed like a","was no match for","What amazing world, the dragon says.","in the whole wide world.",""};
		
		
		int random = (rand()%5);
		if (random == 0)
		{
			printf("%s %s %s %s?\n%s %s.\n%s %s %s %s.  \n", storyline[0], name1, storyline2[0],
			prof1, storyline3[0], emot1, storyline4[0], adj2, storyline5[0], prof1);
		}
		if (random == 1)
		{
			printf("%s %s?\n%s %s %s %s. %s %s %s %s's %s %s.\n", storyline[1], name1, storyline2[1], prof1, 
			storyline3[1], name2, storyline4[1], name2, storyline5[1], name1, adj1, obj1);
		}
		if (random == 2)
		{
			printf("%s %s %s %s\n%s %s %s %s %s.\n%s \n", storyline[2], name1, storyline2[2],
			prof1, storyline3[2], emot1, ani1, storyline4[2], obj1, storyline5[2]);
		}
		if (random == 3)
		{
			printf("%s, %s %s %s %s %s %s, %s.\n%s %s %s %s %s\n", storyline[3], adj1, name1, storyline2[3], 
			prof1, storyline3[3], ani1, name2, name2, storyline4[3],adj2 ,ani1, storyline5[3]);
		}
		if (random == 4)
		{
			printf("%s %s %s,\n%s %s %s %s. \n", storyline[4], adj1, name1, storyline2[4], ani1, storyline3[4], name2);
		}
		
		
	}
	
	if (EXIT == 1)
	{
		char *userleave[]={"Goodbye", "Have a nice day", "See ya", "Until next time", "Bye bye"};
		
		int random2 = (rand()%5);
		printf("%s", userleave[random2]);
	}
	}
	
	return 0;
}
