// S.W.I.N.E. ExOptions (or easy and light ExOptions base for anyone to use)
// Coding: bads.tm , 
// Injector: thelink2012 ,  
// IniReader: ThirteenAG , 
// Progress: Get it compillable. Then make sure it works in game. Then finish it!
// If you're contributor or outsourced programmer, credit yourself here is recommended!
#include "stdafx.h"
#include "stdio.h"
#include <windows.h>
#include "..\includes\injector\injector.hpp"
#include <cstdint>
#include "..\includes\IniReader.h"

DWORD WINAPI Thing(LPVOID);

 
int main() {
 {
    if(GetAsyncKeyState(VK_HOME)) //When pressed key Function: Camera max zoom in [Key is HOME]
    {
		int CamMaxIn = (*(DWORD*)(*(DWORD*)(*(DWORD*)(*(DWORD*)(*(DWORD*)0x17B270) + 0x88) + 0x404) + 0x3c) + 0x1C);
		injector::WriteMemory<float>(CamMaxIn, 1, true);
	}
 }
}
