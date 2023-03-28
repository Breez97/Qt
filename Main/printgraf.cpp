#include "printgraf.h"
#include "ui_printgraf.h"

printgraf::printgraf(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::printgraf)
{
    ui->setupUi(this);

    QCPDocumentObject* poHandler = new QCPDocumentObject(this);
    ui->textEdit->document()->documentLayout()->registerHandler(QCPDocumentObject::PlotTextFormat, poHandler);
    ui->textEdit->setVisible(false);

    ui->widget->plotLayout()->insertRow(0);
    ui->widget->plotLayout()->addElement(0, 0, new QCPTextElement(ui->widget, "График"));
    QVector<double> dx, dy;

    double minX, minY, maxX, maxY;
    minX = 0;
    minY = 0;
    maxX = 0;
    maxY = 0;

    QSqlQuery* query = new QSqlQuery();
    if(query->exec("SELECT * FROM chart"))
    {
        while(query->next())
        {
            if(minX>=query->value(0).toDouble()) minX = query->value(0).toDouble();
            if(minY>=query->value(1).toDouble()) minY = query->value(1).toDouble();
            if(maxX<=query->value(0).toDouble()) maxX = query->value(0).toDouble();
            if(maxY<=query->value(1).toDouble()) maxY = query->value(1).toDouble();

            dx << query->value(0).toDouble();
            dy << query->value(1).toDouble();

            QCPBars* bar = new QCPBars(ui->widget->xAxis, ui->widget->yAxis);
            bar->setName("Значение");
            bar->setBrush(QColor(255, 0, 0, 255));
            bar->setData(dx, dy);
            bar->setWidth(0.20);

            ui->widget->xAxis->setLabel("Месяц");
            ui->widget->yAxis->setLabel("Выручка (мин.)");

            ui->widget->xAxis->setRange(minX, maxX+0.20);
            ui->widget->yAxis->setRange(minY, maxY+1);

            QSharedPointer<QCPAxisTickerFixed> fixedTicker(new QCPAxisTickerFixed);
            ui->widget->xAxis->setTicker(fixedTicker);
            ui->widget->yAxis->setTicker(fixedTicker);

            fixedTicker->setTickStep(1.0);
            fixedTicker->setScaleStrategy(QCPAxisTickerFixed::ssNone);

            ui->widget->replot();
        }
    }

    QTextCursor cur = ui->textEdit->textCursor();
    cur.insertText(QString(QChar::ObjectReplacementCharacter), QCPDocumentObject::generatePlotFormat(ui->widget, 480, 340));
}

printgraf::~printgraf()
{
    delete ui;
}

void printgraf::on_pushButton_clicked()
{
    QString fn = QFileDialog::getSaveFileName(0, "Сохранить в PDF", "./", ".pdf");
    if(!fn.isEmpty())
    {
        QPrinter print;
        print.setFullPage(true);
        print.setOutputFormat(QPrinter::PdfFormat);
        print.setPageOrientation(QPageLayout::Portrait);
        print.setPageSize(QPageSize::A4);
        print.setOutputFileName(fn);
        ui->textEdit->document()->print(&print);
    }
}

