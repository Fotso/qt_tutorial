#include <QApplication>
#include <QLabel>

int main(int argc, char* argv[]) {
    QApplication app(argc, argv);
    QLabel *label = new QLabel("Hello world");
    label -> setWindowTitle("My Hello World APP");
    label -> resize(500,500);
    label -> show();
    return app.exec();
}
