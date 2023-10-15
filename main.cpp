	
#include "Offsets.h"
#include "ProcessManager.hpp"
#include <iostream>
#include <iomanip>

int main()
{
    
    if (Offset::UpdateOffsets())
	{
	DWORD64 ClientDLL = reinterpret_cast<DWORD64>(ProcessMgr.GetProcessModuleHandle("client.dll"));
	
	DWORD64 EntityList = ClientDLL + Offset::EntityList;
	DWORD64 Matrix = ClientDLL + Offset::Matrix;
	DWORD64 ViewAngle = ClientDLL + Offset::ViewAngle;
	DWORD64 LocalController = ClientDLL + Offset::LocalPlayerController;
	DWORD64 LocalPawn = ClientDLL + Offset::LocalPlayerPawn;

	}
}