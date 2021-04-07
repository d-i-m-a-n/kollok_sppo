#pragma once
#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QPainter>
#include <QRect>

#include "ipaint.h"

class IPaint;

QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class ProgressIndicator : public QWidget
{
    Q_OBJECT

public:
    ProgressIndicator(QWidget *parent = nullptr);
    ProgressIndicator(IPaint *painter);
    ~ProgressIndicator();

    void SetPainter(IPaint *painter);

    int getRange();

    int getProgress();

private:
    void showEvent(QShowEvent *event) override;

    void timerEvent(QTimerEvent *event) override;

    void paintEvent(QPaintEvent *event) override;

    void hideEvent(QHideEvent *event) override;

    IPaint *m_painter;

    int timer;

    int range_ = 100;
    int progress_ = 0;


    Ui::Widget *ui;
};
#endif // WIDGET_H
