#pragma once
#ifndef LEFTTORIGHTPAINTER_H
#define LEFTTORIGHTPAINTER_H

#include "ipaint.h"

class LeftToRightPainter : public IPaint
{
public:
    LeftToRightPainter();

    QRect ChangeProgress(double range, double progress, int x, int y) override;
};

#endif // LEFTTORIGHTPAINTER_H
