#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

class QVideoWidget;
class QMediaPlayer;

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_playButton_clicked();

private:
    void onPlayButtonCLicked();

    Ui::MainWindow *ui;
    QVideoWidget *m_videoWidget;
    QMediaPlayer *m_player;
};

#endif // MAINWINDOW_H
