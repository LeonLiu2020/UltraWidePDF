#ifndef SINGLEDOCVIEWER_H
#define SINGLEDOCVIEWER_H

#include <QWidget>
#include "pdfUtils.h"
#include "QScrollArea"
#include "QScrollBar"
#include "QTabWidget"


class singleDocViewer : public QWidget {


public:

    singleDocViewer();
    ~singleDocViewer();

public:

    pdfUtils::layout getLayout();


public:


    bool renderSinglePage(Poppler::Document* doc, int index);

    bool renderPages(Poppler::Document* doc, int begin,
                     pdfUtils::layout globalLayout,
                     pdfUtils::renderPageNumConf conf);


public:

    bool zoomIn();

    bool zoomOut();

    bool reset();



private:

    QScrollArea* scrollArea;
    QScrollBar* scrollBar;





};



#endif // SINGLEDOCVIEWER_H
