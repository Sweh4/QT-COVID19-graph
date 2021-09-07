#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    scena=new QGraphicsScene(this);
    scena->setSceneRect(-10, -280, 20, 80);
    scena->setBackgroundBrush(Qt::gray);

    ui->graphicsView->setScene(scena);

    QPen crna_olovka(Qt::black);
    crna_olovka.setWidth(3);
    QPen zuta_olovka(Qt::yellow);
    zuta_olovka.setWidth(3);
    QPen zelena_olovka(Qt::darkGreen);
    zelena_olovka.setWidth(3);
    QPen crna_olovka3(Qt::black);
    crna_olovka3.setWidth(1.5);

    //koordinatni sistem i strelice
    x_osa_1=scena->addLine(0,0,385,0,crna_olovka);
    x_osa_2=scena->addLine(0,0,-385,0,crna_olovka);
    y_osa_1=scena->addLine(0,0,0,370,crna_olovka);
    y_osa_2=scena->addLine(0,0,0,-525,crna_olovka);

    strelica1_1=scena->addLine(385,0,350,20,crna_olovka);
    strelica1_2=scena->addLine(350,-20,385,0,crna_olovka);

    strelica2_1=scena->addLine(0,-525,20,-490,crna_olovka);
    strelica2_2=scena->addLine(0,-525,-20,-490,crna_olovka);

    //zastava
    QPixmap *mPix = new QPixmap(250,150);
    QGraphicsPixmapItem* zastava(scena->addPixmap(*mPix));
    QPainter *zastava_p = new QPainter(mPix);

    QPen crna_olovka2(Qt::black);
    crna_olovka2.setWidth(2);
    QBrush crvena_cetka(Qt::red);
    QBrush zelena_cetka(Qt::darkGreen,Qt::Dense5Pattern);

    zastava_p->setBrush(crvena_cetka);
    zastava_p->drawRect(0,0,249,50);

    zastava_p->setBrush(Qt::yellow);
    zastava_p->drawRect(0,50,249,50);

    zastava_p->setBrush(Qt::darkGreen);
    zastava_p->drawRect(0,100,249,49);

    zastava_p->setPen(crna_olovka2);

    QPainterPath zvijezda;
    zvijezda.moveTo(125,50);
    zvijezda.lineTo(120,70);
    zvijezda.lineTo(100,70);
    zvijezda.lineTo(117,80);
    zvijezda.lineTo(110,100);
    zvijezda.lineTo(125,85);

    zvijezda.moveTo(125,50);
    zvijezda.lineTo(130,70);
    zvijezda.lineTo(150,70);
    zvijezda.lineTo(133,80);
    zvijezda.lineTo(140,100);
    zvijezda.lineTo(125,85);

    zastava_p->drawPath(zvijezda);
    zastava_p->fillPath(zvijezda,Qt::black);

    zastava->setPixmap(*mPix);
    zastava->setPos(-385,-525);

    QGraphicsTextItem *tekst= new QGraphicsTextItem("Šejla Šaković");
    tekst->setFont(QFont("Times New Roman",16,QFont::Bold));
    tekst->setDefaultTextColor(Qt::red);
    tekst->setPos(-340,-378);
    scena->addItem(tekst);

    //podioci za slučajeve
    podiok1=scena->addLine(10,-100,-10,-100,crna_olovka);
    podiok2=scena->addLine(10,-200,-10,-200,crna_olovka);
    podiok3=scena->addLine(10,-300,-10,-300,crna_olovka);
    podiok4=scena->addLine(10,-400,-10,-400,crna_olovka);
    podiok5=scena->addLine(10,-500,-10,-500,crna_olovka);

    //Tekst slučajevi, mjesec i godina
    QGraphicsTextItem *slucajevi= new QGraphicsTextItem("Slučajevi");
    slucajevi->setFont(QFont("Times New Roman",10,QFont::Bold));
    slucajevi->setDefaultTextColor(Qt::yellow);
    slucajevi->setPos(25,-520);
    scena->addItem(slucajevi);

    QGraphicsTextItem *mjesec= new QGraphicsTextItem("Mjesec");
    mjesec->setFont(QFont("Times New Roman",10,QFont::Bold));
    mjesec->setDefaultTextColor(Qt::yellow);
    mjesec->setPos(320,-25);
    scena->addItem(mjesec);

    //godina
    QGraphicsTextItem *godina2020= new QGraphicsTextItem("2020");
    godina2020->setFont(QFont("Arial",16));
    godina2020->setDefaultTextColor(Qt::yellow);
    godina2020->setPos(-240,15);
    scena->addItem(godina2020);

    QGraphicsTextItem *godina2021= new QGraphicsTextItem("2021");
    godina2021->setFont(QFont("Arial",16));
    godina2021->setDefaultTextColor(Qt::yellow);
    godina2021->setPos(160,15);
    scena->addItem(godina2021);

    //Mjeseci
    QGraphicsTextItem *decembar2020= new QGraphicsTextItem("Dec");
    decembar2020->setFont(QFont("Arial",10));
    decembar2020->setDefaultTextColor(Qt::yellow);
    decembar2020->setPos(-50,0);
    scena->addItem(decembar2020);

    QGraphicsTextItem *novembar2020= new QGraphicsTextItem("Nov");
    novembar2020->setFont(QFont("Arial",10));
    novembar2020->setDefaultTextColor(Qt::yellow);
    novembar2020->setPos(-115,0);
    scena->addItem(novembar2020);

    QGraphicsTextItem *oktobar2020= new QGraphicsTextItem("Okt");
    oktobar2020->setFont(QFont("Arial",10));
    oktobar2020->setDefaultTextColor(Qt::yellow);
    oktobar2020->setPos(-175,0);
    scena->addItem(oktobar2020);

    QGraphicsTextItem *septembar2020= new QGraphicsTextItem("Sep");
    septembar2020->setFont(QFont("Arial",10));
    septembar2020->setDefaultTextColor(Qt::yellow);
    septembar2020->setPos(-240,0);
    scena->addItem(septembar2020);

    QGraphicsTextItem *august2020= new QGraphicsTextItem("Aug");
    august2020->setFont(QFont("Arial",10));
    august2020->setDefaultTextColor(Qt::yellow);
    august2020->setPos(-305,0);
    scena->addItem(august2020);

    QGraphicsTextItem *juli2020= new QGraphicsTextItem("Jul");
    juli2020->setFont(QFont("Arial",10));
    juli2020->setDefaultTextColor(Qt::yellow);
    juli2020->setPos(-370,0);
    scena->addItem(juli2020);


    QGraphicsTextItem *januar2021= new QGraphicsTextItem("Jan");
    januar2021->setFont(QFont("Arial",10));
    januar2021->setDefaultTextColor(Qt::yellow);
    januar2021->setPos(15,0);
    scena->addItem(januar2021);

    QGraphicsTextItem *februar2021= new QGraphicsTextItem("Feb");
    februar2021->setFont(QFont("Arial",10));
    februar2021->setDefaultTextColor(Qt::yellow);
    februar2021->setPos(80,0);
    scena->addItem(februar2021);

    QGraphicsTextItem *mart2021= new QGraphicsTextItem("Mar");
    mart2021->setFont(QFont("Arial",10));
    mart2021->setDefaultTextColor(Qt::yellow);
    mart2021->setPos(145,0);
    scena->addItem(mart2021);

    QGraphicsTextItem *april2021= new QGraphicsTextItem("Apr");
    april2021->setFont(QFont("Arial",10));
    april2021->setDefaultTextColor(Qt::yellow);
    april2021->setPos(205,0);
    scena->addItem(april2021);

    QGraphicsTextItem *maj2021= new QGraphicsTextItem("Maj");
    maj2021->setFont(QFont("Arial",10));
    maj2021->setDefaultTextColor(Qt::yellow);
    maj2021->setPos(265,0);
    scena->addItem(maj2021);

    //spajanje tačaka grafa
    QPolygonF graf;
    graf << QPointF(-375,0) << QPointF(-375,-188.88) << QPointF(-320,-287.34) << QPointF(-260,-145.68) << QPointF(-190,-36.48) << QPointF(-125,-27.22)
    << QPointF(-60,-70.86) << QPointF(0,-62.08) << QPointF(60,-239.28) << QPointF(125,-340.62) << QPointF(185,-125.28) << QPointF(250,-37.76) << QPointF(310,-12.84)
    << QPointF(310,0);
    scena->addPolygon(graf);

    QPainterPath graf_path;
    graf_path.addPolygon(graf);
    graf_p_i=scena->addPath(graf_path,zelena_olovka,zelena_cetka);

    //Broj slucajeva na podiocima
    QGraphicsTextItem *tekst1= new QGraphicsTextItem("0");
    tekst1->setDefaultTextColor(Qt::white);
    tekst1->setPos(-15,-20);
    scena->addItem(tekst1);

    QGraphicsTextItem *tekst2= new QGraphicsTextItem("5 000");
    tekst2->setDefaultTextColor(Qt::white);
    tekst2->setPos(-20,-120);
    scena->addItem(tekst2);

    QGraphicsTextItem *tekst3= new QGraphicsTextItem("10 000");
    tekst3->setDefaultTextColor(Qt::white);
    tekst3->setPos(-20,-220);
    scena->addItem(tekst3);

    QGraphicsTextItem *tekst4= new QGraphicsTextItem("15 000");
    tekst4->setDefaultTextColor(Qt::white);
    tekst4->setPos(-20,-320);
    scena->addItem(tekst4);

    QGraphicsTextItem *tekst5= new QGraphicsTextItem("20 000");
    tekst5->setDefaultTextColor(Qt::white);
    tekst5->setPos(-20,-420);
    scena->addItem(tekst5);

    QGraphicsTextItem *tekst6= new QGraphicsTextItem("25 000");
    tekst6->setDefaultTextColor(Qt::white);
    tekst6->setPos(-20,-520);
    scena->addItem(tekst6);

    //linije histograma
    juni_l=scena->addLine(-375,-188.88,-375,0,zuta_olovka);
    juli_l=scena->addLine(-320,-287.34,-320,0,zuta_olovka);
    august_l=scena->addLine(-255,-145.68,-255,0,zuta_olovka);
    septembar_l=scena->addLine(-190,-36.48,-190,0,zuta_olovka);
    oktobar_l=scena->addLine(-125,-27.22,-125,0,zuta_olovka);
    novembar_l=scena->addLine(-60,-70.86,-60,0,zuta_olovka);
    decembar_l=scena->addLine(-0,-62.08,-0,0,zuta_olovka);
    januar_l=scena->addLine(60,-239.28,60,0,zuta_olovka);
    februar_l=scena->addLine(125,-340.62,125,0,zuta_olovka);
    mart_l=scena->addLine(190,-125.28,190,0,zuta_olovka);
    april_l=scena->addLine(250,-37.76,250,0,zuta_olovka);
    maj_l=scena->addLine(310,-12.84,310,0,zuta_olovka);


    //vrhovi - histogram
    juni_k=scena->addEllipse(-385,-200,20,20,crna_olovka3,crvena_cetka);
    juli_k=scena->addEllipse(-330,-300,20,20,crna_olovka3,crvena_cetka);
    august_k=scena->addEllipse(-265,-157,20,20,crna_olovka3,crvena_cetka);
    septembar_k=scena->addEllipse(-200,-50,20,20,crna_olovka3,crvena_cetka);
    oktobar_k=scena->addEllipse(-135,-40,20,20,crna_olovka3,crvena_cetka);
    novembar_k=scena->addEllipse(-70,-82,20,20,crna_olovka3,crvena_cetka);
    decembar_k=scena->addEllipse(-10,-73,20,20,crna_olovka3,crvena_cetka);
    januar_k=scena->addEllipse(50,-251,20,20,crna_olovka3,crvena_cetka);
    februar_k=scena->addEllipse(115,-352,20,20,crna_olovka3,crvena_cetka);
    mart_k=scena->addEllipse(180,-137,20,20,crna_olovka3,crvena_cetka);
    april_k=scena->addEllipse(240,-50,20,20,crna_olovka3,crvena_cetka);
    maj_k=scena->addEllipse(300,-27,20,20,crna_olovka3,crvena_cetka);

    //slucajevi
    QGraphicsTextItem *juli2020_s= new QGraphicsTextItem("9444");
    juli2020_s->setFont(QFont("Arial",10));
    juli2020_s->setDefaultTextColor(Qt::yellow);
    juli2020_s->setPos(-390,-225);
    scena->addItem(juli2020_s);

    QGraphicsTextItem *juni2020_s= new QGraphicsTextItem("14367");
    juni2020_s->setFont(QFont("Arial",10));
    juni2020_s->setDefaultTextColor(Qt::yellow);
    juni2020_s->setPos(-342,-323);
    scena->addItem(juni2020_s);

    QGraphicsTextItem *august2020_s= new QGraphicsTextItem("7284");
    august2020_s->setFont(QFont("Arial",10));
    august2020_s->setDefaultTextColor(Qt::yellow);
    august2020_s->setPos(-275,-180);
    scena->addItem(august2020_s);

    QGraphicsTextItem *septembar2020_s= new QGraphicsTextItem("1824");
    septembar2020_s->setFont(QFont("Arial",10));
    septembar2020_s->setDefaultTextColor(Qt::yellow);
    septembar2020_s->setPos(-210,-75);
    scena->addItem(septembar2020_s);

    QGraphicsTextItem *oktobar2020_s= new QGraphicsTextItem("1361");
    oktobar2020_s->setFont(QFont("Arial",10));
    oktobar2020_s->setDefaultTextColor(Qt::yellow);
    oktobar2020_s->setPos(-150,-65);
    scena->addItem(oktobar2020_s);

    QGraphicsTextItem *novembar2020_s= new QGraphicsTextItem("3543");
    novembar2020_s->setFont(QFont("Arial",10));
    novembar2020_s->setDefaultTextColor(Qt::yellow);
    novembar2020_s->setPos(-80,-105);
    scena->addItem(novembar2020_s);

    QGraphicsTextItem *decembar2020_s= new QGraphicsTextItem("3104");
    decembar2020_s->setFont(QFont("Arial",10));
    decembar2020_s->setDefaultTextColor(Qt::yellow);
    decembar2020_s->setPos(-23,-95);
    scena->addItem(decembar2020_s);

    QGraphicsTextItem *januar2021_s= new QGraphicsTextItem("11946");
    januar2021_s->setFont(QFont("Arial",10));
    januar2021_s->setDefaultTextColor(Qt::yellow);
    januar2021_s->setPos(38,-275);
    scena->addItem(januar2021_s);

    QGraphicsTextItem *februar2021_s= new QGraphicsTextItem("17013");
    februar2021_s->setFont(QFont("Arial",10));
    februar2021_s->setDefaultTextColor(Qt::yellow);
    februar2021_s->setPos(100,-375);
    scena->addItem(februar2021_s);

    QGraphicsTextItem *mart2021_s= new QGraphicsTextItem("6264");
    mart2021_s->setFont(QFont("Arial",10));
    mart2021_s->setDefaultTextColor(Qt::yellow);
    mart2021_s->setPos(170,-160);
    scena->addItem(mart2021_s);

    QGraphicsTextItem *april2021_s= new QGraphicsTextItem("1888");
    april2021_s->setFont(QFont("Arial",10));
    april2021_s->setDefaultTextColor(Qt::yellow);
    april2021_s->setPos(230,-75);
    scena->addItem(april2021_s);

    QGraphicsTextItem *maj2021_s= new QGraphicsTextItem("642");
    maj2021_s->setFont(QFont("Arial",10));
    maj2021_s->setDefaultTextColor(Qt::yellow);
    maj2021_s->setPos(294,-50);
    scena->addItem(maj2021_s);

}

Widget::~Widget()
{
    delete ui;
}
