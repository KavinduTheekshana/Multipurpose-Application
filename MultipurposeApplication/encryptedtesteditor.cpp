#include "encryptedtesteditor.h"
#include "ui_encryptedtesteditor.h"
#include "simplecrypt.h"
#include <QMessageBox>
#include <QFontDialog>
#include <QFont>
#include <QColorDialog>
#include <QColor>
#include <QPrinter>
#include <QPrintDialog>

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

void EncryptedTestEditor::on_actionExit_triggered()
{
    this->close();
}

void EncryptedTestEditor::on_actionAbout_triggered()
{
    QMessageBox::question(this,"About Text Encryption Program","Simple Encryption Example!");
}

void EncryptedTestEditor::on_actionFonts_triggered()
{
    bool ok;
    QFont font = QFontDialog::getFont(&ok, this);
    if (ok) {
        ui->txtDecKey->setFont(font);
        ui->txtDecTextInput->setFont(font);
        ui->txtDecTextOutput->setFont(font);

        ui->txtEncKey->setFont(font);
        ui->txtEncTextInput->setFont(font);
        ui->txtEncTextOutput->setFont(font);

    }else return;
}

void EncryptedTestEditor::on_actionFontColor_triggered()
{
    QColor color = QColorDialog::getColor(Qt::white,this,"Choose Color");
    if(color.isValid()){
        ui->txtDecTextInput->setTextColor(color);
        ui->txtDecTextOutput->setTextColor(color);

        ui->txtEncTextInput->setTextColor(color);
        ui->txtEncTextOutput->setTextColor(color);

    }
}

void EncryptedTestEditor::on_actionClear_triggered()
{
    ui->txtDecKey->setText("");
    ui->txtDecTextInput->setText("");
    ui->txtDecTextOutput->setText("");
    ui->txtEncKey->setText("");
    ui->txtEncTextInput->setText("");
    ui->txtEncTextOutput->setText("");
}

void EncryptedTestEditor::on_btnEncript_clicked()
{
    if(ui->txtEncKey->text() == "" || ui->txtEncTextInput->toPlainText() == ""){
    QMessageBox::warning(this,"Key Error!","Please enter a Key Value and Note it Down! or Enter a valid text in Input");
    }

    else {

    SimpleCrypt setEncryptionKey(ui->txtEncKey->text().toInt());
    QString encryptInput(ui->txtEncTextInput->toPlainText());

    QString encryptedOutput;

    encryptedOutput = setEncryptionKey.encryptToString(encryptInput);
    ui->txtEncTextOutput->setText(encryptedOutput);

     }
}

void EncryptedTestEditor::on_btnDecript_clicked()
{
    if(ui->txtDecKey->text() == "" || ui->txtDecTextInput->toPlainText() == ""){
        QMessageBox::warning(this,"Key Error!","Please enter a Key Value or Enter valid text in Encrypted text box.");
    }

    else{
        SimpleCrypt setEncryptionKey(ui->txtDecKey->text().toInt());
        QString decryptedString = setEncryptionKey.decryptToString(ui->txtDecTextInput->toPlainText());
        ui->txtDecTextOutput->setText(decryptedString);
    }
}

void EncryptedTestEditor::on_actionNew_triggered()
{
    file_path="";
    ui->txtDecKey->setText("");
    ui->txtDecTextInput->setText("");
    ui->txtDecTextOutput->setText("");

    ui->txtEncKey->setText("");
    ui->txtEncTextInput->setText("");
    ui->txtEncTextOutput->setText("");
}

void EncryptedTestEditor::on_actionSaveNormalText_triggered()
{
    if(ui->tabWidget->currentIndex()==0){
        if (ui->txtEncTextInput->toPlainText()=="") {
            QMessageBox::warning(this," Key Error","Text Box Is Empty Please Fill The Text Box and Try Again");
        } else {
            QString file_name = QFileDialog::getSaveFileName(this,"Save Normal Text");
            QFile file (file_name);
            file_path = file_name;
            if(!file.open(QFile::WriteOnly | QFile::Text)){

                return;
             }
             else{
               QTextStream writeData(&file);
               QString fileText = ui->txtEncTextInput->toPlainText();
               writeData << fileText;
               file.flush();
               file.close();
             }
        }

    }else if (ui->tabWidget->currentIndex()==1) {
        if (ui->txtDecTextOutput->toPlainText()=="") {
            QMessageBox::warning(this," Key Error","Text Box Is Empty Please Fill The Text Box and Try Again");
        } else {
            QString file_name = QFileDialog::getSaveFileName(this,"Save Normal Text");
            QFile file (file_name);
            file_path = file_name;
            if(!file.open(QFile::WriteOnly | QFile::Text)){

                return;
             }
             else{
               QTextStream writeData(&file);
               QString fileText = ui->txtDecTextOutput->toPlainText();
               writeData << fileText;
               file.flush();
               file.close();
             }
        }
    }

}

void EncryptedTestEditor::on_actionSaveEncrypedText_triggered()
{
    if(ui->tabWidget->currentIndex()==0){
        if (ui->txtEncTextOutput->toPlainText()=="") {
            QMessageBox::warning(this," Key Error","Text Box Is Empty Please Fill The Text Box and Try Again");
        } else {
            QString file_name = QFileDialog::getSaveFileName(this,"Save Encryped Text");
            QFile file (file_name);
            file_path = file_name;
            if(!file.open(QFile::WriteOnly | QFile::Text)){

                return;
             }
             else{
               QTextStream writeData(&file);
               QString fileText = ui->txtEncTextOutput->toPlainText();
               writeData << fileText;
               file.flush();
               file.close();
             }
        }

    }else if (ui->tabWidget->currentIndex()==1) {
        if (ui->txtDecTextInput->toPlainText()=="") {
            QMessageBox::warning(this," Key Error","Text Box Is Empty Please Fill The Text Box and Try Again");
        } else {
            QString file_name = QFileDialog::getSaveFileName(this,"Save Encryped Text");
            QFile file (file_name);
            file_path = file_name;
            if(!file.open(QFile::WriteOnly | QFile::Text)){

                return;
             }
             else{
               QTextStream writeData(&file);
               QString fileText = ui->txtDecTextInput->toPlainText();
               writeData << fileText;
               file.flush();
               file.close();
             }
        }
    }
}

void EncryptedTestEditor::on_actionOpenNormalText_triggered()
{
    if(ui->tabWidget->currentIndex()==0){
        QString file_name = QFileDialog::getOpenFileName(this,"Open a file");
        QFile file (file_name);
        file_path=file_name;

         if(!file.open(QFile::ReadOnly | QFile::Text)){
           QMessageBox::critical(this,"Error Opening File","File Cannot be Opened!");
           return;
         }
         else{
           QTextStream inputData(&file);
           QString fileText = inputData.readAll();
           ui->txtEncTextInput->setHtml(fileText);
           file.close();
         }
    }else {
        QMessageBox::warning(this," Incorrect Tab Error","Please Open Encrypt Tab And Try Again.");
    }

}

void EncryptedTestEditor::on_actionOpenEncryptedText_triggered()
{
    if(ui->tabWidget->currentIndex()==1){
        QString file_name = QFileDialog::getOpenFileName(this,"Open a file");
        QFile file (file_name);
        file_path=file_name;

         if(!file.open(QFile::ReadOnly | QFile::Text)){
           QMessageBox::critical(this,"Error Opening File","File Cannot be Opened!");
           return;
         }
         else{
           QTextStream inputData(&file);
           QString fileText = inputData.readAll();
           ui->txtDecTextInput->setHtml(fileText);
           file.close();
         }
    }else {
        QMessageBox::warning(this," Incorrect Tab Error","Please Open Decrypt Tab And Try Again.");
    }
}

void EncryptedTestEditor::on_actionEncryptText_triggered()
{
    if(ui->tabWidget->currentIndex()==0){
        if(ui->txtEncKey->text() == "" || ui->txtEncTextInput->toPlainText() == ""){
        QMessageBox::warning(this,"Key Error!","Please enter a Key Value and Note it Down! or Enter a valid text in Input");
        }

        else {

        SimpleCrypt setEncryptionKey(ui->txtEncKey->text().toInt());
        QString encryptInput(ui->txtEncTextInput->toPlainText());

        QString encryptedOutput;

        encryptedOutput = setEncryptionKey.encryptToString(encryptInput);
        ui->txtEncTextOutput->setText(encryptedOutput);

         }
    }else {
        QMessageBox::warning(this," Incorrect Tab Error","Please Open Encrypt Tab And Fill Data And Try Again");
    }

}

void EncryptedTestEditor::on_actionDecryptText_2_triggered()
{
    if(ui->tabWidget->currentIndex()==1){
        if(ui->txtDecKey->text() == "" || ui->txtDecTextInput->toPlainText() == ""){
            QMessageBox::warning(this,"Key Error!","Please enter a Key Value or Enter valid text in Encrypted text box.");
        }

        else{
            SimpleCrypt setEncryptionKey(ui->txtDecKey->text().toInt());
            QString decryptedString = setEncryptionKey.decryptToString(ui->txtDecTextInput->toPlainText());
            ui->txtDecTextOutput->setText(decryptedString);
        }
    }else {
        QMessageBox::warning(this," Incorrect Tab Error","Please Open Decrypt Tab And Fill Data And Try Again");
    }
}

void EncryptedTestEditor::on_actionUndo_triggered()
{
    if(ui->tabWidget->currentIndex()==0){
        ui->txtEncTextInput->undo();
    }else if (ui->tabWidget->currentIndex()==1) {
        ui->txtDecTextInput->undo();
    }

}

void EncryptedTestEditor::on_actionRedo_triggered()
{
    if(ui->tabWidget->currentIndex()==0){
        ui->txtEncTextInput->redo();
    }else if (ui->tabWidget->currentIndex()==1) {
        ui->txtDecTextInput->redo();
    }
}

void EncryptedTestEditor::on_actionCut_triggered()
{
    if(ui->tabWidget->currentIndex()==0){
        ui->txtEncTextInput->selectAll();
        ui->txtEncTextInput->cut();
    }else if (ui->tabWidget->currentIndex()==1) {
        ui->txtDecTextInput->selectAll();
        ui->txtDecTextInput->cut();
    }
}

void EncryptedTestEditor::on_actionCopy_triggered()
{
    if(ui->tabWidget->currentIndex()==0){
        ui->txtEncTextInput->selectAll();
        ui->txtEncTextInput->copy();
    }else if (ui->tabWidget->currentIndex()==1) {
        ui->txtDecTextInput->selectAll();
        ui->txtDecTextInput->copy();
    }
}

void EncryptedTestEditor::on_actionPaste_triggered()
{
    if(ui->tabWidget->currentIndex()==0){
        ui->txtEncTextInput->selectAll();
        ui->txtEncTextInput->paste();
    }else if (ui->tabWidget->currentIndex()==1) {
        ui->txtDecTextInput->selectAll();
        ui->txtDecTextInput->paste();
    }
}



void EncryptedTestEditor::on_actionPrintNormalText_triggered()
{
    if(ui->tabWidget->currentIndex()==0){
        if(ui->txtEncTextInput->toPlainText()==""){
            QMessageBox::warning(this," Input Error","Please Fill The Normal Text Input Box");
        }else {
            QPrinter printer;
            printer.setPrinterName("Desierd Printer Name");
            QPrintDialog dialog(&printer,this);
            if(dialog.exec()==QDialog::Rejected) return;
            ui->txtEncTextInput->print(&printer);
        }

    }else if (ui->tabWidget->currentIndex()==1) {
        if(ui->txtDecTextOutput->toPlainText()==""){
            QMessageBox::warning(this," Input Error","Please Decrypt Your text First");
        }else {
            QPrinter printer;
            printer.setPrinterName("Desierd Printer Name");
            QPrintDialog dialog(&printer,this);
            if(dialog.exec()==QDialog::Rejected) return;
            ui->txtDecTextOutput->print(&printer);
        }
    }

}

void EncryptedTestEditor::on_actionPrintEncrypedText_2_triggered()
{
    if(ui->tabWidget->currentIndex()==0){
        if(ui->txtEncTextOutput->toPlainText()==""){
            QMessageBox::warning(this," Input Error","Please Encrypt Your text First");
        }else {
            QPrinter printer;
            printer.setPrinterName("Desierd Printer Name");
            QPrintDialog dialog(&printer,this);
            if(dialog.exec()==QDialog::Rejected) return;
            ui->txtEncTextOutput->print(&printer);
        }

    }else if (ui->tabWidget->currentIndex()==1) {
        if(ui->txtDecTextInput->toPlainText()==""){
            QMessageBox::warning(this," Input Error","Please Fill The Encrypted Text Input Box");
        }else {
            QPrinter printer;
            printer.setPrinterName("Desierd Printer Name");
            QPrintDialog dialog(&printer,this);
            if(dialog.exec()==QDialog::Rejected) return;
            ui->txtDecTextInput->print(&printer);
        }
    }
}
