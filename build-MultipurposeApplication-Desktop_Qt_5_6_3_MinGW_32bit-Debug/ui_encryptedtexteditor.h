/********************************************************************************
** Form generated from reading UI file 'encryptedtexteditor.ui'
**
** Created by: Qt User Interface Compiler version 5.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ENCRYPTEDTEXTEDITOR_H
#define UI_ENCRYPTEDTEXTEDITOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>

QT_BEGIN_NAMESPACE

class Ui_EncryptedTextEditor
{
public:

    void setupUi(QMainWindow *EncryptedTextEditor)
    {
        if (EncryptedTextEditor->objectName().isEmpty())
            EncryptedTextEditor->setObjectName(QStringLiteral("EncryptedTextEditor"));
        EncryptedTextEditor->resize(400, 300);

        retranslateUi(EncryptedTextEditor);

        QMetaObject::connectSlotsByName(EncryptedTextEditor);
    } // setupUi

    void retranslateUi(QMainWindow *EncryptedTextEditor)
    {
        EncryptedTextEditor->setWindowTitle(QApplication::translate("EncryptedTextEditor", "Dialog", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class EncryptedTextEditor: public Ui_EncryptedTextEditor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ENCRYPTEDTEXTEDITOR_H
