#include <Windows.h>
#include <iostream>

#include "CHWND.h"

/*
*		This is my program for sending strings and keyboard strokes into specific windows, nothing fancy.
* 
*				Please, dont use it on Discord to spam servers, you might get banned!
* 
*		This program was created, because I was bored and wanted to automatize Idle Miner bot on Discord.
* 
*											  MartiNJ409
* 
*/

int main()
{
	HWND hwnd = FindWindowA(NULL, "#spam-channel - Discord"); //Get the target window

	CHWND* _hwnd = new CHWND(hwnd); //My custom class with all the functions, etc, nothing fancy, I dont even need a class, but why not.

	if (!hwnd)
	{
		printf("Window was not found!\nExiting...");
		Sleep(2000);
		exit(-1);
	}

	while (hwnd)
	{
		if (GetAsyncKeyState(VK_LEFT)) //If left arrow key is held, stop the program.
			return 0;

		SetForegroundWindow(_hwnd->GetHWND()); //Switch to the active window

		Sleep(5000); //Sleep for 5 seconds.
		_hwnd->SendString(";s"); //Sends ";s" and waits x generated amount of milliseconds (4000 - 12000)
		_hwnd->SendString(";up p a");
		_hwnd->SendString(";s");
		_hwnd->SendString(";up b a");
		/*HERE UNDER, WE ADD A RANDOM BIGGER DELAY*/
		_hwnd->RandomBiggerDelay(); //This function will make the program sleep for 2 - 10 minutes.
		_hwnd->SendString(";level");
	}
	std::cin.get();

	delete _hwnd;
}