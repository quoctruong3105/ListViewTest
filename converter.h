#ifndef CONVERTER_H
#define CONVERTER_H

#include <QObject>

class converter : public QObject
{
    Q_OBJECT
public:
    explicit converter(QObject *parent = nullptr);

signals:

};

#endif // CONVERTER_H
