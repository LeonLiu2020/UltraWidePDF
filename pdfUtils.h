#ifndef PDFUTILS_H
#define PDFUTILS_H

#include <vector>
#include "QImage"
#include "QSize"
#include "poppler/qt5/poppler-qt5.h"



typedef Poppler::Document* DOC;
typedef Poppler::Page* PAGE;


class pdfUtils
{



public:

    static Poppler::Page* getPage(DOC doc, int pageNum);

    static DOC initPdfDoc(QString path, QString name,
                          QMap<QString,Poppler::Document *> &map = docMap);

    static QImage getImage(DOC doc,int pageNum, float ratio=1.0);


    static QSize getPageSize(DOC doc,int pageNum,float ratio=1.0);

    static int getPageCount();

    static bool addAnnotation();

public:



public:

    enum layout{

        SinglePage,
        TwoPage,
        VerticalScrolling,
        HorizontalScrolling,
        WrappedScrolling,

    };


    enum renderPageNumConf{

        fixed_20,
        fixed_50,
        relative_10,
        relative_20,
        relative_30,
        all
    };


public:

    pdfUtils();

    pdfUtils(QString history);

    ~pdfUtils();

public:

    layout getLayout();
    bool newDoc();
    bool deleteDoc();
    bool getDoc();


private:

    static QMap<QString,Poppler::Document *> docMap;

    layout globalLayout;



};




#endif // PDFUTILS_H
