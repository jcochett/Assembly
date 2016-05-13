/*
 *
 * MUD
 *
 */

#define _CRT_SECURE_NO_WARNING
#include <stdio.h>
#include <stdlib.h>
#include "mud.h"
#include <Windows.h>

int main(void)
{
	int i = 0;
	int errorCode = 0;
	int userInput;

	// -----------------------------------------------------------------------------
	// Build the story
	// -----------------------------------------------------------------------------
	errorCode = buildStory();

	if (errorCode != 0)
	{
		perror("ERROR: Build story return %d\n", errorCode);
		return -1;
	}
	else
	{
		printf("%d Scenes loaded\n", SCENES);
		Sleep(2000);
		system("cls");
	}

	// -----------------------------------------------------------------------------
	// Introduction
	// -----------------------------------------------------------------------------
	printf(
		"The vile dragon Harkeus has abducted Princess Stephanie, and threatens to \n"
		"eat her unless the townspeople can muster an enormous ransom of gold by 1 \n"
		"June.  Princess Stephanie's little brother, Prince Steve, has been weakened \n"
		"by inactivity and is powerless to defeat the dragon on his own.  He has \n"
		"called on you, Jason, and your ragtag team of soldiers of fortune, \n"
		"for assistance.\n\n"
	);


	// -----------------------------------------------------------------------------
	// Story Loop
	// -----------------------------------------------------------------------------

	// Check if the last scene is complete
	while (scenes[SCENES - 1].complete != 1)	
	{

		// Show once (optional)
		if (scenes[i].showOnce)
		{
			printf("%s\n", scenes[i].showOnce);
		}

		// -------------------------------------------------------------------------
		// Scene Loop - Asks a question
		// -------------------------------------------------------------------------

		// Loop until scene is complete
		while (scenes[i].complete != 1)
		{
			// -------------------------------------------------------------------------
			// Show scenerio
			if (scenes[i].scenerio)
			{
				printf("%s\n", scenes[i].scenerio);
			}
			else
			{
				perror("ERROR: Scenerio not found");
				return -1;
			}

			// -------------------------------------------------------------------------
			// Show menu
			if (scenes[i].menu)
			{
				printf("%s\n", scenes[i].menu);
			}

			// -------------------------------------------------------------------------
			// Get answer
			userInput = getUserInput();

			// -------------------------------------------------------------------------
			// Print answer result
			if (scenes[i].answers[userInput])
			{
				printf("%s\n", scenes[i].answers[userInput]);
			}
			else
			{
				perror("ERROR: Answer not found\n");
				return -1;
			}

			// -------------------------------------------------------------------------
			// Check if correct answer
			if (scenes[i].correctAnswer == userInput)
			{
				printf("Correct Answer\n");
				scenes[i].complete = 1;
			}

			// -------------------------------------------------------------------------
			// Allow user to read answer
			Sleep(5000);		
			system("cls");
		}

		// Next scenerio
		i++;
	}


	// Story Conclusion
	printf("\n\nCongratulations you have won the MUD!  After BBQing the dragon Harkeus the great centaur Lee \n"
		"stops by and pigs out on the roasted dragon meat. He then watches as you 'consumate' your marriage \n"
		"to Princess Stephanie.  It's quite awkard but that is how the story ends.\n"
	);


	Sleep(20000);

	return 0;
}