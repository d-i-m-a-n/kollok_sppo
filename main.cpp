#include "progressindicator.h"

#include <QApplication>

#include "lefttorightpainter.h"
#include "uptodownpainter.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    ProgressIndicator progressIndicator(new UpToDownPainter);
    progressIndicator.setFixedSize(500,500);
    progressIndicator.setAutoFillBackground(true);
    progressIndicator.setPalette(QPalette(QPalette::Background,Qt::white));

    progressIndicator.show();
    return a.exec();
}
