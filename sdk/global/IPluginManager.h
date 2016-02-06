#ifndef IPLUGINMANAGER_H
#define IPLUGINMANAGER_H

#include <vector>
class IPlugin;

class IPluginManager
{
public:
	explicit IPluginManager() {}

	virtual std::vector<IPlugin*> plugins() = 0;
};

#endif // IPLUGINMANAGER_H
