#ifndef IMPORTCONFIG_H
#define IMPORTCONFIG_H

#include <QtGui>
#include <QFileDialog>
#include <QProcess>
#include <QShowEvent>

namespace Ui {
    class ImportConfig;
}

class ImportConfig : public QDialog {
    Q_OBJECT
public:    
    ImportConfig(QWidget *parent=0);

protected:
    void changeEvent(QEvent *e);
    void showEvent (QShowEvent *e);

private:
    Ui::ImportConfig *m_ui;   

private slots:
    void on_cmdOpenOvpnFile_clicked();
    void on_cmdImport_clicked();
    void on_rbSaveAsName_toggled(bool checked);
    void on_cmdCancel_clicked();
    void on_cmdOpenCryptFile_clicked();
    void showProcessError (QProcess::ProcessError err);
};

#endif // IMPORTCONFIG_H

