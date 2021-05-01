// VCH.cpp : Defines the initialization routines for the DLL.
//

#include "stdafx.h"
#include "EuroScopePlugIn.h"
#include "requestMenu.hpp"

CVCHPlugin * gpMyPlugin = NULL;

void    __declspec (dllexport)    EuroScopePlugInInit(EuroScopePlugIn::CPlugIn ** ppPlugInInstance)
{

		// create the instance
	* ppPlugInInstance = gpMyPlugin = new CVCHPlugin();
}


//---EuroScopePlugInExit-----------------------------------------------

void    __declspec (dllexport)    EuroScopePlugInExit(void)
{

		// delete the instance
		delete gpMyPlugin;
}

/*
Changelog
0.4.5: 
- added option "noblink" so all requests and hold-shorts will not flash but appear in solid colours
- added option "option" to either show or hide specific request types 

*/