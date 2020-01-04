#ifndef ENCRYPTEDTESTEDITOR_H
#define ENCRYPTEDTESTEDITOR_H

#include <QMainWindow>

namespace Ui {
class EncryptedTestEditor;
}

class EncryptedTestEditor : public QMainWindow
{
    Q_OBJECT

public:
    explicit EncryptedTestEditor(QWidget *parent = 0);
    ~EncryptedTestEditor();

private:
    Ui::EncryptedTestEditor *ui;
};

#endif // ENCRYPTEDTESTEDITOR_H
