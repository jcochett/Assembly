/*
MUD
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

	// -----------------------------------------------------------------------------
	// Build the story
	// -----------------------------------------------------------------------------
	errorCode = buildStory();

	if (errorCode != 0)
	{
		perror("Build story return %d\n", errorCode);
		return -1;
	}

	// -----------------------------------------------------------------------------
	// Introduction
	// -----------------------------------------------------------------------------
	printf("This is the introduction\n");

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

			// Show menu
			if (scenes[i].menu)
			{
				printf("%s", scenes[i].menu);
			}

			// Get answer

			// Print answer result

			// Check if correct answer
			

			// Allow user
			Sleep(10000);
		}

		system("cls");

	}

	return 0;
}