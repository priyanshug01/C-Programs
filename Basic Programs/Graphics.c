#include<graphics.h>
int  main()
{
	initwindow(400, 300, "Pg");
	circle(100, 50, 40);
	while(!kbhit())
		delay(200);
	return 0;
}
