// main.cpp
#include <QApplication>
#include <QMainWindow>
#include <QLabel>
#include <QPushButton>
#include <QVBoxLayout>
#include <QWidget>

int main(int argc, char *argv[])
{
    // Create application object
    QApplication app(argc, argv);
    
    // Create main window
    QMainWindow mainWindow;
    mainWindow.setWindowTitle("My First Qt6 App");
    mainWindow.resize(400, 300);
    
    // Create central widget and layout
    QWidget *centralWidget = new QWidget(&mainWindow);
    QVBoxLayout *layout = new QVBoxLayout(centralWidget);
    
    QLabel *label = new QLabel("Hello, Qt6 World!");
    label->setAlignment(Qt::AlignCenter);
    layout->addWidget(label);
    
    QPushButton *button = new QPushButton("Click Me");
    layout->addWidget(button);
    
    // Connect button signal to a lambda slot
    QObject::connect(button, &QPushButton::clicked, [label]() {
        label->setText("Button was clicked!");
    });
    
    // Set the central widget
    mainWindow.setCentralWidget(centralWidget);
    
    // Show the window
    mainWindow.show();
    
    // Start the event loop
    return app.exec();
}
