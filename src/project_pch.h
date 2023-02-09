#ifndef PROJECT_PCH_H
#define PROJECT_PCH_H

#ifdef _DEBUG
    #ifdef USE_VLD
        #include <vld.h>
    #endif
#endif

#include <QDebug>
#include <QString>
#include <QStylePlugin>

#include <HelperLibrary/Styles/iconsenum.h>

#endif // PROJECT_PCH_H
