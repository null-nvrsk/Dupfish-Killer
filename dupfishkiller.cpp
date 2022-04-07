#include "dupfishkiller.h"
#include <QFileDialog>
#include <QMessageBox>

DupfishKiller::DupfishKiller(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);

    init();
}

void DupfishKiller::changeFolder()
{
    //QMessageBox::information(this, "Dialog", "Change folder");
    QFileDialog dialog(this);
    dialog.setFileMode(QFileDialog::Directory);

    QString dir = QFileDialog::getExistingDirectory(this, tr("Open Directory"),
        QDir::currentPath(),
        QFileDialog::ShowDirsOnly
        | QFileDialog::DontResolveSymlinks);

    if (!dir.isEmpty())
    {
        ui.leDirPath->setText(dir);
    }
}

void DupfishKiller::startScan()
{
    _running = true;

    updateForm();
    QMessageBox::information(this, "Start", "Scan started...");

}

void DupfishKiller::stopScan()
{
    _running = false;

    updateForm();
    QMessageBox::information(this, "Stop", "Scan stoped");
}

void DupfishKiller::init()
{
    // TODO: загрузка из ini-файла

    // связываем сигналы/слоты
    connect(ui.btnOpenFileDialog, &QPushButton::clicked, this, &DupfishKiller::changeFolder);
    connect(ui.btnStart, &QPushButton::clicked, this, &DupfishKiller::startScan);
    connect(ui.btnStop, &QPushButton::clicked, this, &DupfishKiller::stopScan);

    // Обнуляем данные
    info.clear();
    updateForm();
}

void DupfishKiller::updateForm()
{
    if (_running)
    {
        ui.btnOpenFileDialog->setEnabled(false);
        ui.leDirPath->setEnabled(false);

        ui.cbNewOnly->setEnabled(false);
        ui.cbSubdir->setEnabled(false);

        ui.btnStart->setEnabled(false);
        ui.btnStop->setEnabled(true);
    }
    else
    {
        ui.btnOpenFileDialog->setEnabled(true);
        ui.leDirPath->setEnabled(true);

        ui.cbNewOnly->setEnabled(true);
        ui.cbSubdir->setEnabled(true);

        ui.btnStart->setEnabled(true);
        ui.btnStop->setEnabled(false);
    }

    // Update info
    ui.lblFilesTotal->setText(QString::number(info.filesTotal()));
    ui.lblFilesSaved->setText(QString::number(info.filesSaved()));
    ui.lblFilesDeleted->setText(QString::number(info.filesDeleted()));

    ui.lblSizeTotal->setText(QString::number(info.sizeTotal()));
    ui.lblSizeSaved->setText(QString::number(info.sizeSaved()));
    ui.lblSizeDeleted->setText(QString::number(info.sizeDeleted()));
}
