#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_dupfishkiller.h"
#include "info.h"

class DupfishKiller : public QMainWindow
{
    Q_OBJECT

    Ui::DupfishKillerClass ui;

    Info info;
    bool _running = false;

    void init();
    void updateForm();

private slots:
    void changeFolder();
    void startScan();
    void stopScan();


public:
    DupfishKiller(QWidget *parent = Q_NULLPTR);




};
