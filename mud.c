#include "mud.h"

int buildStory(void)
{
	struct story scenes[0]
	{
		"Once apon a time this will only be seen once",		// char showOnce[1024]
		"This will be the scenerio part will be repeated",	// char scenerio[4096]
		"1) Do somthing         2) Something else   \n3) Something third  4)Format this to look pretty\n", // char menu[1024]
		{ "" },
		3, // Correct answer
		0  // Complete
	};

}
