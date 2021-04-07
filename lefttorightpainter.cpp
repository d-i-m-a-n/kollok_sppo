#include "lefttorightpainter.h"

LeftToRightPainter::LeftToRightPainter()
{

}

QRect LeftToRightPainter::ChangeProgress(double range, double progress, int x, int y)
{
    double procent = progress/range;

    return QRect(0,0,x*procent,y*procent);
}
