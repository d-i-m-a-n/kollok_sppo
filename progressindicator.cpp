#include "progressindicator.h"
#include "ui_widget.h"

ProgressIndicator::ProgressIndicator(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
}

ProgressIndicator::ProgressIndicator(IPaint *painter)
{
    m_painter = painter;
}

ProgressIndicator::~ProgressIndicator()
{
    if(m_painter)
        delete m_painter;
    m_painter = nullptr;
    delete ui;
}

void ProgressIndicator::showEvent(QShowEvent *event)
{
    timer = startTimer(100);
}

void ProgressIndicator::timerEvent(QTimerEvent *event)
{
    if(event->timerId() == timer) {
        if(progress_ == range_)
            progress_ = 0;
        progress_++;
        update();
    } else {
        QWidget::timerEvent(event);
    }
}

void ProgressIndicator::paintEvent(QPaintEvent *event)
{
    QPainter painter (this);
    painter.setPen(QPen(Qt::black));
    QRect rect = m_painter->ChangeProgress(this->getRange(),this->getProgress(),this->x(),this->y());
    painter.drawRect(rect);
}

void ProgressIndicator::hideEvent(QHideEvent *event)
{
    killTimer(timer);
}

int ProgressIndicator::getRange()
{
    return range_;
}

int ProgressIndicator::getProgress()
{
    return progress_;
}


void ProgressIndicator::SetPainter(IPaint *painter)
{
    m_painter = painter;
}
