#include <QApplication>
#include <QPushButton>
#include <QMessageBox>

int main(int argc, char** argv)
{
    QApplication app(argc, argv);

    QPushButton button("Click me!");

    QObject::connect(&button, &QPushButton::clicked, [&]() {
        QMessageBox::information(nullptr, "Clicked!", "You clicked the button!");
        });

    button.show();

    return app.exec();
}
