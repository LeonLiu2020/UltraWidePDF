#ifndef SINGLEDOCVIEWER_H
#define SINGLEDOCVIEWER_H

#include <QWidget>
#include "pdfUtils.h"
#include "QScrollArea"
#include "QScrollBar"
#include "QTabWidget"



class imageCache
{
public:

    imageCache();
    ~imageCache();

public:


    bool cleanAll();


    bool addCache(int pageNum,QImage &image);
    QImage* getCache(int pageNum);



private:

    QMap<int,QImage> cacheMap;

};



class singleDocViewer : public QWidget {


public:

    singleDocViewer();
    ~singleDocViewer();

public:

    pdfUtils::layout getLayout();
    bool setLayout();

    pdfUtils::renderPageNumConf getRenderPageNumConf();
    bool setRenderPageNumConf();

public:

    bool initDocViewer();

    bool renderSinglePage(Poppler::Document* doc, int index);

    bool renderPages(Poppler::Document* doc, int beginIndex,
                     pdfUtils::layout layout,
                     pdfUtils::renderPageNumConf conf);


public:

    bool zoomIn(float ratio=0.2);

    bool zoomOut(float ratio=0.2);

    bool reset(float ratio=1);

public:

    bool resize();
    bool resize(QSize pageSize,QSize areaSize);
    bool reRender();
    // recal X,Y;
    bool reCal(int pageLength,int pageWidth, int areaLenght,
               int areaWidth, pdfUtils::layout layout);


private:

    pdfUtils::layout layout;
    pdfUtils::renderPageNumConf conf;
    int xNum,yNum;
    float ratio;

    QScrollArea* scrollArea;
    QScrollBar* scrollBar;

    imageCache cache;




};




#endif // SINGLEDOCVIEWER_H
