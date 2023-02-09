#ifndef CUSTOMSTYLEPLUGIN_H
#define CUSTOMSTYLEPLUGIN_H

#include "project_pch.h"

class CustomStylePlugin : public QStylePlugin
{
    Q_OBJECT
    Q_PLUGIN_METADATA(IID "org.qt-project.Qt.QStyleFactoryInterface" FILE "customstyle.json")
public:
    CustomStylePlugin(QObject *_parent = nullptr);
    ~CustomStylePlugin();

    virtual QStyle *create(const QString &key) override;
};

#endif // CUSTOMSTYLEPLUGIN_H
