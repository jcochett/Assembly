#ifndef __MUD_HEADER_ROW2__
#define __MUD_HEADER_ROW2__

#define SCENES 1
#define _CRT_SECURE_NO_WARNINGS

struct story
{
	char showOnce[1024];
	char scenerio[4096];
	char menu[1024];
	char answers[4][1024];
	int correctAnswer;
	int complete;
} scenes[SCENES];


int buildStory(void);


#endif // !__MUD_HEADER_ROW2__