#ifndef UPTODOWNPAINTER_H
#define UPTODOWNPAINTER_H

#include "ipaint.h"

class UpToDownPainter : public IPaint
{
public:
    UpToDownPainter();

    QRect ChangeProgress(double range, double progress, int x, int y) override;
};

#endif // UPTODOWNPAINTER_H
