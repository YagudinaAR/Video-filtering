#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QMediaPlayer>
#include <QMediaPlaylist>
#include <QVideoWidget>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    m_videoWidget = new QVideoWidget(this);
    ui->gridLayout->addWidget(m_videoWidget);
    m_player = new QMediaPlayer(m_videoWidget);
    m_player->setVideoOutput(m_videoWidget);

    connect(ui->pushButton, &QPushButton::clicked, this, &MainWindow::onPlayButtonCLicked);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::onPlayButtonCLicked()
{
    m_player->setMedia(QUrl::fromLocalFile("C:/Users/Asus X553Sa/Downloads/VID_20190830_225940.mp4"));
    m_player->play();
}
