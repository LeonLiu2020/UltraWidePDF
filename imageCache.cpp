#include "imageCache.h"




imageCache::imageCache(float ratio){

    this->ratio=ratio;


}




float imageCache::getRatio(){

    return this->ratio;

}
void imageCache::setRatio(float ratio){

    this->ratio=ratio;

}

bool imageCache::cleanAll(float ratio){

    this->cacheMap.clear();

}

bool imageCache::addCache(int pageNum,QImage &image){

    if(cacheMap.contains(pageNum))
        return false;
    else
        cacheMap.insert(pageNum,&image);

}
QImage* imageCache::getCache(int pageNum) {

    return cacheMap.take(pageNum);

}




QMap<int,QImage> cacheMap;
float ratio;
