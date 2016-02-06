#ifndef AZUSADESIGNERSDK_H
#define AZUSADESIGNERSDK_H

#include "azusadesignersdk_global.h"
#include "sdk/global/IPluginMain.h"

class PluginMain : public IPluginMain
{

public:
	PluginMain();
	void initialize();
	void setGlobalManager(IGlobalManager* globalManager);
};

#endif // AZUSADESIGNERSDK_H
