#ifndef __MUD_HEADER_ROW2__
#define __MUD_HEADER_ROW2__

#define SCENES 10

struct story
{
	char showOnce[1024];
	char scenerio[4096];
	char menu[1024];
	char answers[4][1024];
	int correctAnswer;
	int complete;
} scenes[SCENES];


struct storoy scenes[0]
{
	"Once apon a time this will only be seen once",		// char showOnce[1024]
	"This will be the scenerio part will be repeated",	// char scenerio[4096]
	"1) Do somthing         2) Something else   \n3) Something third  4)Format this to look pretty\n", // char menu[1024]
	{""},
	3, // Correct answer
	0  // Complete
}


#endif // !__MUD_HEADER_ROW2__