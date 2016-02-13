#ifndef AZUSADESIGNERSDK_H
#define AZUSADESIGNERSDK_H

#include "azusadesignersdk_global.h"
#include "sdk/global/IPluginMain.h"

class PluginMain : public IPluginMain
{

public:
	PluginMain();
	void initialize();
	PluginInformation* pluginInformation();
	void setGlobalManager(IGlobalManager* globalManager);

private:
	PluginInformation m_pluginInformation;
};

#endif // AZUSADESIGNERSDK_H
