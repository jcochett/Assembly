#include "mud.h"
#include <string.h>

/* *********************************************************************************
 * Name: buildStory
 *
 * Purpose: Builds the story into the global array of structs called scences
 *
 * Return: Return 0 on success and -1 on error
 *
 ********************************************************************************* */
int buildStory(void)
{
	// -----------------------------------------------------------------------------
	// SCENE 3
	// Layout for all scenes
	// -----------------------------------------------------------------------------
	memset(scenes[3].showOnce, 0, 1024);
	//strcpy(scenes[3].showOnce, "Once apon a time this will only be seen once"); // char showOnce[1024]

	// Scenerio
	strcpy(scenes[3].scenerio, 
		"In the morning, your team is a little queasy so you send two teammates to hunt for \n"
		"breakfast in a nearby forest.  When your comrades do not return in due time, you go \n"
		"searching for them and find that they have fallen into a pit designed to keep intelopers \n"
		"away from the realm of the Woodland Fairies.  The fairies are about to use their woodland \n"
		"magic to turn your teammates into salamanders.\n"); // char scenerio[4096]

	// Menu
	strcpy(scenes[3].menu, 
		"1) Abandon your friends to a fate of eating grubs and trying to keep their skin moist.\n"		// Index 0
		"2) Kill the fairies and use a linked list to pull your friends out of the pit.\n"				// Index 1
		"3) Have Prince Steve, who has been useless up to this point, communicates with the fairies\n"	// Index 2 Correct
		"   through interpretive dance, and convinces them to release his friends.\n"
		"4) Cast the spell of Update Visual Studio and wait for 10 hours for it to complete\n"			// Index 3
		); // char menu[1024])
	
	// Answer 1
	strcpy(scenes[3].answers[0], "You are a hark-less soul, don't do this\n");

	// Answer 2
	strcpy(scenes[3].answers[1], "Killing fairies is like Lee killing that horsefly in the bathroom, it never happened\n");

	// Answer 3
	strcpy(scenes[3].answers[2], "Excellent Steve effective rump-shaking solves the problem.  You are good to go\n");

	// Answer 4
	strcpy(scenes[3].answers[3], "Spell casting please wait 10 hours.  Try something else in the meantime\n");

	// Correct Answer  remember this is an INDEX 0 through 3
	scenes[3].correctAnswer = 2; 
	
	// Complete is equal to 0
	scenes[3].complete = 0;




	return 0;
}


/* *********************************************************************************
 * Name: getUserInput
 *
 * Purpose: Get input for question 1 - 4
 *
 * Return: Return the index number 0 - 3 for the correct answer
 *
 ********************************************************************************* */
int getUserInput(void)
{
	int userInput = 0;
	int goodInput = 0;	

	printf("Input: ");

	while (!goodInput)
	{
		userInput = getchar();
		while (getchar() != '\n');

		if (userInput >= '1' && userInput <= '4')
		{
			goodInput = 1;
		}
		else
		{
			printf("Answer %d not understood, try again: ", userInput);
		}
	}

	return userInput - 49;

}