#include "customstyleplugin.h"
#include "customstyle.h"

CustomStylePlugin::CustomStylePlugin(QObject *_parent):
    QStylePlugin(_parent)
{

}

CustomStylePlugin::~CustomStylePlugin()
{

}

QStyle *CustomStylePlugin::create(const QString &key)
{
    if(key.toLower() == "customStyle")
    {
        CustomStyle *c = new CustomStyle();
        c->setParent(this);
        return c;
    }

    return 0;
}
