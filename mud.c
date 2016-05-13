#include "mud.h"
#include <string.h>


int buildStory(void)
{
	// -----------------------------------------------------------------------------
	// SCENE 0
	// Layout for all scenes
	// -----------------------------------------------------------------------------
	// Show Once is option: scenes[0].showOnce = 0;
	strcpy(scenes[0].showOnce, "Once apon a time this will only be seen once"); // char showOnce[1024]

	// Scenerio
	strcpy(scenes[0].scenerio, "This will be the scenerio part will be repeated"); // char scenerio[4096]

	// Menu
	strcpy(scenes[0].menu, "1) Do somthing         2) Something else   \n3) Something third  4)Format this to look pretty\n"); // char menu[1024])
	
	// Answer 1
	strcpy(scenes[0].answers[0], "This happened when you choosed answer 1");
	
	// Answer 2
	strcpy(scenes[0].answers[0], "This happened when you choosed answer 2");

	// Answer 3
	strcpy(scenes[0].answers[0], "This happened when you choosed answer 3");

	// Answer 4
	strcpy(scenes[0].answers[0], "This happened when you choosed answer 4");

	// Correct Answer
	scenes[0].correctAnswer = 3; 
	
	// Complete is equal to 0
	scenes[0].complete = 0;


	return 0;
}
