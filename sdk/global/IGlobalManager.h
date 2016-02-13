#ifndef IGLOBALMANAGER_H
#define IGLOBALMANAGER_H

#include "../type.h"

class IPluginManager;
class IActionManager;

class IGlobalManager
{
public:
	explicit IGlobalManager() {}

	virtual IPluginManager* pluginManager() = 0;
	virtual IActionManager* actionManager() = 0;

	virtual AzusaDesignerVersion applicationVersion() = 0;
	virtual const char* applicationName() = 0;
};

#endif // IGLOBALMANAGER_H
