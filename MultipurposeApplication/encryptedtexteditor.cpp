#include "encryptedtexteditor.h"
#include "ui_encryptedtexteditor.h"

EncryptedTextEditor::EncryptedTextEditor(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::EncryptedTextEditor)
{
    ui->setupUi(this);
}

EncryptedTextEditor::~EncryptedTextEditor()
{
    delete ui;
}
