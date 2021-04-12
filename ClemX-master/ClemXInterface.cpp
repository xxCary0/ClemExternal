#include "Includes.h"
HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

void ClemX::UpdateMenu()
{
	system("CLS");
	SetConsoleTextAttribute(hConsole, 11);
	std::cout << "Welcome to the interface of ClemExternal, current version: 3.0 \n";
	SetConsoleTextAttribute(hConsole, 7);
	std::cout << "\n----------\n";
	std::cout << "\n";
	if (Hacks::AimBotConfig)
	{
		SetConsoleTextAttribute(hConsole, 11);
		std::cout << "Current aimbot options : \n Smoothing (slowness) : " << Hacks::AimSmoothing << "\n Bone to aim : " << Hacks::AimBone << "\n Aimbot FOV : " << Hacks::AimFov;
		std::cout << "\nFor the bones, put 8 to aim for the head and 4 for the middle body the rest beats the race \n The fov will determine the distance to the player to activate (legit recommendation: 4)";
		std::cout << "\nPlease enter the smoothing value (1 = aimlock) + it's high + it will be legit (recommendation legit = 60)\n";
		cin >> Hacks::AimSmoothing;
		std::cout << "You now have a smoothing of : " << Hacks::AimSmoothing << "\n";
		std::cout << "Please enter the bone value \n";
		cin >> Hacks::AimBone;
		std::cout << "You will now aim on the bone : " << Hacks::AimBone << "\n";
		std::cout << "Please enter the desired fov value \n";
		cin >> Hacks::AimFov;
		std::cout << "Your fov is now from : " << Hacks::AimFov << " degrees \n";
		std::cout << "Validation of options and return to reception in progress ... \n";
		Sleep(2500);
		Hacks::AimBotConfig = !Hacks::AimBotConfig;
		ClemX::UpdateMenu();
	}
	else
	{
		if (Hacks::RadarActive)
		{
			SetConsoleTextAttribute(hConsole, 10);
			std::cout << "[F1] Radar : Active\n";
		}
		else
		{
			SetConsoleTextAttribute(hConsole, 12);
			std::cout << "[F1] Radar : Inactive\n";
		}
		if (Hacks::GlowActive)
		{
			SetConsoleTextAttribute(hConsole, 10);
			std::cout << "[F2] Glow Wallhack : Active\n";
		}
		else
		{
			SetConsoleTextAttribute(hConsole, 12);
			std::cout << "[F2] Glow Wallhack : Inactive\n";
		}
		if (Hacks::BhopActive)
		{
			SetConsoleTextAttribute(hConsole, 10);
			std::cout << "[F3] Bhop : Active\n";
		}
		else
		{
			SetConsoleTextAttribute(hConsole, 12);
			std::cout << "[F3] Bhop : Inactive\n";
		}
		if (Hacks::TriggerBotActive)
		{
			SetConsoleTextAttribute(hConsole, 10);
			std::cout << "[F4] TriggerBot : Active\n";
		}
		else
		{
			SetConsoleTextAttribute(hConsole, 12);
			std::cout << "[F4] TriggerBot : Inactive\n";
		}
		if (Hacks::NoFlashActive)
		{
			SetConsoleTextAttribute(hConsole, 10);
			std::cout << "[F5] NoFlash : Active\n";
		}
		else
		{
			SetConsoleTextAttribute(hConsole, 12);
			std::cout << "[F5] NoFlash : Inactive\n";
		}
		if (Hacks::NoRecoilActive)
		{
			SetConsoleTextAttribute(hConsole, 10);
			std::cout << "[F6] NoRecoil : Active\n";
		}
		else
		{
			SetConsoleTextAttribute(hConsole, 12);
			std::cout << "[F6] NoRecoil : Inactive\n";
		}
		if (Hacks::AimBotActive)
		{
			SetConsoleTextAttribute(hConsole, 10);
			std::cout << "[F7] AimBot : Active\n";
			SetConsoleTextAttribute(hConsole, 11);
			std::cout << "	[F8] Configure the aimbot\n";
		}
		else
		{
			SetConsoleTextAttribute(hConsole, 12);
			std::cout << "[F7] AimBot : Inactive\n";
		}
		if (Hacks::ChamsActive)
		{
			SetConsoleTextAttribute(hConsole, 10);
			std::cout << "[F9] Chams : Active\n";
		}
		else
		{
			SetConsoleTextAttribute(hConsole, 12);
			std::cout << "[F9] Chams : Inactive\n";
		}
		if (Hacks::NoHandsActive)
		{
			SetConsoleTextAttribute(hConsole, 10);
			std::cout << "[F10] NoHands : Active\n";
		}
		else
		{
			SetConsoleTextAttribute(hConsole, 12);
			std::cout << "[F10] NoHands : Inactive\n";
		}
		SetConsoleTextAttribute(hConsole, 7);
		std::cout << "\n----------\n";
		SetConsoleTextAttribute(hConsole, 11);
		std::cout << "\nUsing the TriggerBot : ";
		SetConsoleTextAttribute(hConsole, 12);
		std::cout << "ALT RIGHT / LEFT \n";
		SetConsoleTextAttribute(hConsole, 11);
		std::cout << "Using the aimbot : ";
		SetConsoleTextAttribute(hConsole, 12);
		std::cout << "Left mouse button \n";
		SetConsoleTextAttribute(hConsole, 7);
		std::cout << "\n----------\n";
		std::cout << "\n";
		SetConsoleTextAttribute(hConsole, 11);
		std::cout << "WallHack Glow colors : \n";
		std::cout << "+ of 70 life : ";
		SetConsoleTextAttribute(hConsole, 10);
		std::cout << "GREEN \n";
		SetConsoleTextAttribute(hConsole, 11);
		std::cout << "Between 35 and 70 of life : ";
		SetConsoleTextAttribute(hConsole, 14);
		std::cout << "YELLOW \n";
		SetConsoleTextAttribute(hConsole, 11);
		std::cout << "Between 0 and 35 of life : ";
		SetConsoleTextAttribute(hConsole, 12);
		std::cout << "RED \n";
	}
}

void ClemX::KeyBinds()
{
	if (GetAsyncKeyState(VK_F1) & 1)
	{
		Hacks::RadarActive = !Hacks::RadarActive;
		ClemX::UpdateMenu();
	}
	if (GetAsyncKeyState(VK_F2) & 1)
	{
		Hacks::GlowActive = !Hacks::GlowActive;
		ClemX::UpdateMenu();
	}
	if (GetAsyncKeyState(VK_F3) & 1)
	{
		Hacks::BhopActive = !Hacks::BhopActive;
		ClemX::UpdateMenu();
	}
	if (GetAsyncKeyState(VK_F4) & 1)
	{
		Hacks::TriggerBotActive = !Hacks::TriggerBotActive;
		ClemX::UpdateMenu();
	}
	if (GetAsyncKeyState(VK_F5) & 1)
	{
		Hacks::NoFlashActive = !Hacks::NoFlashActive;
		ClemX::UpdateMenu();
	}
	if (GetAsyncKeyState(VK_F6) & 1)
	{
		Hacks::NoRecoilActive = !Hacks::NoRecoilActive;
		ClemX::UpdateMenu();
	}
	if (GetAsyncKeyState(VK_F7) & 1)
	{
		Hacks::AimBotActive = !Hacks::AimBotActive;
		ClemX::UpdateMenu();
	}
	if (GetAsyncKeyState(VK_F8) & 1)
	{
		Hacks::AimBotConfig = !Hacks::AimBotConfig;
		ClemX::UpdateMenu();
	}
	if (GetAsyncKeyState(VK_F9) & 1)
	{
		Hacks::ChamsActive = !Hacks::ChamsActive;
		ClemX::UpdateMenu();
	}
	if (GetAsyncKeyState(VK_F10) & 1)
	{
		Hacks::NoHandsActive = !Hacks::NoHandsActive;
		ClemX::UpdateMenu();
	}

}