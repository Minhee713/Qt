#include <QApplication>
#include <QLabel>

int main(int argc, char* argv[]) {
    QApplication app(argc, argv);
    QLabel* label = new QLabel("Hello Qt!!");
    label->setWindowTitle("My APP");
    label->show();
    label->resize(400, 400);
    return app.exec();
}
