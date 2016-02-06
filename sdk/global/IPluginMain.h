#ifndef IPLUGINMAIN_H
#define IPLUGINMAIN_H

class IGlobalManager;

class IPluginMain
{
public:
	explicit IPluginMain() {}

	virtual void initialize() = 0;
	virtual void setGlobalManager(IGlobalManager* globalManager) = 0;
};

#endif // IPLUGINMAIN_H
