#ifndef DOCVIEWER_H
#define DOCVIEWER_H

#include <QWidget>
#include <QScrollArea>
#include <QTabWidget>
#include "pdfUtils.h"

class docViewer : public QWidget{

public:

//    static docViewer* getDocViewer();

//    static void deleteDocViewer();




private:

    docViewer();
    ~docViewer();

//    docViewer(const docViewer &doc);
//    const docViewer &operator=(const docViewer &doc);



public:

    static bool initMainDocView();

    int newDoc(QString name,QString path,Poppler::Document* doc);

    bool closeDoc(int index);


private:

//    static docViewer* DOC;


    static QTabWidget* tabWidget;



public:




};




#endif // DOCVIEWER_H
