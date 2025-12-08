/********************************************************************************
** Form generated from reading UI file 'MainWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QFrame *frame;
    QLabel *Username;
    QLabel *Password;
    QLineEdit *Usernamet;
    QLineEdit *Passwordt;
    QPushButton *log_in;
    QPushButton *sign_in;
    QMenuBar *menubar;
    QMenu *menu;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1154, 687);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        frame = new QFrame(centralwidget);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(380, 150, 411, 291));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        Username = new QLabel(frame);
        Username->setObjectName(QString::fromUtf8("Username"));
        Username->setGeometry(QRect(30, 40, 81, 41));
        Username->setStyleSheet(QString::fromUtf8("font: 12pt \"Microsoft YaHei UI\";"));
        Password = new QLabel(frame);
        Password->setObjectName(QString::fromUtf8("Password"));
        Password->setGeometry(QRect(30, 130, 81, 51));
        Password->setStyleSheet(QString::fromUtf8("font: 12pt \"Microsoft YaHei\";"));
        Usernamet = new QLineEdit(frame);
        Usernamet->setObjectName(QString::fromUtf8("Usernamet"));
        Usernamet->setGeometry(QRect(160, 40, 171, 27));
        Usernamet->setFrame(false);
        Usernamet->setEchoMode(QLineEdit::Normal);
        Usernamet->setDragEnabled(true);
        Usernamet->setReadOnly(false);
        Usernamet->setCursorMoveStyle(Qt::LogicalMoveStyle);
        Usernamet->setClearButtonEnabled(false);
        Passwordt = new QLineEdit(frame);
        Passwordt->setObjectName(QString::fromUtf8("Passwordt"));
        Passwordt->setGeometry(QRect(160, 130, 171, 27));
        Passwordt->setEchoMode(QLineEdit::Password);
        Passwordt->setDragEnabled(true);
        log_in = new QPushButton(frame);
        log_in->setObjectName(QString::fromUtf8("log_in"));
        log_in->setEnabled(true);
        log_in->setGeometry(QRect(50, 200, 111, 51));
        sign_in = new QPushButton(frame);
        sign_in->setObjectName(QString::fromUtf8("sign_in"));
        sign_in->setGeometry(QRect(250, 200, 121, 51));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1154, 25));
        menu = new QMenu(menubar);
        menu->setObjectName(QString::fromUtf8("menu"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menu->menuAction());

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        Username->setText(QCoreApplication::translate("MainWindow", "\347\224\250\346\210\267\345\220\215\357\274\232", nullptr));
        Password->setText(QCoreApplication::translate("MainWindow", "\345\257\206\347\240\201\357\274\232", nullptr));
        Usernamet->setInputMask(QString());
        Usernamet->setPlaceholderText(QCoreApplication::translate("MainWindow", "\350\257\267\350\276\223\345\205\245\347\224\250\346\210\267\345\220\215...", nullptr));
        Passwordt->setPlaceholderText(QCoreApplication::translate("MainWindow", "\350\257\267\350\276\223\345\205\245\345\257\206\347\240\201...", nullptr));
        log_in->setText(QCoreApplication::translate("MainWindow", "\347\231\273\345\275\225", nullptr));
        sign_in->setText(QCoreApplication::translate("MainWindow", "\346\263\250\345\206\214", nullptr));
        menu->setTitle(QCoreApplication::translate("MainWindow", "\347\231\273\345\275\225", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
