#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QtCore>
#include <QtGui>
#include <QGraphicsEllipseItem>
#include <QGraphicsRectItem>
#include <QGraphicsScene>
#include <QGraphicsPathItem>
#include <QLabel>
#include <QPolygonF>
#include <QPixmap>
#include <QGraphicsTextItem>
#include <QGraphicsEllipseItem>
#include <QGraphicsPathItem>

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();

private:
    Ui::Widget *ui;
    QGraphicsScene *scena;
    QGraphicsLineItem *y_osa_1;
    QGraphicsLineItem *y_osa_2;
    QGraphicsLineItem *x_osa_1;
    QGraphicsLineItem *x_osa_2;

    QGraphicsLineItem *strelica1_1;
    QGraphicsLineItem *strelica1_2;
    QGraphicsLineItem *strelica2_1;
    QGraphicsLineItem *strelica2_2;

    QGraphicsTextItem *tekst;

    QGraphicsLineItem *podiok1;
    QGraphicsLineItem *podiok2;
    QGraphicsLineItem *podiok3;
    QGraphicsLineItem *podiok4;
    QGraphicsLineItem *podiok5;
    QGraphicsLineItem *podiok6;
    QGraphicsLineItem *podiok7;

    QGraphicsTextItem *tekst1;
    QGraphicsTextItem *tekst2;
    QGraphicsTextItem *tekst3;
    QGraphicsTextItem *tekst4;
    QGraphicsTextItem *tekst5;
    QGraphicsTextItem *tekst6;

    QGraphicsTextItem *mjesec;
    QGraphicsTextItem *slucajevi;

    QGraphicsTextItem *juli2020;
    QGraphicsTextItem *august2020;
    QGraphicsTextItem *septembar2020;
    QGraphicsTextItem *oktobar2020;
    QGraphicsTextItem *novembar2020;
    QGraphicsTextItem *decembar2020;
    QGraphicsTextItem *januar2021;
    QGraphicsTextItem *februar2021;
    QGraphicsTextItem *mart2021;
    QGraphicsTextItem *april2021;
    QGraphicsTextItem *maj2021;

    QGraphicsTextItem *godina2020;
    QGraphicsTextItem *godina2021;

    QGraphicsLineItem *juni_l;
    QGraphicsLineItem *juli_l;
    QGraphicsLineItem *august_l;
    QGraphicsLineItem *septembar_l;
    QGraphicsLineItem *oktobar_l;
    QGraphicsLineItem *novembar_l;
    QGraphicsLineItem *decembar_l;
    QGraphicsLineItem *januar_l;
    QGraphicsLineItem *februar_l;
    QGraphicsLineItem *mart_l;
    QGraphicsLineItem *april_l;
    QGraphicsLineItem *maj_l;

    QGraphicsEllipseItem *juni_k;
    QGraphicsEllipseItem *juli_k;
    QGraphicsEllipseItem *august_k;
    QGraphicsEllipseItem *septembar_k;
    QGraphicsEllipseItem *oktobar_k;
    QGraphicsEllipseItem *novembar_k;
    QGraphicsEllipseItem *decembar_k;
    QGraphicsEllipseItem *januar_k;
    QGraphicsEllipseItem *februar_k;
    QGraphicsEllipseItem *mart_k;
    QGraphicsEllipseItem *april_k;
    QGraphicsEllipseItem *maj_k;

    QGraphicsTextItem *juli2020_s;
    QGraphicsTextItem *august2020_s;
    QGraphicsTextItem *septembar2020_s;
    QGraphicsTextItem *oktobar2020_s;
    QGraphicsTextItem *novembar2020_s;
    QGraphicsTextItem *decembar2020_s;
    QGraphicsTextItem *januar2021_s;
    QGraphicsTextItem *februar2021_s;
    QGraphicsTextItem *mart2021_s;
    QGraphicsTextItem *april2021_s;
    QGraphicsTextItem *maj2021_s;

    QGraphicsPathItem *graf_p_i;

};

#endif // WIDGET_H
