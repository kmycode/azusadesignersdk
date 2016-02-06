#include "PluginMain.h"
#include <QMessageBox>

#include "sdk/type.h"


extern "C" AZUSADESIGNERSDKSHARED_EXPORT void* pluginMainInstance()
{
	return new PluginMain();
}

PluginMain::PluginMain()
{
}

void PluginMain::testMethod()
{
	QMessageBox::information(0, "Test", "Message", QMessageBox::Ok);
}
