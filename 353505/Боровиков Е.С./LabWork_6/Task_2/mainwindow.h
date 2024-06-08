#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTextStream>
#include <QTextEdit>
#include <QLineEdit>
#include <QFile>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void mainMenu();

private slots:
    void on_lineEdit_returnPressed();

private:
    Ui::MainWindow *ui;
    QString textInput;
    QString textOutput;
    QTextStream inputStream;
    QTextStream outputStream;
    const QString menu = "Меню:\n"
                         "1) Ввести один абзац текста (до нажатия Enter). Сохранить данный текст в текстовый файл с именем «BorovikovLab6.txt» посредством посимвольной записи.\n"
                         "2) Посимвольно считать из текстового файла с именем «BorovikovLab6.txt» текст и вывести его на экран.\n"
                         "3) Ввести размер массива и массив типа short int, разделяющий символ '?'. Сохранить эти элементы массива в текстовый файл с именем «BorovikovLab6_0.txt» посредством потокового ввода.\n"
                         "4) Считать из текстового файла с именем «BorovikovLab6_0.txt» элементы массива посредством потокового вывода и вывести на экран считанный из файла массив, разделяя печатаемые значения символом «пробел».\n"
                         "5) Ввести содержимое полей объекта типа структуры Computer. Сохранить содержимое всех полей структуры в текстовый файл с именем «BorovikovLab6_1.txt».\n"
                         "6) Прочитать из текстового файла с именем «BorovikovLab6_1.txt» все записанные в нем структуры и распечатать содержимое их полей на экран, разделяя содержимое полей знаком '|'.\n"
                         "7) Запросить у пользователя ввести содержимое полей объекта типа вашей структуры. Сохранить содержимое всех полей структуры в бинарный файл с именем «BorovikovLab6_2.bin».\n"
                         "8) Прочитать из бинарного файла с именем «BorovikovLab6_2.bin» все записанные в нем структуры и распечатать содержимое их полей на экран, разделяя содержимое полей символами \" ; \".\n"
                         "9) Запросить у пользователя ввести предложение (до нажатия Enter) и дописать данное предложение в текстовый файл с именем «BorovikovLab6_3.txt» в виде отдельной строки.\n"
                         "10) Построчно считать из текстового файла с именем «BorovikovLab6_3.txt» все предложения и вывести их на экран.\n"
                         "11) Выход\n"
                         "Выберите пункт меню:";
    void checkFilesAvailable();
    void saveData(const QString &fileName);
    void streamFileData(const QString &fileName);
    void saveShortIntArray(const QString &fileName);
    void streamFileDataCharArray(const QString &fileName);
    void saveStructData(const QString &fileName);
    void streamFileDataStruct(const QString &fileName);
    void saveStructBin(const QString &fileName);
    void streamBinFileDataStruct(const QString &fileName);
    void textFile(const QString &fileName);
};
#endif // MAINWINDOW_H
