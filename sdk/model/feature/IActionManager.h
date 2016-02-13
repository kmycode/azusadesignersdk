#ifndef IACTIONMANAGER_H
#define IACTIONMANAGER_H

#include <vector>
#include "sdk/type.h"
#include "sdk/model/feature/IAction.h"

class IActionManager
{
public:
	explicit IActionManager() {}

	virtual std::vector<IAction*> actions() = 0;
	virtual void pluginInformation(PluginInformation* buffer, IAction* action) = 0;
	virtual bool registerAction(IAction* action) = 0;
	virtual bool removeAction(IAction* action) = 0;
};

#endif // IACTIONMANAGER_H
