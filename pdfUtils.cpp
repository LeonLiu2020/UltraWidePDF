#include "pdfUtils.h"

pdfUtils::pdfUtils(){


}


static PAGE getPage(DOC doc, int pageNum){

    if(NULL == doc) return NULL;

    return doc->page(pageNum);

}


// 初始化doc

static DOC initPdfDoc(QString path, QString name,
                      QMap<QString,Poppler::Document *> &map){

    auto it = map.find(name);

    if(it != map.end())
        return it.value();
    else{

        Poppler::Document* doc = Poppler::Document::load(path);
        map.insert(name,doc);

    }

    return map.find(name).value();

}


static QImage getImage(DOC doc,int pageNum, float ratio){

    return getPage(doc,pageNum)->renderToImage(72.0*ratio,72.0*ratio);
}


static QSize getPageSize(DOC doc,int pageNum,float ratio){

    return doc->page(pageNum)->pageSize()*ratio;

}

static int getPageCount();

static bool addAnnotation();




