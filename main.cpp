#include <iostream>
#include <qapplication.h>
#include <qpushbutton.h>


int main(int argc, char** argv){
    QApplication app(argc, argv);

    QPushButton button("Click me");
    button.show();
    app.exec();
    return 0;
}
