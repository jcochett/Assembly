#ifndef __MUD_HEADER_ROW2__
#define __MUD_HEADER_ROW2__
#define _CRT_SECURE_NO_WARNINGS


// SCENES TO PLAY
#define SCENES 1


/* *********************************************************************************
* Name: Story Struct
*
* Purpose: Self contained scenerios to play
*
********************************************************************************* */
struct story
{
	char showOnce[4096];
	char scenerio[4096];
	char menu[4096];
	char answers[4][4096];
	int correctAnswer;
	int complete;
} scenes[SCENES];


/* *********************************************************************************
* Name: buildStory
*
* Purpose: Builds the story into the global array of structs called scences
*
* Return: Return 0 on success and -1 on error
*
********************************************************************************* */
int buildStory(void);

/* *********************************************************************************
* Name: getUserInput
*
* Purpose: Get input for question 1 - 4
*
* Return: Return the index number 0 - 3 for the correct answer
*
********************************************************************************* */
int getUserInput(void);


#endif // !__MUD_HEADER_ROW2__