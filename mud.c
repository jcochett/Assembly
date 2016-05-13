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
	// SCENE INDEX 0
	// -----------------------------------------------------------------------------
	// Show Once is option: scenes[0].showOnce = 0;
	strcpy(scenes[0].showOnce, "LA LA LA"); // char showOnce[1024]

											// Scenerio
	strcpy(scenes[0].scenerio,
		"Needing information and refreshment, you seek out the local tavern.Once inside, "
		"you order a pint of mead and talk to the friendly barkeep Matteus, who tells you "
		"which direction to go to find Harkeus' lair.  You must decide how to care for your "
		"team that night:\n"); // char scenerio[4096]

							   // Menu
	strcpy(scenes[0].menu,
		"1) Give them a stern OPSEC briefing and allow them to fend for themselves.\n"
		"2) Pay the team in advance and secure lodging for them in an upper room.\n"
		"3) Forget about your team and gorge yourself on braised meat and root vegetables.\n"
		"4) Scope out the chicks in the bar and see if you can get lucky.\n"
	); // char menu[1024])

	   // Answer 1																														   // Answer 1
	strcpy(scenes[0].answers[0],
		"Being a bad leader your team tackle you and cut every limb off your body. Better luck next time Jason.\n");

	// Answer 2 Correct answer
	strcpy(scenes[0].answers[1],
		"The members of your team feel gratitude for you having paid them in advance and for a good night sleep \n"
		"They said they will try hard and be with you til the end in this adventure"
	);

	// Answer 3
	strcpy(scenes[0].answers[2],
		"You wake up the next morning and find that your team has deserted you. You have no way of defeating \n"
		"the dragon. You have failed in your mission. Be smarter next time Jason\n"
	);

	// Answer 4
	strcpy(scenes[0].answers[3],
		"You find a beautiful bar girl, you two go to a hotel. While in the act she stabs you and steals your money \n"
		"You have made a big mistake Jason and have paid the ultimate price. Goodbye forever.\n"
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
	memset(scenes[3].showOnce, 0, 1024); // char showOnce[1024]

											// Scenerio
	strcpy(scenes[1].scenerio, 
		"The next day while traveling toward Harkeus' lair, you're stopped on the road by the grisly troll Vogeler \n"
		"who demands payment so you can pass.As he taunts you, Vogeler brags about having a map of the underground dragon \n"
		"chamber, which he had taken from another hapless traveler.\n"); // char scenerio[4096]

	// Menu
	strcpy(scenes[1].menu, 
		"1) Use your Mace of Recursion to bludgeon Vogeler repeatedly until he gives up the map and allows you to pass.\n"
		"2) Pay Vogeler all the money and half the weapons your team has in their possession, then proceed down the road.\n"
		"3) Hurl curses at Vogeler as you turn around and try to find a different path to Harkeus' lair.\n "
		"4) Ask Vogeler to join your mission.\n"); // char menu[1024])

	// Answer 1 Correct answer																														   // Answer 1
	strcpy(scenes[1].answers[0], "Vogeler gets extremely confused and awed by your power and says he will not contest you. Good work.\n");

	// Answer 2
	strcpy(scenes[1].answers[1], "Vogeler mocks you and with the weapons you gave him destroys you and your team. Think better next time Jason.\n");

	// Answer 3
	strcpy(scenes[1].answers[2], "Your team becomes lost in the journey and never reach the dragon's lair. The princess has been eaten. End of story.\n");

	// Answer 4
	strcpy(scenes[1].answers[3], "Vogeler tells you that you are such an idiot. Takes all your money and weapons and disposes of you and your team. Good bye.\n");

	// Correct Answer  remember this is an INDEX 0 through 3
	scenes[1].correctAnswer = 0;

	// Complete is equal to 0
	scenes[1].complete = 0;


	// -----------------------------------------------------------------------------
	// SCENE INDEX 3
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