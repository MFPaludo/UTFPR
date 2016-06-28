/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionNovo;
    QAction *actionPersonagem;
    QAction *actionPersonagem_2;
    QAction *actionAventura_2;
    QAction *actionAbrir;
    QAction *actionSalvar;
    QWidget *centralWidget;
    QStackedWidget *stackedWidget;
    QWidget *principal;
    QLabel *label;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QGridLayout *gridLayout_2;
    QWidget *aventura;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *nomeaventura;
    QLabel *label_4;
    QLineEdit *narrador;
    QLabel *label_5;
    QLineEdit *personagem1;
    QLabel *label_6;
    QLineEdit *personagem2;
    QLabel *label_7;
    QLineEdit *personagem3;
    QLabel *label_8;
    QLineEdit *personagem4;
    QLineEdit *inimigo2;
    QLineEdit *inimigo1;
    QLabel *label_9;
    QLineEdit *personagem5;
    QLineEdit *inimigo3;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_13;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;
    QMenuBar *menuBar;
    QMenu *menuNovo;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(640, 500);
        MainWindow->setMaximumSize(QSize(640, 500));
        QIcon icon;
        icon.addFile(QStringLiteral("../Soldier.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        MainWindow->setDocumentMode(false);
        actionNovo = new QAction(MainWindow);
        actionNovo->setObjectName(QStringLiteral("actionNovo"));
        actionPersonagem = new QAction(MainWindow);
        actionPersonagem->setObjectName(QStringLiteral("actionPersonagem"));
        actionPersonagem_2 = new QAction(MainWindow);
        actionPersonagem_2->setObjectName(QStringLiteral("actionPersonagem_2"));
        actionAventura_2 = new QAction(MainWindow);
        actionAventura_2->setObjectName(QStringLiteral("actionAventura_2"));
        actionAbrir = new QAction(MainWindow);
        actionAbrir->setObjectName(QStringLiteral("actionAbrir"));
        actionSalvar = new QAction(MainWindow);
        actionSalvar->setObjectName(QStringLiteral("actionSalvar"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        centralWidget->setMaximumSize(QSize(640, 530));
        stackedWidget = new QStackedWidget(centralWidget);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        stackedWidget->setGeometry(QRect(0, 0, 640, 480));
        stackedWidget->setMaximumSize(QSize(640, 480));
        principal = new QWidget();
        principal->setObjectName(QStringLiteral("principal"));
        principal->setMaximumSize(QSize(640, 480));
        label = new QLabel(principal);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, 0, 640, 480));
        label->setMaximumSize(QSize(640, 480));
        label->setPixmap(QPixmap(QString::fromUtf8("../the-division-wallpaper-7.jpg")));
        label->setScaledContents(true);
        label->setIndent(-1);
        gridLayoutWidget = new QWidget(principal);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(110, 150, 160, 80));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setSpacing(6);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));

        gridLayout->addLayout(gridLayout_2, 0, 0, 1, 1);

        stackedWidget->addWidget(principal);
        aventura = new QWidget();
        aventura->setObjectName(QStringLiteral("aventura"));
        aventura->setMaximumSize(QSize(640, 480));
        label_2 = new QLabel(aventura);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(0, 0, 640, 480));
        label_2->setMaximumSize(QSize(640, 480));
        label_2->setPixmap(QPixmap(QString::fromUtf8("../orange-gradient-background.jpg")));
        label_2->setScaledContents(true);
        label_3 = new QLabel(aventura);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(0, 10, 151, 20));
        QFont font;
        font.setFamily(QStringLiteral("Papyrus"));
        font.setPointSize(12);
        font.setBold(true);
        font.setWeight(75);
        label_3->setFont(font);
        label_3->setTextFormat(Qt::RichText);
        nomeaventura = new QLineEdit(aventura);
        nomeaventura->setObjectName(QStringLiteral("nomeaventura"));
        nomeaventura->setGeometry(QRect(150, 10, 451, 31));
        label_4 = new QLabel(aventura);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(0, 50, 151, 20));
        label_4->setFont(font);
        label_4->setTextFormat(Qt::RichText);
        narrador = new QLineEdit(aventura);
        narrador->setObjectName(QStringLiteral("narrador"));
        narrador->setGeometry(QRect(150, 50, 451, 31));
        label_5 = new QLabel(aventura);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(0, 90, 151, 20));
        label_5->setFont(font);
        label_5->setTextFormat(Qt::RichText);
        personagem1 = new QLineEdit(aventura);
        personagem1->setObjectName(QStringLiteral("personagem1"));
        personagem1->setGeometry(QRect(150, 90, 451, 31));
        label_6 = new QLabel(aventura);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(0, 130, 151, 20));
        label_6->setFont(font);
        label_6->setTextFormat(Qt::RichText);
        personagem2 = new QLineEdit(aventura);
        personagem2->setObjectName(QStringLiteral("personagem2"));
        personagem2->setGeometry(QRect(150, 130, 451, 31));
        label_7 = new QLabel(aventura);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(0, 170, 151, 20));
        label_7->setFont(font);
        label_7->setTextFormat(Qt::RichText);
        personagem3 = new QLineEdit(aventura);
        personagem3->setObjectName(QStringLiteral("personagem3"));
        personagem3->setGeometry(QRect(150, 170, 451, 31));
        label_8 = new QLabel(aventura);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(0, 210, 151, 20));
        label_8->setFont(font);
        label_8->setTextFormat(Qt::RichText);
        personagem4 = new QLineEdit(aventura);
        personagem4->setObjectName(QStringLiteral("personagem4"));
        personagem4->setGeometry(QRect(150, 210, 451, 31));
        inimigo2 = new QLineEdit(aventura);
        inimigo2->setObjectName(QStringLiteral("inimigo2"));
        inimigo2->setGeometry(QRect(150, 330, 451, 31));
        inimigo1 = new QLineEdit(aventura);
        inimigo1->setObjectName(QStringLiteral("inimigo1"));
        inimigo1->setGeometry(QRect(150, 290, 451, 31));
        label_9 = new QLabel(aventura);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(0, 290, 151, 20));
        label_9->setFont(font);
        label_9->setTextFormat(Qt::RichText);
        personagem5 = new QLineEdit(aventura);
        personagem5->setObjectName(QStringLiteral("personagem5"));
        personagem5->setGeometry(QRect(150, 250, 451, 31));
        inimigo3 = new QLineEdit(aventura);
        inimigo3->setObjectName(QStringLiteral("inimigo3"));
        inimigo3->setGeometry(QRect(150, 370, 451, 31));
        label_10 = new QLabel(aventura);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(0, 370, 151, 20));
        label_10->setFont(font);
        label_10->setTextFormat(Qt::RichText);
        label_11 = new QLabel(aventura);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(0, 330, 151, 20));
        label_11->setFont(font);
        label_11->setTextFormat(Qt::RichText);
        label_13 = new QLabel(aventura);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(0, 250, 151, 20));
        label_13->setFont(font);
        label_13->setTextFormat(Qt::RichText);
        pushButton = new QPushButton(aventura);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(310, 410, 75, 23));
        pushButton_2 = new QPushButton(aventura);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(390, 410, 75, 23));
        pushButton_3 = new QPushButton(aventura);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(570, 460, 75, 23));
        pushButton_4 = new QPushButton(aventura);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(470, 410, 75, 23));
        pushButton_5 = new QPushButton(aventura);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(550, 410, 75, 23));
        stackedWidget->addWidget(aventura);
        MainWindow->setCentralWidget(centralWidget);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        mainToolBar->setMaximumSize(QSize(640, 480));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        statusBar->setMaximumSize(QSize(640, 480));
        MainWindow->setStatusBar(statusBar);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 640, 21));
        menuBar->setMaximumSize(QSize(640, 480));
        menuNovo = new QMenu(menuBar);
        menuNovo->setObjectName(QStringLiteral("menuNovo"));
        MainWindow->setMenuBar(menuBar);

        menuBar->addAction(menuNovo->menuAction());
        menuNovo->addSeparator();
        menuNovo->addAction(actionAventura_2);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        actionNovo->setText(QApplication::translate("MainWindow", "Novo", 0));
        actionPersonagem->setText(QApplication::translate("MainWindow", "Personagem", 0));
        actionPersonagem_2->setText(QApplication::translate("MainWindow", "Personagem", 0));
        actionAventura_2->setText(QApplication::translate("MainWindow", "Aventura", 0));
        actionAbrir->setText(QApplication::translate("MainWindow", "Abrir", 0));
        actionSalvar->setText(QApplication::translate("MainWindow", "Salvar", 0));
        label->setText(QString());
        label_2->setText(QString());
        label_3->setText(QApplication::translate("MainWindow", "Nome da aventura:", 0));
        label_4->setText(QApplication::translate("MainWindow", "Narrador:", 0));
        label_5->setText(QApplication::translate("MainWindow", "Personagem 1:", 0));
        label_6->setText(QApplication::translate("MainWindow", "Personagem 2:", 0));
        label_7->setText(QApplication::translate("MainWindow", "Personagem 3:", 0));
        label_8->setText(QApplication::translate("MainWindow", "Personagem 4:", 0));
        label_9->setText(QApplication::translate("MainWindow", "Inimigo 1:", 0));
        label_10->setText(QApplication::translate("MainWindow", "Inimigo 3:", 0));
        label_11->setText(QApplication::translate("MainWindow", "Inimigo 2:", 0));
        label_13->setText(QApplication::translate("MainWindow", "Personagem 5:", 0));
        pushButton->setText(QApplication::translate("MainWindow", "Cadastrar", 0));
        pushButton_2->setText(QApplication::translate("MainWindow", "Buscar", 0));
        pushButton_3->setText(QApplication::translate("MainWindow", "Cadastrar", 0));
        pushButton_4->setText(QApplication::translate("MainWindow", "Alterar", 0));
        pushButton_5->setText(QApplication::translate("MainWindow", "Remover", 0));
        menuNovo->setTitle(QApplication::translate("MainWindow", "Novo", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
