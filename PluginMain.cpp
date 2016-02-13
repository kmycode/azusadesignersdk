#include "PluginMain.h"
#include "sdk/type.h"


extern "C" AZUSADESIGNERSDKSHARED_EXPORT void* pluginMainInstance()
{
	return new PluginMain();
}

#define PLUGIN_NAME "Test Plugin"
#define PLUGIN_AUTHOR "KMY"
#define PLUGIN_VERSION 0.0
#define PLUGIN_FIXEDIDENFIER "kmy-test"

PluginMain::PluginMain()
	: m_pluginInformation(PLUGIN_NAME, PLUGIN_AUTHOR, PLUGIN_VERSION, PLUGIN_FIXEDIDENFIER)
{

}

PluginInformation* PluginMain::pluginInformation()
{
	return &this->m_pluginInformation;
}

void PluginMain::initialize()
{

}

void PluginMain::setGlobalManager(IGlobalManager *globalManager)
{

}
