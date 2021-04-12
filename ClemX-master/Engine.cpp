#include "Includes.h"

DWORD Engine::GetEnginePointer()
{
	return Hacks::mem.Read<DWORD>(Hacks::dwEngine + dwClientState);
}

void Engine::ForceUpdate()
{
	Hacks::mem.Write<int>(Engine::GetEnginePointer() + 0x16C, -1);
}

bool Engine::IsInGame()
{
	if (Hacks::mem.Read<int>(Engine::GetEnginePointer() + dwClientState_State) == 6)
	{
		return true;
	}
	return false;
}
// Function pattern: 55 8B EC 83 EC 14 80 3D ? ? ? ? ? 53 (graphics-hook32.dll)

using OriginalFn = int(__cdecl*)(IDirect3DDevice9*, IDirect3DSurface9*);
OriginalFn oReturn;

int __cdecl hkHook(IDirect3DDevice9* pDevice, IDirect3DSurface9* pBackBuffer)
{
	int iReturn = oReturn(pDevice, pBackBuffer);

	// Visuals stuff

	return iReturn;
}