#include "Menu.h"

int main()
{
	Menu Main;

	Main.addMenu("Test 1");
	Main.addMenu("Test 2");
	Main.addMenu("Test 3");
	Main.addMenu("Test 4");

	Main.displayMenu();

	while (true)
	{
		if (GetAsyncKeyState(VK_DOWN))
		{
			Main.menuDown();
			clrscr();
			Main.displayMenu();

			Sleep(200);
		}
		else if (GetAsyncKeyState(VK_UP))
		{
			Main.menuUp();
			clrscr();
			Main.displayMenu();

			Sleep(200);
		}

	}
}
