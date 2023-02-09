#ifndef CUSTOMSTYLE_H
#define CUSTOMSTYLE_H

#include <QProxyStyle>
#include <QMap>

class CustomStyle : public QProxyStyle
{
    Q_OBJECT
public:
    CustomStyle();
    ~CustomStyle();

    virtual QIcon standardIcon(StandardPixmap standardIcon, const QStyleOption *option, const QWidget *widget) const override;
    virtual int pixelMetric(QStyle::PixelMetric metric, const QStyleOption* option = 0, const QWidget* widget = 0 ) const override;

private:
    QMap<int, QString> iconMap;
};





#endif // CUSTOMSTYLE_H
