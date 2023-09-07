#ifndef GESTION_ACTIVITE_H
#define GESTION_ACTIVITE_H

#include <QDialog>
#include "activite.h"
#include <QMainWindow>
#include <QMainWindow>
#include <QDebug>
#include <QDialog>
#include <QMainWindow>
#include <QMediaPlayer>
#include <QSound>
#include <QMainWindow>
#include <QPainter>
#include <QPrinter>
#include <QPrintPreviewDialog>
#include <QTextEdit>
#include "smtp.h"
#include <QtCharts/QChartView>
#include <QtCharts/QBarSeries>
#include <QtCharts/QBarSet>
#include <QtCharts/QLegend>
#include <QtCharts/QBarCategoryAxis>
#include <QtCharts/QHorizontalStackedBarSeries>
#include <QtCharts/QLineSeries>
#include <QtCharts/QCategoryAxis>
#include <QtCharts/QPieSeries>
#include <QtCharts/QPieSlice>
#include <QtNetwork/QAbstractSocket>
#include <QtNetwork/QSslSocket>
#include <QString>
#include <QTextStream>
#include <QDebug>
#include <QtWidgets/QMessageBox>
#include <QByteArray>
#include <QFile>
#include <QFileInfo>
#include "widget.h"
namespace Ui {
class gestion_activite;
}

class gestion_activite : public QDialog
{
    Q_OBJECT

public:
    explicit gestion_activite(QWidget *parent = nullptr);
    ~gestion_activite();

private slots:
    void on_pb_ajouter_clicked();

    void on_pushButton_modifier_clicked();

    void on_pushButton_Afficher_clicked();

    void on_pushButton_supprimer_clicked();

    void on_statistique_clicked();

    void on_comboBox_tri_activated(const QString &arg1);
    void on_lineEdit_recherche_textChanged(const QString &arg1);
    void on_qrcodegen_clicked();

    void on_PDF_clicked();



    void on_tableView_doubleClicked(const QModelIndex &index);

    void on_CHATBOX_clicked();

private:
    Ui::gestion_activite *ui;
    Activite A;
    QStringList files;

      QString mnomemp="localhost";
      quint16 mport=3333;
      QTcpSocket *mSocket;



};

#endif
