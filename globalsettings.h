#ifndef GLOBALSETTINGS_H
#define GLOBALSETTINGS_H

#include <QObject>

class GlobalSettings : public QObject
{
    Q_OBJECT
public:
    explicit GlobalSettings(QObject *parent = nullptr);

Q_SIGNALS:

};

#endif // GLOBALSETTINGS_H
