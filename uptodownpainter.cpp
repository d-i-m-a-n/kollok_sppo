#include "uptodownpainter.h"

UpToDownPainter::UpToDownPainter()
{

}

QRect UpToDownPainter::ChangeProgress(double range, double progress, int x, int y)
{
    double procent = progress/range;

    return QRect(0,0,x,y*procent);
}

