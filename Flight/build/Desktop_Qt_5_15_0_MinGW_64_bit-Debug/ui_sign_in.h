/********************************************************************************
** Form generated from reading UI file 'sign_in.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIGN_IN_H
#define UI_SIGN_IN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Sign_in
{
public:
    QFrame *frame;
    QLabel *Sign_in_Username;
    QLabel *label;
    QLabel *Sign_in_PassWord;
    QLabel *Sign_in_PassWordA;
    QLineEdit *ID;
    QLineEdit *Sign_in_UsernameT;
    QLineEdit *Sign_in_PassWordT;
    QLineEdit *Sign_in_PassWordAT;
    QPushButton *Sign_in_Cencel;
    QPushButton *Sign_in_Button;

    void setupUi(QWidget *Sign_in)
    {
        if (Sign_in->objectName().isEmpty())
            Sign_in->setObjectName(QString::fromUtf8("Sign_in"));
        Sign_in->resize(1154, 687);
        frame = new QFrame(Sign_in);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(250, 160, 711, 361));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        Sign_in_Username = new QLabel(frame);
        Sign_in_Username->setObjectName(QString::fromUtf8("Sign_in_Username"));
        Sign_in_Username->setGeometry(QRect(150, 60, 81, 31));
        label = new QLabel(frame);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(150, 110, 71, 31));
        Sign_in_PassWord = new QLabel(frame);
        Sign_in_PassWord->setObjectName(QString::fromUtf8("Sign_in_PassWord"));
        Sign_in_PassWord->setGeometry(QRect(150, 160, 61, 31));
        Sign_in_PassWordA = new QLabel(frame);
        Sign_in_PassWordA->setObjectName(QString::fromUtf8("Sign_in_PassWordA"));
        Sign_in_PassWordA->setGeometry(QRect(150, 220, 91, 41));
        ID = new QLineEdit(frame);
        ID->setObjectName(QString::fromUtf8("ID"));
        ID->setGeometry(QRect(320, 110, 171, 27));
        Sign_in_UsernameT = new QLineEdit(frame);
        Sign_in_UsernameT->setObjectName(QString::fromUtf8("Sign_in_UsernameT"));
        Sign_in_UsernameT->setGeometry(QRect(320, 60, 171, 27));
        Sign_in_PassWordT = new QLineEdit(frame);
        Sign_in_PassWordT->setObjectName(QString::fromUtf8("Sign_in_PassWordT"));
        Sign_in_PassWordT->setGeometry(QRect(320, 160, 171, 27));
        Sign_in_PassWordAT = new QLineEdit(frame);
        Sign_in_PassWordAT->setObjectName(QString::fromUtf8("Sign_in_PassWordAT"));
        Sign_in_PassWordAT->setGeometry(QRect(320, 220, 171, 27));
        Sign_in_Cencel = new QPushButton(frame);
        Sign_in_Cencel->setObjectName(QString::fromUtf8("Sign_in_Cencel"));
        Sign_in_Cencel->setGeometry(QRect(420, 270, 99, 28));
        Sign_in_Button = new QPushButton(frame);
        Sign_in_Button->setObjectName(QString::fromUtf8("Sign_in_Button"));
        Sign_in_Button->setGeometry(QRect(120, 270, 101, 31));

        retranslateUi(Sign_in);

        QMetaObject::connectSlotsByName(Sign_in);
    } // setupUi

    void retranslateUi(QWidget *Sign_in)
    {
        Sign_in->setWindowTitle(QCoreApplication::translate("Sign_in", "\346\263\250\345\206\214", nullptr));
        Sign_in_Username->setText(QCoreApplication::translate("Sign_in", "\347\224\250\346\210\267\345\220\215\357\274\232", nullptr));
        label->setText(QCoreApplication::translate("Sign_in", "\350\264\246\346\210\267ID\357\274\232", nullptr));
        Sign_in_PassWord->setText(QCoreApplication::translate("Sign_in", "\345\257\206\347\240\201\357\274\232", nullptr));
        Sign_in_PassWordA->setText(QCoreApplication::translate("Sign_in", "\347\241\256\350\256\244\345\257\206\347\240\201\357\274\232", nullptr));
        ID->setInputMask(QString());
        ID->setPlaceholderText(QCoreApplication::translate("Sign_in", "ID\344\270\272\350\264\246\345\217\267\347\232\204\345\224\257\344\270\200\345\207\255\350\257\201", nullptr));
        Sign_in_UsernameT->setPlaceholderText(QCoreApplication::translate("Sign_in", "\350\257\267\350\276\223\345\205\245\344\275\240\347\232\204\347\224\250\346\210\267\345\220\215...", nullptr));
        Sign_in_PassWordT->setInputMask(QString());
        Sign_in_PassWordT->setPlaceholderText(QCoreApplication::translate("Sign_in", "\350\257\267\350\276\223\345\205\245\344\275\240\347\232\204\345\257\206\347\240\201...", nullptr));
        Sign_in_PassWordAT->setPlaceholderText(QCoreApplication::translate("Sign_in", "\350\257\267\347\241\256\350\256\244\344\275\240\347\232\204\345\257\206\347\240\201...", nullptr));
        Sign_in_Cencel->setText(QCoreApplication::translate("Sign_in", "\345\217\226\346\266\210", nullptr));
        Sign_in_Button->setText(QCoreApplication::translate("Sign_in", "\346\263\250\345\206\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Sign_in: public Ui_Sign_in {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGN_IN_H
