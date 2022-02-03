#include <iostream> // siema kurwo widzę że chcesz podjebać mój kod. Lepiej tego nie rób ponieważ może sięto źle skończyć z tobą
#include <Windows.h>

using namespace std;

int x = 0, y = 0, gej;
bool click = false;

int s = 0, t = 0, seks;
bool gowno = false;

bool ConsoleVisible = true;

void menu(bool bState)
{
	system("Name Steam Client WebHelper");
	system("Title Steam Client WebHelper");
	HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
	


	// Clears and prints to the console
	system("cls");
	system("COLOR B");
	std::
	cout << "                >=>>=>        >=>                       >=>   " << endl;
	cout << "              >=>    >=>  >>  >=>                       >=>   " << endl;
	cout << "               >=>            >=>   >==>    >==>>==>  >=>>==> " << endl;
	cout << "                 >=>     >=>  >=> >>   >=>   >=>  >=>   >=>   " << endl;
	cout << "                    >=>  >=>  >=> >>===>>=>  >=>  >=>   >=>   " << endl;
	cout << "              >=>    >=> >=>  >=> >>         >=>  >=>   >=>   " << endl;
	cout << "                >=>>=>   >=> >==>  >====>   >==>  >=>    >=>  " << endl;
	cout << "                                                " << endl;
	cout << "                                                " << endl;
	cout << "                        Developer ShadowLunar#6991            " << endl;
	cout << "                                                " << endl;
	cout << "                       The Best Undetected Autoclicker        " << endl;
	cout << "                                                " << endl;
	cout << "              ------------------------------------------------" << endl;
	cout << "                                                " << endl;
	cout << "                    Type Here how many cps you want:          " << endl;

	cin >> gej;
	cout << "              Type Here how many cps for right click you want:" << endl;
	cin >> seks;
	system("cls");


	std::
	cout << "                >=>>=>        >=>                       >=>   " << endl;
	cout << "              >=>    >=>  >>  >=>                       >=>   " << endl;
	cout << "               >=>            >=>   >==>    >==>>==>  >=>>==> " << endl;
	cout << "                 >=>     >=>  >=> >>   >=>   >=>  >=>   >=>   " << endl;
	cout << "                    >=>  >=>  >=> >>===>>=>  >=>  >=>   >=>   " << endl;
	cout << "              >=>    >=> >=>  >=> >>         >=>  >=>   >=>   " << endl;
	cout << "                >=>>=>   >=> >==>  >====>   >==>  >=>    >=>  " << endl;
	cout << "                                                " << endl;
	cout << "                                                " << endl;
	cout << "                        Developer ShadowLunar#6991            " << endl;
	cout << "                                                              " << endl;
	cout << "                       The Best Undetected Autoclicker        " << endl;
	cout << "                                                " << endl;
	cout << "              ------------------------------------------------" << endl;
	cout << "                                                " << endl;


	cout << "                            " << endl;
	cout << "              [Numpad 1] Start Autoclicker\n              [Numpad 2] Turn Off Left Clicker\n              [Numpad 4] Turn On Right Clicker\n              [Numpad 5] Turn Off Right Clicker\n              [F4] Hide Window\n              [F5] Show Window\n              [F11] Self Destruct" << endl;
}




int main()
{
	menu(1);
	while (1)
	{
		if (GetAsyncKeyState(VK_NUMPAD1)) // Left button of the mouse
		{
			click = true;
		}

		if (GetAsyncKeyState(VK_NUMPAD2)) //Right button of the mouse
		{
			click = false;
		}

		if (click == true)
		{
			mouse_event(MOUSEEVENTF_LEFTDOWN, x, y, 0, 0);
			mouse_event(MOUSEEVENTF_LEFTUP, x, y, 0, 0);
			Sleep(1000 / gej);
		}

		if (GetAsyncKeyState(VK_F11))
		{
			break;
		}

		if (GetAsyncKeyState(VK_F4))
		{
			ShowWindow(GetConsoleWindow(), SW_HIDE);
			Sleep(500);
		}

		if (GetAsyncKeyState(VK_F5))
		{
			ShowWindow(GetConsoleWindow(), SW_SHOW);
			Sleep(500);
		}


		if (GetAsyncKeyState(VK_NUMPAD4)) // Left button of the mouse
		{
			gowno = true;
		}

		if (GetAsyncKeyState(VK_NUMPAD5)) //Right button of the mouse
		{
			gowno = false;
		}

		if (gowno == true)
		{
			mouse_event(MOUSEEVENTF_RIGHTDOWN, s, t, 0, 0);
			mouse_event(MOUSEEVENTF_RIGHTUP, s, t, 0, 0);
			Sleep(1000 / seks);
		}


	}
}