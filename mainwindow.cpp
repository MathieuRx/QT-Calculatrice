#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_2_clicked()
{
    // Lecteur des données de l'interface
    QString N1_str=ui->lineEdit->text();
    QString N2_str=ui->lineEdit_2->text();

    // Conversion en entier non signé 8 bits
    unsigned char N1=N1_str.toInt();
    unsigned char N2=N2_str.toInt();

    // Opération addition
    unsigned char R=N1+N2;

    // Conversion du résultat en chaîne
    QString R_str;
    R_str.setNum(R);

    //Affichage dans l'interface
    ui->lineEdit_3->setText(R_str);

    // Affichage en héxadécimal
    QString RHex_str=R_str.setNum(R,16);
    ui->lineEdit_22->setText(RHex_str);
}


void MainWindow::on_pushButton_3_clicked()
{
    // Lecteur des données de l'interface
    QString N1_str=ui->lineEdit_4->text();
    QString N2_str=ui->lineEdit_10->text();

    // Conversion en entier signé 8 bits
    char N1=N1_str.toInt();
    char N2=N2_str.toInt();

    // Opération addition
    char R=N1+N2;

    // Conversion du résultat en chaîne
    QString R_str;
    R_str.setNum(R);

    //Affichage dans l'interface
    ui->lineEdit_16->setText(R_str);

    // Affichage en héxadécimal
    QString RHex_str=R_str.setNum(R,16);
    ui->lineEdit_23->setText(RHex_str);
}

void MainWindow::on_pushButton_4_clicked()
{
    // Lecteur des données de l'interface
    QString N1_str=ui->lineEdit_5->text();
    QString N2_str=ui->lineEdit_11->text();

    // Conversion en entier non signé 8 bits
    unsigned short N1=N1_str.toInt();
    unsigned short N2=N2_str.toInt();

    // Opération addition
    unsigned short R=N1+N2;

    // Conversion du résultat en chaîne
    QString R_str;
    R_str.setNum(R);

    //Affichage dans l'interface
    ui->lineEdit_17->setText(R_str);

    // Affichage en héxadécimal
    QString RHex_str=R_str.setNum(R,16);
    ui->lineEdit_24->setText(RHex_str);
}

void MainWindow::on_pushButton_5_clicked()
{
    // Lecteur des données de l'interface
    QString N1_str=ui->lineEdit_6->text();
    QString N2_str=ui->lineEdit_12->text();

    // Conversion en entier non signé 8 bits
    short N1=N1_str.toInt();
    short N2=N2_str.toInt();

    // Opération addition
    short R=N1+N2;

    // Conversion du résultat en chaîne
    QString R_str;
    R_str.setNum(R);

    //Affichage dans l'interface
    ui->lineEdit_18->setText(R_str);

    // Affichage en héxadécimal
    QString RHex_str=R_str.setNum(R,16);
    ui->lineEdit_25->setText(RHex_str);
}

void MainWindow::on_pushButton_6_clicked()
{
    // Lecteur des données de l'interface
    QString N1_str=ui->lineEdit_9->text();
    QString N2_str=ui->lineEdit_13->text();

    // Conversion en entier non signé 8 bits
    unsigned int N1=N1_str.toInt();
    unsigned int N2=N2_str.toInt();

    // Opération addition
    unsigned int R=N1+N2;

    // Conversion du résultat en chaîne
    QString R_str;
    R_str.setNum(R);

    //Affichage dans l'interface
    ui->lineEdit_19->setText(R_str);

    // Affichage en héxadécimal
    QString RHex_str=R_str.setNum(R,16);
    ui->lineEdit_26->setText(RHex_str);
}

void MainWindow::on_pushButton_7_clicked()
{
    // Lecteur des données de l'interface
    QString N1_str=ui->lineEdit_7->text();
    QString N2_str=ui->lineEdit_14->text();

    // Conversion en entier non signé 8 bits
    int N1=N1_str.toInt();
    int N2=N2_str.toInt();

    // Opération addition
    int R=N1+N2;

    // Conversion du résultat en chaîne
    QString R_str;
    R_str.setNum(R);

    //Affichage dans l'interface
    ui->lineEdit_20->setText(R_str);

    // Affichage en héxadécimal
    QString RHex_str=R_str.setNum(R,16);
    ui->lineEdit_27->setText(RHex_str);
}

void MainWindow::on_pushButton_8_clicked()
{
    // Lecteur des données de l'interface
    QString N1_str=ui->lineEdit_8->text();
    QString N2_str=ui->lineEdit_15->text();

    // Conversion en entier non signé 8 bits
    unsigned int N1=N1_str.toInt();
    unsigned int N2=N2_str.toInt();

    // Opération modulo
    unsigned int R=N1%N2;

    // Conversion du résultat en chaîne
    QString R_str;
    R_str.setNum(R);

    //Affichage dans l'interface
    ui->lineEdit_21->setText(R_str);

    // Affichage en héxadécimal
    QString RHex_str=R_str.setNum(R,16);
    ui->lineEdit_28->setText(RHex_str);
}

void MainWindow::on_pushButton_9_clicked()
{
    foreach(QLineEdit *widget, this->findChildren<QLineEdit*>())
    {
        // Nettoie tous les lineEdit
        widget->clear();
    }
}

void MainWindow::on_pushButton_clicked()
{
    // Ferme la fenetre
    MainWindow::close();
}

void MainWindow::on_pushButton_10_clicked()
{
    // Récupération des chaînes de caractères
    QString N1_str=ui->lineEdit_29->text();
    QString N2_str=ui->lineEdit_30->text();
    // Conversion en entier base 10 : decimal
    unsigned int N1 = N1_str.toInt(nullptr,10);
    unsigned int N2 = N2_str.toInt(nullptr,10);
    // Opération OU
    unsigned int R=N1||N2;
    // Conversion réprésentation décimal en binaire
    QString R_str(QString::number(R,2));
    // Affichage dans l'interface utilisateur
    ui->lineEdit_31->setText(R_str);
}

void MainWindow::on_pushButton_11_clicked()
{
    // Récupération des chaînes de caractères
    QString N1_str=ui->lineEdit_32->text();
    QString N2_str=ui->lineEdit_33->text();
    // Conversion en entier base 10 : decimal
    unsigned int N1 = N1_str.toInt(nullptr,10);
    unsigned int N2 = N2_str.toInt(nullptr,10);
    // Opération ET
    unsigned int R=N1&&N2;
    // Conversion réprésentation décimal en binaire
    QString R_str(QString::number(R,2));
    // Affichage dans l'interface utilisateur
    ui->lineEdit_34->setText(R_str);
}

void MainWindow::on_pushButton_12_clicked()
{
    // Récupération des chaînes de caractères
    QString N1_str=ui->lineEdit_35->text();
    // Conversion en entier base 10 : decimal
    unsigned int N1 = N1_str.toInt(nullptr,10);
    // Opération NON
    unsigned int R=!N1;
    // Conversion réprésentation décimal en binaire
    QString R_str(QString::number(R,2));
    // Affichage dans l'interface utilisateur
    ui->lineEdit_36->setText(R_str);
}

void MainWindow::on_pushButton_13_clicked()
{
    // Récupération des chaînes de caractères
    QString N1_str=ui->lineEdit_38->text();
    QString N2_str=ui->lineEdit_37->text();
    // Conversion en entier base 2 : binaire
    unsigned int N1 = N1_str.toInt(nullptr,2);
    unsigned int N2 = N2_str.toInt(nullptr,2);
    // Opération OU Bit à Bit
    unsigned int R=N1|N2;
    // Conversion réprésentation décimal en binaire
    QString R_str(QString::number(R,2));
    // Affichage dans l'interface utilisateur
    ui->lineEdit_39->setText(R_str);
}

void MainWindow::on_pushButton_14_clicked()
{
    // Récupération des chaînes de caractères
    QString N1_str=ui->lineEdit_40->text();
    QString N2_str=ui->lineEdit_41->text();
    // Conversion en entier base 2 : binaire
    unsigned int N1 = N1_str.toInt(nullptr,2);
    unsigned int N2 = N2_str.toInt(nullptr,2);
    // Opération OU Ex Bit à bit
    unsigned int R=N1^N2;
    // Conversion réprésentation décimal en binaire
    QString R_str(QString::number(R,2));
    // Affichage dans l'interface utilisateur
    ui->lineEdit_42->setText(R_str);
}

void MainWindow::on_pushButton_15_clicked()
{
    // Récupération des chaînes de caractères
    QString N1_str=ui->lineEdit_43->text();
    QString N2_str=ui->lineEdit_44->text();
    // Conversion en entier base 2 : binaire
    unsigned int N1 = N1_str.toInt(nullptr,2);
    unsigned int N2 = N2_str.toInt(nullptr,2);
    // Opération ET Bit à bit
    unsigned int R=N1&N2;
    // Conversion réprésentation décimal en binaire
    QString R_str(QString::number(R,2));
    // Affichage dans l'interface utilisateur
    ui->lineEdit_45->setText(R_str);
}

void MainWindow::on_pushButton_16_clicked()
{
    // Récupération des chaînes de caractères
    QString N1_str=ui->lineEdit_46->text();
    // Conversion en entier base 10 : decimal
    unsigned int N1 = N1_str.toInt(nullptr,10);
    // Opération NON Bit à bit
    unsigned int R=~N1;
    // Conversion réprésentation décimal en binaire
    QString R_str(QString::number(R,2));
    // Affichage dans l'interface utilisateur
    ui->lineEdit_47->setText(R_str);
}

void MainWindow::on_pushButton_17_clicked()
{
    // Lecteur des données de l'interface
    QString N1_str=ui->lineEdit_48->text();
    QString N2_str=ui->lineEdit_49->text();

    // Conversion en entier non signé 8 bits
    float N1=N1_str.toFloat();
    float N2=N2_str.toFloat();

    // Opération addition
    float R=N1+N2;

    // Conversion du résultat en chaîne
    QString R_str;
    R_str.setNum(R);

    //Affichage dans l'interface
    ui->lineEdit_50->setText(R_str);
    ui->lineEdit_51->setText(this->convertToIEEE32(R));

    // Affichage en héxadécimal
//    QString RHex_str=R_str.setNum(R,16);
//    ui->lineEdit_51->setText(RHex_str);
}

void MainWindow::on_pushButton_18_clicked()
{
    // Lecteur des données de l'interface
    QString N1_str=ui->lineEdit_52->text();
    QString N2_str=ui->lineEdit_53->text();

    // Conversion en entier non signé 8 bits
    float N1=N1_str.toFloat();
    float N2=N2_str.toFloat();

    // Opération addition
    float R=N1-N2;

    // Conversion du résultat en chaîne
    QString R_str;
    R_str.setNum(R);

    //Affichage dans l'interface
    ui->lineEdit_54->setText(R_str);
    ui->lineEdit_55->setText(this->convertToIEEE32(R));

    // Affichage en héxadécimal
//    QString RHex_str=R_str.setNum(R,16);
//    ui->lineEdit_55->setText(RHex_str);
}

void MainWindow::on_pushButton_19_clicked()
{
    // Lecteur des données de l'interface
    QString N1_str=ui->lineEdit_56->text();
    QString N2_str=ui->lineEdit_57->text();

    // Conversion en entier non signé 8 bits
    float N1=N1_str.toFloat();
    float N2=N2_str.toFloat();

    // Opération addition
    float R=N1*N2;

    // Conversion du résultat en chaîne
    QString R_str;
    R_str.setNum(R);

    //Affichage dans l'interface
    ui->lineEdit_58->setText(R_str);
    ui->lineEdit_59->setText(this->convertToIEEE32(R));

    // Affichage en héxadécimal
//    QString RHex_str=R_str.setNum(R,16);
//    ui->lineEdit_59->setText(RHex_str);
}

void MainWindow::on_pushButton_20_clicked()
{
    // Lecteur des données de l'interface
    QString N1_str=ui->lineEdit_60->text();
    QString N2_str=ui->lineEdit_61->text();

    // Conversion en entier non signé 8 bits
    float N1=N1_str.toFloat();
    float N2=N2_str.toFloat();
    // Opération addition
    float R=N1/N2;

    // Conversion du résultat en chaîne
    QString R_str;
    R_str.setNum(R);

    //Affichage dans l'interface
    ui->lineEdit_62->setText(R_str);
    ui->lineEdit_63->setText(this->convertToIEEE32(R));

    // Affichage en héxadécimal
//    QString RHex_str=R_str.setNum(R,16);
//    ui->lineEdit_63->setText(RHex_str);
}

QString MainWindow::convertToIEEE32(float &p_R)
{
    // la variable p récupère l'adresse mémoire de p_R
    unsigned char *p = (unsigned char *)&p_R;

    // On créer les QString pour chaque octet
    QString oct1;
    QString oct2;
    QString oct3;
    QString oct4;

    // Pour chaque octet on y attribut la valeur d'une case mémoire (avec incrémentation) de p
    oct1.setNum(*p,16);
    oct2.setNum(*(p + 1), 16);
    oct3.setNum(*(p + 2), 16);
    oct4.setNum(*(p + 3), 16);
    // On créer le QString du resultat avec les octes
    QString stringResult = oct1 + " " + oct2 + " " + oct3 + " " + oct4;
    // On retourne le QString précédent
    return(stringResult);
}

QString MainWindow::convertToIEEE64(double &p_R)
{
    // Même principe que la méthode convertToIEEE64, adapté à 8 octets
    unsigned char *p = (unsigned char *)&p_R;
    QString oct1;
    QString oct2;
    QString oct3;
    QString oct4;
    QString oct5;
    QString oct6;
    QString oct7;
    QString oct8;
    oct1.setNum(*p,16);
    oct2.setNum(*(p + 1), 16);
    oct3.setNum(*(p + 2), 16);
    oct4.setNum(*(p + 3), 16);
    oct5.setNum(*(p + 4), 16);
    oct6.setNum(*(p + 5), 16);
    oct7.setNum(*(p + 6), 16);
    oct8.setNum(*(p + 7), 16);
    QString stringResult = oct1 + " " + oct2 + " " + oct3 + " " + oct4 + " " + oct5 + " " + oct6 + " " + oct7 + " " + oct8;
    return(stringResult);
}

// Bouton qui appel le converteur IEEE 32
void MainWindow::on_pushButton_21_clicked()
{
    QString R_Str=ui->lineEdit_64->text();
    float R = R_Str.toFloat();
    ui->lineEdit_65->setText(this->convertToIEEE32(R));
}
// Bouton qui appel le converteur IEEE 64
void MainWindow::on_pushButton_22_clicked()
{
    QString R_Str=ui->lineEdit_64->text();
    double R = R_Str.toDouble();
    ui->lineEdit_66->setText(this->convertToIEEE64(R));
}

// Quand le lineEdit avec la valeur en base10 est modifier, on convertie le resultat dans les lineEdit base 2 et base 16
void MainWindow::on_lineEdit_67_textChanged(const QString &arg1)
{
    if(ui->lineEdit_67->isModified())
    {
        int R=arg1.toInt(nullptr,10);
        ui->lineEdit_68->setText("0x"+QString::number(R,16));
        ui->lineEdit_69->setText("%"+QString::number(R,2));
    }
}
// Quand le lineEdit avec la valeur en base16 est modifier, on convertie le resultat dans les lineEdit base 10 et base 2
void MainWindow::on_lineEdit_68_textChanged(const QString &arg1)
{
    if(ui->lineEdit_68->isModified())
    {
        int R=arg1.toInt(nullptr,16);
        ui->lineEdit_67->setText(QString::number(R,10));
        ui->lineEdit_69->setText("%"+QString::number(R,2));
    }
}
// Quand le lineEdit avec la valeur en base2 est modifier, on convertie le resultat dans les lineEdit base 10 et base 16
void MainWindow::on_lineEdit_69_textChanged(const QString &arg1)
{
    if(ui->lineEdit_69->isModified())
    {
        int R=arg1.toInt(nullptr,2);
        ui->lineEdit_67->setText(QString::number(R,10));
        ui->lineEdit_68->setText("0x"+QString::number(R,16));
    }
}

// Quand un caractère est entré, on convertis en UTF-8 et en ASCII
void MainWindow::on_lineEdit_70_textChanged(const QString &arg1)
{
    if(ui->lineEdit_70->isModified())
    {
        ui->lineEdit_71->setText(arg1.toLatin1().toHex());
        ui->lineEdit_72->setText(arg1.toUtf8().toHex());
    }
}

// Quand un code ASCII est entré, on convertis en caractère
void MainWindow::on_lineEdit_71_textChanged(const QString &arg1)
{
    // Saisie du nombre selon le code ASCII Latin
    QRegExp rx("^[0-9A-F]{2}$");
    QValidator *validator = new QRegExpValidator(rx, this);
    ui->lineEdit_71->setValidator(validator);
    int R;
    if(ui->lineEdit_71->isModified())
    {
        R=arg1.toInt(nullptr, 16);
        QChar carac(R);
        ui->lineEdit_70->setText(carac);
    }
}

// On affiche la fenetre avec le tableau Latin/Hexadecimal
void MainWindow::on_pushButton_23_clicked()
{
    QLabel *label = new QLabel();
    // Définir l'icon
    QIcon *icon=new QIcon(QPixmap("icons/calc.ico"));
    label->setWindowIcon(*icon);
    label->setPixmap(QPixmap("images/latin1.png"));
    label->show();
}

// Quand un code Utf-8 est entré, on convertis en caractère
void MainWindow::on_lineEdit_72_textChanged(const QString &arg1)
{
    // Saisie du nombre selon le code Utf-8
    QRegExp rx("^[0-9A-F]{4}$");
    QValidator *validator = new QRegExpValidator(rx, this);
    ui->lineEdit_72->setValidator(validator);
    int R;
    if(ui->lineEdit_72->isModified())
    {
        R=arg1.toInt(nullptr, 16);
        QChar carac(R);
        ui->lineEdit_70->setText(carac);
    }
}

// Quand un code Unicode est entré, on convertis en caractère
void MainWindow::on_lineEdit_73_textChanged(const QString &arg1)
{
    // Saisie du nombre 2 octets
    QRegExp rx("^[0-9A-F]{4}$");
    QValidator *validator = new QRegExpValidator(rx, this);
    ui->lineEdit_73->setValidator(validator);
    int R;
    if(ui->lineEdit_73->isModified())
    {
        R = arg1.toUShort(nullptr, 16);
        QChar carac(R);
        ui->lineEdit_70->setText(carac);
    }
}

// Conversion nombre complexe coordonnée cartésiennes vers coordonnées polaire
void MainWindow::on_lineEdit_75_textChanged(const QString &arg1)
{
    if(ui->lineEdit_75->isModified())
    {
        //Saisie a et b
        QString a_str=ui->lineEdit_74->text();
        QString b_str=arg1;
        //Conversion
        double a = a_str.toDouble();
        double b = b_str.toDouble();
        //Calcul du module
        double rho=sqrt(a*a+b*b);
        //Calcul de l'argument
        double theta=atan(b/a)*180/M_PI;
        if(a<0 && b>=0)
        {
            theta = abs(theta) + 90;
        }
        else if(a<0 && b<0)
        {
            theta = abs(theta) + 180;
        }
        else if(a>=0 && b<0)
        {
            theta = abs(theta) + 270;
        }
        QString rho_str;
        QString theta_str;
        ui->lineEdit_76->setText(rho_str.setNum(rho));
        ui->lineEdit_77->setText(theta_str.setNum(theta));
    }
}
// Conversion nombre complexe coordonnée polaire vers coordonnées cartésiennes
void MainWindow::on_lineEdit_77_textChanged(const QString &arg1)
{
    if(ui->lineEdit_77->isModified())
    {
        //Saisie de theta et rho
        QString rho_str = ui->lineEdit_76->text();
        QString theta_str = arg1;
        //Conversion
        double rho = rho_str.toDouble();
        double theta = theta_str.toDouble();
        //Calcul de la partie réel
        double a = rho * cos(theta);
        //Calcul de la partie imaginaire
        double b = rho * sin(theta);
        QString a_str;
        QString b_str;
        ui->lineEdit_74->setText(a_str.setNum(a));
        ui->lineEdit_75->setText(b_str.setNum(b));
    }
}


//Dessiner le point dans l'espace 2D
void MainWindow::on_pushButton_24_clicked()
{
    //Créer une scene
    QGraphicsScene *scene;
    //Initialiser la scene
    scene=new QGraphicsScene(0,0,500,500);
    //Créer une vue
    QGraphicsView *view;
    //Initialiser la vue avec la scene à l'interieur
    view=new QGraphicsView(scene);
    //Créer un objet ligne
    QGraphicsLineItem *line1;
    line1=new QGraphicsLineItem;
    // Créer un crayon noir
    QPen blackpen(Qt::black);
    //Créer le cercle principal
    QGraphicsEllipseItem *cercleMain;
    cercleMain=new QGraphicsEllipseItem;
    //Créer le point
    QGraphicsEllipseItem *point;
    point=new QGraphicsEllipseItem;
    QBrush redBrush(Qt::red);
    QPen redPen(Qt::red);
    //Changer l'épaisseur de la mine du crayon
    blackpen.setWidth(2);
    // On recupère a, b, rho et theta
    QString a_str = ui->lineEdit_74->text();
    QString b_str = ui->lineEdit_75->text();
    QString rho_str = ui->lineEdit_76->text();
    double a = a_str.toDouble();
    double b = b_str.toDouble();
    double rho = rho_str.toDouble();
    // On définie les unités pour 1 carreau
    double uniteX = scene->width()/M_QU;
    double uniteY = scene->height()/M_QU;
    // On définie le milieu des abscisses/ordonnées
    double midX = scene->width()/2;
    double midY = scene->height()/2;
    //Affiche abcisse/ordonnée
    line1=scene->addLine(midX,0,midX,scene->height(),blackpen);
    line1=scene->addLine(0,midY,scene->width(),midY,blackpen);
    //Affiche le cercle principal
    cercleMain=scene->addEllipse(midX-rho*uniteX,midY-rho*uniteY,
                                 2*rho*uniteX,2*rho*uniteY,
                                 blackpen);
    //Change l'épaisseur de la mine du crayon
    blackpen.setWidth(1);
    //Quadrillage: (M_QU)
    for(int i=0; i<M_QU+1; i++){
        line1=scene->addLine(uniteX*i,0,uniteX*i,scene->height(),blackpen);
        line1=scene->addLine(0,uniteY*i,scene->width(),uniteY*i,blackpen);
    }
    //On affiche le point
    point=scene->addEllipse(midX+a*uniteX-3, midY-b*uniteY-3,
                            6,6,
                            blackpen, redBrush);
    //afficher le dessin
    view->show();
}
