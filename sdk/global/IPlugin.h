#ifndef IPLUGIN_H
#define IPLUGIN_H

class IPluginMain;

class IPlugin
{
public:
	explicit IPlugin() {}

	virtual IPluginMain* pluginMain() = 0;
};

#endif // IPLUGIN_H
