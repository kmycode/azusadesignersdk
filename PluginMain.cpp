#include "PluginMain.h"
#include "sdk/type.h"


extern "C" AZUSADESIGNERSDKSHARED_EXPORT void* pluginMainInstance()
{
	return new PluginMain();
}

PluginMain::PluginMain()
{

}

void PluginMain::initialize()
{

}

void PluginMain::setGlobalManager(IGlobalManager *globalManager)
{

}
