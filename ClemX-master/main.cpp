#include "Includes.h"


using namespace std;

int main()
{

	Hacks::Initialize();
	SetConsoleTitle(" ClemExternal [ Unknowncheats.me ] ");
	ClemX::UpdateMenu();
	while (true)
	{
		ClemX::KeyBinds();
		Hacks::HacksThread();
	}
}