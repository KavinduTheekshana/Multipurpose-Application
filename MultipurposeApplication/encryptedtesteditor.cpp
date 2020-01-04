#include "encryptedtesteditor.h"
#include "ui_encryptedtesteditor.h"

EncryptedTestEditor::EncryptedTestEditor(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::EncryptedTestEditor)
{
    ui->setupUi(this);
}

EncryptedTestEditor::~EncryptedTestEditor()
{
    delete ui;
}
