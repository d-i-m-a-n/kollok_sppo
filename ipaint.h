#ifndef IPAINT_H
#define IPAINT_H
#include <QRect>

class IPaint
{
public:
    IPaint() = default;

    virtual QRect ChangeProgress(double range, double progress, int x, int y) = 0;
};

#endif // IPAINT_H
