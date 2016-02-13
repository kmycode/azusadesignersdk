#ifndef IPLUGINMAIN_H
#define IPLUGINMAIN_H

#include "../AzusaDesignerSDK/sdk/type.h"

class IGlobalManager;

class IPluginMain
{
public:
	explicit IPluginMain() {}

	virtual void initialize() = 0;
	virtual PluginInformation* pluginInformation() = 0;
	virtual void setGlobalManager(IGlobalManager* globalManager) = 0;
};

#endif // IPLUGINMAIN_H
