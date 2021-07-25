#include <iostream>
//#include <qapplication.h>
//#include <qpushbutton.h>
#include <filesystem>


int main(int argc, char** argv){
    std::filesystem::path path(".");
    std::cout << path << "\n";

    /* QApplication app(argc, argv); */

    /* QPushButton button("Click me"); */
    /* button.show(); */
    /* app.exec(); */
    return 0;
}
