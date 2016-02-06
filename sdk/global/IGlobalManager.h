#ifndef IGLOBALMANAGER_H
#define IGLOBALMANAGER_H

#include "../type.h"

class IGlobalManager
{
public:
	explicit IGlobalManager() {}

	virtual AzusaDesignerVersion applicationVersion() = 0;
	virtual const char* applicationName() = 0;
};

#endif // IGLOBALMANAGER_H
