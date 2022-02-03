#include <iostream>
#include <Windows.h>

using namespace std;

int x = 0, y = 0, cps;
bool click = false;

bool ConsoleVisible = true;

void menu(bool bState)
{

	HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);


	// Clears and prints to the console
	system("cls");
	std::
		cout << "  >=>>=>        >=>                       >=>   " << endl;
	cout << ">=>    >=>  >>  >=>                       >=>   " << endl;
	cout << " >=>            >=>   >==>    >==>>==>  >=>>==> " << endl;
	cout << "   >=>     >=>  >=> >>   >=>   >=>  >=>   >=>   " << endl;
	cout << "      >=>  >=>  >=> >>===>>=>  >=>  >=>   >=>   " << endl;
	cout << ">=>    >=> >=>  >=> >>         >=>  >=>   >=>   " << endl;
	cout << "  >=>>=>   >=> >==>  >====>   >==>  >=>    >=>  " << endl;
	cout << "                                                " << endl;
	cout << "                                                " << endl;
	cout << "          Developer ShadowLunar#6991            " << endl;
	cout << "                                                " << endl;
	cout << "         The Best Undetected Autoclicker        " << endl;
	cout << "                                                " << endl;
	cout << "------------------------------------------------" << endl;
	cout << "                                                " << endl;

	system("cls");

	std::
		cout << "  >=>>=>        >=>                       >=>   " << endl;
	cout << ">=>    >=>  >>  >=>                       >=>   " << endl;
	cout << " >=>            >=>   >==>    >==>>==>  >=>>==> " << endl;
	cout << "   >=>     >=>  >=> >>   >=>   >=>  >=>   >=>   " << endl;
	cout << "      >=>  >=>  >=> >>===>>=>  >=>  >=>   >=>   " << endl;
	cout << ">=>    >=> >=>  >=> >>         >=>  >=>   >=>   " << endl;
	cout << "  >=>>=>   >=> >==>  >====>   >==>  >=>    >=>  " << endl;
	cout << "                                                " << endl;
	cout << "                                                " << endl;
	cout << "          Developer ShadowLunar#6991            " << endl;
	cout << "                                                " << endl;
	cout << "         The Best Undetected Autoclicker        " << endl;
	cout << "                                                " << endl;
	cout << "------------------------------------------------" << endl;
	cout << "                                                " << endl;
	cout << "      Type Here how many cps you want:          " << endl;

	cin >> cps;

	std::
		cout << "  >=>>=>        >=>                       >=>   " << endl;
	cout << ">=>    >=>  >>  >=>                       >=>   " << endl;
	cout << " >=>            >=>   >==>    >==>>==>  >=>>==> " << endl;
	cout << "   >=>     >=>  >=> >>   >=>   >=>  >=>   >=>   " << endl;
	cout << "      >=>  >=>  >=> >>===>>=>  >=>  >=>   >=>   " << endl;
	cout << ">=>    >=> >=>  >=> >>         >=>  >=>   >=>   " << endl;
	cout << "  >=>>=>   >=> >==>  >====>   >==>  >=>    >=>  " << endl;
	cout << "                                                " << endl;
	cout << "                                                " << endl;
	cout << "          Developer ShadowLunar#6991            " << endl;
	cout << "                                                " << endl;
	cout << "         The Best Undetected Autoclicker        " << endl;
	cout << "                                                " << endl;
	cout << "------------------------------------------------" << endl;
	cout << "                                                " << endl;





	cout << "                            " << endl;
	cout << "[Numpad 1] Start Autoclicker\n[Numpad 2] Turn Off \n[Numpad 3] Hide\n[Numpad 5] SelfDestruct" << endl;
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
			Sleep(1000 / cps);
		}

		if (GetAsyncKeyState(VK_NUMPAD5))
		{
			break;
		}
	}
}
