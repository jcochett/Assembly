#include "mud.h"
#include <string.h>


/*  //SCENE TEMPLATE

	// -----------------------------------------------------------------------------
	// SCENE INDEX X
	// -----------------------------------------------------------------------------
	strcpy(scenes[X].showOnce, "XXXXXXXXXXXXXXXXXXXXX \n"); // char showOnce[1024]

	// Scenerio
	strcpy(scenes[X].scenerio,
		"XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX \n"
		"XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX \n"
		"XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX \n"
	); // char scenerio[4096]

	// Menu
	strcpy(scenes[X].menu,
		"1) XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX\n"				// Index 0
		"2) XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX\n"				// Index 1
		"3) XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX\n"				// Index 2 Correct
		"   XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.\n"				// This is an extra line, if you need one
		"4) XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX\n"				// Index 3
	); // char menu[1024])

	// Answer 1
	strcpy(scenes[X].answers[0], "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX\n");

	// Answer 2
	strcpy(scenes[X].answers[1], "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX\n");

	// Answer 3
	strcpy(scenes[X].answers[2], "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX\n");

	// Answer 4
	strcpy(scenes[X].answers[3], "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX\n");

	// Correct Answer  remember this is an INDEX 0 through 3
	scenes[X].correctAnswer = X;

	// Complete is equal to 0
	scenes[X].complete = 0;

*/

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
	// SCENE INDEX 0
	// -----------------------------------------------------------------------------
	// Show Once is option: scenes[0].showOnce = 0;
	strcpy(scenes[0].showOnce, "Scene 1: Thirsty for Adventure\n"); // char showOnce[1024]

											// Scenerio
	strcpy(scenes[0].scenerio,
		"Needing information and refreshment, you seek out the local tavern.Once inside, \n"
		"you order a pint of mead and talk to the friendly barkeep Matteus, who tells you \n"
		"which direction to go to find Harkeus' lair.  You must decide how to care for your \n"
		"team that night:\n"); // char scenerio[4096]

							   // Menu
	strcpy(scenes[0].menu,
		"1) Give them a stern OPSEC briefing and allow them to fend for themselves.\n"
		"2) Pay the team in advance and secure lodging for them in an upper room.\n"
		"3) Forget about your team and gorge yourself on braised meat and root vegetables.\n"
		"4) Scope out the fair maidens in the bar and see if you can get lucky.\n"
	); // char menu[1024])

	   // Answer 1																														   // Answer 1
	strcpy(scenes[0].answers[0],
		"Being a bad leader your team tackles you and cuts every limb off your body. You drink \n"
		"a magic potion called Potion of Limb Initialization, they grow back.  Try again.\n");

	// Answer 2 Correct answer
	strcpy(scenes[0].answers[1],
		"The members of your team feel gratitude for you having paid them in advance and for a  \n"
		"good night sleep.  They said they will try hard and be with you til the end in this adventure.\n"
	);

	// Answer 3
	strcpy(scenes[0].answers[2],
		"You wake up the next morning constipated and find that your team is still waiting for you \n"
		"there. They are not going anywhere, choose again.\n"
	);

	// Answer 4
	strcpy(scenes[0].answers[3],
		"You find a beautiful bar girl, you two go to a room. While in the act she stabs you and  \n"
		"steals your gold.  You wander back downstairs and drink a potion of healing.\n"
	);

	// Correct Answer  remember this is an INDEX 0 through 3
	scenes[0].correctAnswer = 1;

	// Complete is equal to 0
	scenes[0].complete = 0;
	// -----------------------------------------------------------------------------



	// -----------------------------------------------------------------------------
	// SCENE INDEX 1
	// -----------------------------------------------------------------------------
	// Show Once is option: scenes[1].showOnce = 0;
	//memset(scenes[1].showOnce, 0, 1024); // char showOnce[1024]
	strcpy(scenes[1].showOnce, "Scene 2: Moving on with the story\n");

											// Scenerio
	strcpy(scenes[1].scenerio, 
		"The next day while traveling toward Harkeus' lair, you're stopped on the road by the \n"
		"grisly troll Vogeler who demands payment so you can pass.  As he taunts you, Vogeler brags about \n"
		"having a map of the underground dragon chamber, which he had taken from another hapless traveler.\n"
	); // char scenerio[4096]

	// Menu
	strcpy(scenes[1].menu, 
		"1) Use your Mace of Recursion to bludgeon Vogeler repeatedly until he gives up the map and allows you to pass.\n"
		"2) Give the grisly troll Vogeler all your gold in exchange for the map.\n"
		"3) Hurl curses at Vogeler in the hopes that he will get out of your way to Harkeus' lair.\n"
		"4) Ask Vogeler to join your mission.\n"
	); // char menu[1024]) 

	// Answer 1 Correct answer																														   // Answer 1
	strcpy(scenes[1].answers[0], 
		"Vogeler gets extremely confused and awed by your power and says he will not contest you. Good work.\n");

	// Answer 2
	strcpy(scenes[1].answers[1], 
		"Vogeler states that he will have to go back to the dungeon of 2058 to get it.  Instead of going he justs stands \n"
		"there looking at you.  Not a good choice.\n");

	// Answer 3
	strcpy(scenes[1].answers[2], 
		"Curses only makes him stronger.  In fact he asks for more\n");

	// Answer 4
	strcpy(scenes[1].answers[3], 
		"Vogeler mocks you and calls you an idiot.\n");

	// Correct Answer  remember this is an INDEX 0 through 3
	scenes[1].correctAnswer = 0;

	// Complete is equal to 0
	scenes[1].complete = 0;


	// -----------------------------------------------------------------------------
	// SCENE INDEX 2
	// Layout for all scenes
	// -----------------------------------------------------------------------------
	// Show Once is option: scenes[0].showOnce = 0;
	strcpy(scenes[2].showOnce, 
		"Scene 3 - Why are there pirates?\n\n"
		"You planned to stop that night at the seaside town of Kellack, knowing it offers safe refuge for \n"
		"travelers.  However, Kellack was recently taken over by a band of Attican pirates, who are rich \n"
		"with loot from another town further down the coast.\n"
	); // char showOnce[1024]
														   // Scenerio
	strcpy(scenes[2].scenerio, 
		"Tonight the pirates are all drunk on grog and do not seem hostile,\n"
		"but you know that Atticans are dangerous.  You decide to :\n"
	); // char scenerio[4096]
																	   // Menu
	strcpy(scenes[2].menu, 
		"1) Befriend the pirates and listen to their wild sea stories, hoping to learn some useful information.\n"
		"2) Exercise caution and set up camp for the night just on the other side of Kellack.\n"
		"3) Travel on through the night because you want to get as far as possible from Kellack.\n"
		"4) Attempt to gather the loot to return it.\n"
	); // char menu[1024])
														  // Answer 1
	strcpy(scenes[2].answers[0], "They are good stories, you think you may have gathered some value intel\n");
	// Answer 2
	strcpy(scenes[2].answers[1], "What are you some kind of pansy.\n");
	// Answer 3
	strcpy(scenes[2].answers[2], "You all are bad-asses, pirates don't scare you.  Unless they are clown-pirates, which they are not\n");
	// Answer 4
	strcpy(scenes[2].answers[3], "Bad decision. Pirates have beat you down like an assembly class.  They take their loot back.  Wimps!\n");
	// Correct Answer
	scenes[2].correctAnswer = 0;
	// Complete is equal to 0
	scenes[2].complete = 0;


	// -----------------------------------------------------------------------------
	// SCENE INDEX 3
	// Layout for all scenes
	// -----------------------------------------------------------------------------
	strcpy(scenes[3].showOnce, "");
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