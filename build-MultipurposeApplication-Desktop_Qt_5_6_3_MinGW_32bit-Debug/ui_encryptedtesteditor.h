/********************************************************************************
** Form generated from reading UI file 'encryptedtesteditor.ui'
**
** Created by: Qt User Interface Compiler version 5.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ENCRYPTEDTESTEDITOR_H
#define UI_ENCRYPTEDTESTEDITOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_EncryptedTestEditor
{
public:
    QAction *actionNew;
    QAction *actionClear;
    QAction *actionCopy;
    QAction *actionPaste;
    QAction *actionCut;
    QAction *actionOpenNormalText;
    QAction *actionOpenEncryptedText;
    QAction *actionSaveNormalText;
    QAction *actionSaveEncrypedText;
    QAction *actionExit;
    QAction *actionEncryptText;
    QAction *actionDecryptText_2;
    QAction *actionFonts;
    QAction *actionFontColor;
    QAction *actionUndo;
    QAction *actionRedo;
    QAction *actionAbout;
    QAction *actionPrintNormalText;
    QAction *actionPrintEncrypedText_2;
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QTabWidget *tabWidget;
    QWidget *tab;
    QGridLayout *gridLayout_3;
    QVBoxLayout *verticalLayout_2;
    QTextEdit *txtEncTextInput;
    QHBoxLayout *horizontalLayout_6;
    QLineEdit *txtEncKey;
    QPushButton *btnEncript;
    QVBoxLayout *verticalLayout_4;
    QTextEdit *txtEncTextOutput;
    QWidget *tab_2;
    QGridLayout *gridLayout_4;
    QHBoxLayout *horizontalLayout_7;
    QLineEdit *txtDecKey;
    QPushButton *btnDecript;
    QVBoxLayout *verticalLayout_3;
    QTextEdit *txtDecTextInput;
    QVBoxLayout *verticalLayout_5;
    QTextEdit *txtDecTextOutput;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuEdit;
    QMenu *menuAbout;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *EncryptedTestEditor)
    {
        if (EncryptedTestEditor->objectName().isEmpty())
            EncryptedTestEditor->setObjectName(QStringLiteral("EncryptedTestEditor"));
        EncryptedTestEditor->resize(713, 431);
        QIcon icon;
        icon.addFile(QStringLiteral(":/img/img/hacking_2ux_icon.ico"), QSize(), QIcon::Normal, QIcon::Off);
        EncryptedTestEditor->setWindowIcon(icon);
        actionNew = new QAction(EncryptedTestEditor);
        actionNew->setObjectName(QStringLiteral("actionNew"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/img/img/add.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionNew->setIcon(icon1);
        actionClear = new QAction(EncryptedTestEditor);
        actionClear->setObjectName(QStringLiteral("actionClear"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/img/img/broom.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionClear->setIcon(icon2);
        actionCopy = new QAction(EncryptedTestEditor);
        actionCopy->setObjectName(QStringLiteral("actionCopy"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/img/img/paste (2).png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCopy->setIcon(icon3);
        actionPaste = new QAction(EncryptedTestEditor);
        actionPaste->setObjectName(QStringLiteral("actionPaste"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/img/img/paste.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPaste->setIcon(icon4);
        actionCut = new QAction(EncryptedTestEditor);
        actionCut->setObjectName(QStringLiteral("actionCut"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/img/img/cut.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCut->setIcon(icon5);
        actionOpenNormalText = new QAction(EncryptedTestEditor);
        actionOpenNormalText->setObjectName(QStringLiteral("actionOpenNormalText"));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/img/img/foldertext.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionOpenNormalText->setIcon(icon6);
        actionOpenEncryptedText = new QAction(EncryptedTestEditor);
        actionOpenEncryptedText->setObjectName(QStringLiteral("actionOpenEncryptedText"));
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/img/img/folder.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionOpenEncryptedText->setIcon(icon7);
        actionSaveNormalText = new QAction(EncryptedTestEditor);
        actionSaveNormalText->setObjectName(QStringLiteral("actionSaveNormalText"));
        QIcon icon8;
        icon8.addFile(QStringLiteral(":/img/img/save.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSaveNormalText->setIcon(icon8);
        actionSaveEncrypedText = new QAction(EncryptedTestEditor);
        actionSaveEncrypedText->setObjectName(QStringLiteral("actionSaveEncrypedText"));
        QIcon icon9;
        icon9.addFile(QStringLiteral(":/img/img/save2.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSaveEncrypedText->setIcon(icon9);
        actionExit = new QAction(EncryptedTestEditor);
        actionExit->setObjectName(QStringLiteral("actionExit"));
        QIcon icon10;
        icon10.addFile(QStringLiteral(":/img/img/cancel.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionExit->setIcon(icon10);
        actionEncryptText = new QAction(EncryptedTestEditor);
        actionEncryptText->setObjectName(QStringLiteral("actionEncryptText"));
        QIcon icon11;
        icon11.addFile(QStringLiteral(":/img/img/file.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionEncryptText->setIcon(icon11);
        actionDecryptText_2 = new QAction(EncryptedTestEditor);
        actionDecryptText_2->setObjectName(QStringLiteral("actionDecryptText_2"));
        QIcon icon12;
        icon12.addFile(QStringLiteral(":/img/img/file2.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionDecryptText_2->setIcon(icon12);
        actionFonts = new QAction(EncryptedTestEditor);
        actionFonts->setObjectName(QStringLiteral("actionFonts"));
        QIcon icon13;
        icon13.addFile(QStringLiteral(":/img/img/font.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionFonts->setIcon(icon13);
        actionFontColor = new QAction(EncryptedTestEditor);
        actionFontColor->setObjectName(QStringLiteral("actionFontColor"));
        QIcon icon14;
        icon14.addFile(QStringLiteral(":/img/img/color-picker.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionFontColor->setIcon(icon14);
        actionUndo = new QAction(EncryptedTestEditor);
        actionUndo->setObjectName(QStringLiteral("actionUndo"));
        QIcon icon15;
        icon15.addFile(QStringLiteral(":/img/img/undo.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionUndo->setIcon(icon15);
        actionRedo = new QAction(EncryptedTestEditor);
        actionRedo->setObjectName(QStringLiteral("actionRedo"));
        QIcon icon16;
        icon16.addFile(QStringLiteral(":/img/img/redo.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionRedo->setIcon(icon16);
        actionAbout = new QAction(EncryptedTestEditor);
        actionAbout->setObjectName(QStringLiteral("actionAbout"));
        QIcon icon17;
        icon17.addFile(QStringLiteral(":/img/img/conversation.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionAbout->setIcon(icon17);
        actionPrintNormalText = new QAction(EncryptedTestEditor);
        actionPrintNormalText->setObjectName(QStringLiteral("actionPrintNormalText"));
        QIcon icon18;
        icon18.addFile(QStringLiteral(":/img/img/printer.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPrintNormalText->setIcon(icon18);
        actionPrintEncrypedText_2 = new QAction(EncryptedTestEditor);
        actionPrintEncrypedText_2->setObjectName(QStringLiteral("actionPrintEncrypedText_2"));
        QIcon icon19;
        icon19.addFile(QStringLiteral(":/img/img/printernew.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPrintEncrypedText_2->setIcon(icon19);
        centralWidget = new QWidget(EncryptedTestEditor);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        gridLayout_3 = new QGridLayout(tab);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        txtEncTextInput = new QTextEdit(tab);
        txtEncTextInput->setObjectName(QStringLiteral("txtEncTextInput"));
        QFont font;
        font.setFamily(QStringLiteral("Montserrat"));
        font.setPointSize(10);
        txtEncTextInput->setFont(font);

        verticalLayout_2->addWidget(txtEncTextInput);


        gridLayout_3->addLayout(verticalLayout_2, 0, 0, 1, 2);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        txtEncKey = new QLineEdit(tab);
        txtEncKey->setObjectName(QStringLiteral("txtEncKey"));
        QFont font1;
        font1.setFamily(QStringLiteral("Montserrat"));
        font1.setPointSize(11);
        txtEncKey->setFont(font1);

        horizontalLayout_6->addWidget(txtEncKey);

        btnEncript = new QPushButton(tab);
        btnEncript->setObjectName(QStringLiteral("btnEncript"));
        btnEncript->setFont(font);

        horizontalLayout_6->addWidget(btnEncript);


        gridLayout_3->addLayout(horizontalLayout_6, 1, 0, 1, 2);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        txtEncTextOutput = new QTextEdit(tab);
        txtEncTextOutput->setObjectName(QStringLiteral("txtEncTextOutput"));
        txtEncTextOutput->setEnabled(true);
        txtEncTextOutput->setFont(font);
        txtEncTextOutput->setReadOnly(true);

        verticalLayout_4->addWidget(txtEncTextOutput);


        gridLayout_3->addLayout(verticalLayout_4, 2, 0, 1, 2);

        tabWidget->addTab(tab, icon11, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        gridLayout_4 = new QGridLayout(tab_2);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        txtDecKey = new QLineEdit(tab_2);
        txtDecKey->setObjectName(QStringLiteral("txtDecKey"));
        txtDecKey->setFont(font1);

        horizontalLayout_7->addWidget(txtDecKey);

        btnDecript = new QPushButton(tab_2);
        btnDecript->setObjectName(QStringLiteral("btnDecript"));
        btnDecript->setFont(font);

        horizontalLayout_7->addWidget(btnDecript);


        gridLayout_4->addLayout(horizontalLayout_7, 1, 0, 1, 1);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        txtDecTextInput = new QTextEdit(tab_2);
        txtDecTextInput->setObjectName(QStringLiteral("txtDecTextInput"));
        txtDecTextInput->setFont(font);

        verticalLayout_3->addWidget(txtDecTextInput);


        gridLayout_4->addLayout(verticalLayout_3, 0, 0, 1, 1);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        txtDecTextOutput = new QTextEdit(tab_2);
        txtDecTextOutput->setObjectName(QStringLiteral("txtDecTextOutput"));
        txtDecTextOutput->setFont(font);
        txtDecTextOutput->setReadOnly(true);

        verticalLayout_5->addWidget(txtDecTextOutput);


        gridLayout_4->addLayout(verticalLayout_5, 2, 0, 1, 1);

        tabWidget->addTab(tab_2, icon12, QString());

        gridLayout->addWidget(tabWidget, 0, 1, 1, 1);

        EncryptedTestEditor->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(EncryptedTestEditor);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 713, 21));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        menuEdit = new QMenu(menuBar);
        menuEdit->setObjectName(QStringLiteral("menuEdit"));
        menuAbout = new QMenu(menuBar);
        menuAbout->setObjectName(QStringLiteral("menuAbout"));
        EncryptedTestEditor->setMenuBar(menuBar);
        mainToolBar = new QToolBar(EncryptedTestEditor);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        EncryptedTestEditor->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(EncryptedTestEditor);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        EncryptedTestEditor->setStatusBar(statusBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuEdit->menuAction());
        menuBar->addAction(menuAbout->menuAction());
        menuFile->addAction(actionNew);
        menuFile->addAction(actionOpenNormalText);
        menuFile->addAction(actionOpenEncryptedText);
        menuFile->addSeparator();
        menuFile->addAction(actionSaveNormalText);
        menuFile->addAction(actionSaveEncrypedText);
        menuFile->addSeparator();
        menuFile->addAction(actionPrintNormalText);
        menuFile->addAction(actionPrintEncrypedText_2);
        menuFile->addSeparator();
        menuFile->addAction(actionExit);
        menuEdit->addAction(actionEncryptText);
        menuEdit->addAction(actionDecryptText_2);
        menuEdit->addSeparator();
        menuEdit->addAction(actionCut);
        menuEdit->addAction(actionCopy);
        menuEdit->addAction(actionPaste);
        menuEdit->addSeparator();
        menuEdit->addAction(actionFonts);
        menuEdit->addAction(actionFontColor);
        menuEdit->addSeparator();
        menuEdit->addAction(actionUndo);
        menuEdit->addAction(actionRedo);
        menuEdit->addSeparator();
        menuEdit->addAction(actionClear);
        menuAbout->addAction(actionAbout);
        mainToolBar->addAction(actionNew);
        mainToolBar->addAction(actionOpenNormalText);
        mainToolBar->addAction(actionOpenEncryptedText);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionSaveNormalText);
        mainToolBar->addAction(actionSaveEncrypedText);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionEncryptText);
        mainToolBar->addAction(actionDecryptText_2);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionCut);
        mainToolBar->addAction(actionCopy);
        mainToolBar->addAction(actionPaste);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionFonts);
        mainToolBar->addAction(actionFontColor);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionUndo);
        mainToolBar->addAction(actionRedo);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionPrintNormalText);
        mainToolBar->addAction(actionPrintEncrypedText_2);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionClear);

        retranslateUi(EncryptedTestEditor);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(EncryptedTestEditor);
    } // setupUi

    void retranslateUi(QMainWindow *EncryptedTestEditor)
    {
        EncryptedTestEditor->setWindowTitle(QApplication::translate("EncryptedTestEditor", "Encrypted Text Editor", Q_NULLPTR));
        actionNew->setText(QApplication::translate("EncryptedTestEditor", "New", Q_NULLPTR));
        actionNew->setShortcut(QApplication::translate("EncryptedTestEditor", "Ctrl+N", Q_NULLPTR));
        actionClear->setText(QApplication::translate("EncryptedTestEditor", "Clear", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionClear->setToolTip(QApplication::translate("EncryptedTestEditor", "Clear", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionCopy->setText(QApplication::translate("EncryptedTestEditor", "Copy", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionCopy->setToolTip(QApplication::translate("EncryptedTestEditor", "Copy", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionCopy->setShortcut(QApplication::translate("EncryptedTestEditor", "Ctrl+Shift+C", Q_NULLPTR));
        actionPaste->setText(QApplication::translate("EncryptedTestEditor", "Paste", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionPaste->setToolTip(QApplication::translate("EncryptedTestEditor", "Paste", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionPaste->setShortcut(QApplication::translate("EncryptedTestEditor", "Ctrl+Shift+V", Q_NULLPTR));
        actionCut->setText(QApplication::translate("EncryptedTestEditor", "Cut", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionCut->setToolTip(QApplication::translate("EncryptedTestEditor", "Cut", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionCut->setShortcut(QApplication::translate("EncryptedTestEditor", "Ctrl+Shift+X", Q_NULLPTR));
        actionOpenNormalText->setText(QApplication::translate("EncryptedTestEditor", "Open Normal Text", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionOpenNormalText->setToolTip(QApplication::translate("EncryptedTestEditor", "Open Normal Text", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionOpenEncryptedText->setText(QApplication::translate("EncryptedTestEditor", "Open Encrypted Text", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionOpenEncryptedText->setToolTip(QApplication::translate("EncryptedTestEditor", "Open Encrypted Text", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionSaveNormalText->setText(QApplication::translate("EncryptedTestEditor", "Save Normal Text", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionSaveNormalText->setToolTip(QApplication::translate("EncryptedTestEditor", "Save Normal Text", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionSaveEncrypedText->setText(QApplication::translate("EncryptedTestEditor", "Save Encryped Text", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionSaveEncrypedText->setToolTip(QApplication::translate("EncryptedTestEditor", "Save Encryped Text", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionExit->setText(QApplication::translate("EncryptedTestEditor", "Exit", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionExit->setToolTip(QApplication::translate("EncryptedTestEditor", "Exit", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionEncryptText->setText(QApplication::translate("EncryptedTestEditor", "Encrypt Text", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionEncryptText->setToolTip(QApplication::translate("EncryptedTestEditor", "Encrypt Text", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionDecryptText_2->setText(QApplication::translate("EncryptedTestEditor", "Decrypt Text", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionDecryptText_2->setToolTip(QApplication::translate("EncryptedTestEditor", "Decrypt Text", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionFonts->setText(QApplication::translate("EncryptedTestEditor", "Fonts", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionFonts->setToolTip(QApplication::translate("EncryptedTestEditor", "Fonts", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionFontColor->setText(QApplication::translate("EncryptedTestEditor", "Font Color", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionFontColor->setToolTip(QApplication::translate("EncryptedTestEditor", "Font Color", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionUndo->setText(QApplication::translate("EncryptedTestEditor", "Undo", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionUndo->setToolTip(QApplication::translate("EncryptedTestEditor", "Undo", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionUndo->setShortcut(QApplication::translate("EncryptedTestEditor", "Ctrl+Alt+Z", Q_NULLPTR));
        actionRedo->setText(QApplication::translate("EncryptedTestEditor", "Redo", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionRedo->setToolTip(QApplication::translate("EncryptedTestEditor", "Redo", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionRedo->setShortcut(QApplication::translate("EncryptedTestEditor", "Ctrl+Shift+Z", Q_NULLPTR));
        actionAbout->setText(QApplication::translate("EncryptedTestEditor", "About", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionAbout->setToolTip(QApplication::translate("EncryptedTestEditor", "About", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionPrintNormalText->setText(QApplication::translate("EncryptedTestEditor", "Print Normal Text", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionPrintNormalText->setToolTip(QApplication::translate("EncryptedTestEditor", "Print Normal Text", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionPrintNormalText->setShortcut(QApplication::translate("EncryptedTestEditor", "Ctrl+P", Q_NULLPTR));
        actionPrintEncrypedText_2->setText(QApplication::translate("EncryptedTestEditor", "Print Encryped Text", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionPrintEncrypedText_2->setToolTip(QApplication::translate("EncryptedTestEditor", "Print Encryped Text", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionPrintEncrypedText_2->setShortcut(QApplication::translate("EncryptedTestEditor", "Ctrl+Shift+P", Q_NULLPTR));
        txtEncTextInput->setPlaceholderText(QApplication::translate("EncryptedTestEditor", "Enter Yout Text Here", Q_NULLPTR));
        txtEncKey->setPlaceholderText(QApplication::translate("EncryptedTestEditor", "Enter Key Value In Here", Q_NULLPTR));
        btnEncript->setText(QApplication::translate("EncryptedTestEditor", "Encrypt", Q_NULLPTR));
        txtEncTextOutput->setPlaceholderText(QApplication::translate("EncryptedTestEditor", "Encrypted Text", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("EncryptedTestEditor", "Encrypt", Q_NULLPTR));
        txtDecKey->setPlaceholderText(QApplication::translate("EncryptedTestEditor", "Enter Key Value In Here", Q_NULLPTR));
        btnDecript->setText(QApplication::translate("EncryptedTestEditor", "Decrypt", Q_NULLPTR));
        txtDecTextInput->setPlaceholderText(QApplication::translate("EncryptedTestEditor", "Enter Encrypted Text", Q_NULLPTR));
        txtDecTextOutput->setPlaceholderText(QApplication::translate("EncryptedTestEditor", "Decrypted Text", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("EncryptedTestEditor", "Decrypt", Q_NULLPTR));
        menuFile->setTitle(QApplication::translate("EncryptedTestEditor", "File", Q_NULLPTR));
        menuEdit->setTitle(QApplication::translate("EncryptedTestEditor", "Edit", Q_NULLPTR));
        menuAbout->setTitle(QApplication::translate("EncryptedTestEditor", "About", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class EncryptedTestEditor: public Ui_EncryptedTestEditor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ENCRYPTEDTESTEDITOR_H
