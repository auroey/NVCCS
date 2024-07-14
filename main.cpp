#include <QApplication>
#include "widget.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    Widget loginDialog;
    loginDialog.show();

    return a.exec();
}
