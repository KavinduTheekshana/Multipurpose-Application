#ifndef ENCRYPTEDTESTEDITOR_H
#define ENCRYPTEDTESTEDITOR_H

#include <QMainWindow>
#include <QApplication>
#include <QMessageBox>
#include <QFile>
#include <QFileDialog>
#include <QTextStream>
#include <QFontDialog>
#include <QTextCursor>
#include <QtGui>

namespace Ui {
class EncryptedTestEditor;
}

class EncryptedTestEditor : public QMainWindow
{
    Q_OBJECT

public:
    explicit EncryptedTestEditor(QWidget *parent = 0);
    ~EncryptedTestEditor();

private slots:
    void on_actionExit_triggered();

    void on_actionAbout_triggered();

    void on_actionFonts_triggered();

    void on_actionFontColor_triggered();

    void on_actionClear_triggered();

    void on_btnEncript_clicked();

    void on_btnDecript_clicked();

    void on_actionNew_triggered();

    void on_actionSaveNormalText_triggered();

    void on_actionSaveEncrypedText_triggered();

    void on_actionOpenNormalText_triggered();

    void on_actionOpenEncryptedText_triggered();

    void on_actionEncryptText_triggered();

    void on_actionDecryptText_2_triggered();

    void on_actionUndo_triggered();

    void on_actionRedo_triggered();

    void on_actionCut_triggered();

    void on_actionCopy_triggered();

    void on_actionPaste_triggered();

private:
    Ui::EncryptedTestEditor *ui;
    QString file_path;
};

#endif // ENCRYPTEDTESTEDITOR_H
