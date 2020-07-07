#include "singleDocViewer.h"


bool singleDocViewer::renderSinglePage(Poppler::Document* doc, int index){



}




bool singleDocViewer::reCal(int pageLength, int pageWidth, int areaLenght,
                            int areaWidth,pdfUtils::layout layout){

    switch (layout) {

        case pdfUtils::layout::SinglePage:

            {
                xNum=1;
                yNum=1;
            }
            break;
        case pdfUtils::layout::TwoPage:

            {
                xNum=2;
                yNum=1;
            }
            break;
        case pdfUtils::layout::VerticalScrolling:

            {
                xNum=1;
                int y = areaWidth/(pageWidth+10);
                yNum = y==0? 1:y;
            }
            break;

        case pdfUtils::layout::HorizontalScrolling:

            {
                int x = areaLenght/(pageLength+10);
                xNum = x==0? 1:x;
                yNum =1;
            }
            break;

        case pdfUtils::layout::WrappedScrolling:
            {
                int x = areaLenght/(pageLength+10);

                int y = areaWidth/(pageWidth+10);

                this->xNum = x==0? 1:x;
                this->yNum = y==0? 1:y;
            }
            break;

        default:
            break;


    }

}





