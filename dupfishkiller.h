#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_dupfishkiller.h"

class DupfishKiller : public QMainWindow
{
    Q_OBJECT

public:
    DupfishKiller(QWidget *parent = Q_NULLPTR);

private:
    Ui::DupfishKillerClass ui;
};
