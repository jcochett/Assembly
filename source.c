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



	// Introduction
	printf("This is the introduction\n");

	// Story Loop
	while (scenes[SCENES - 1].complete != 0)
	{

		// Show once
		if (scenes[i].showOnce)
		{
			printf("%s\n", scenes[i].showOnce);
		}


		// Scene Loop - Asks a question
		while (scenes[i].complete != 0)
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
			
			Sleep(10000);
		}

		System("cls");

	}

	return 0;
}