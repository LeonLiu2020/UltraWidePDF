#ifndef IMAGECACHE_H
#define IMAGECACHE_H
#include <QQueue>
#include <QImage>
#include <QMap>

class imageCache
{
public:

    imageCache(float ratio);
    ~imageCache();

public:

    float getRatio();
    void setRatio(float ratio);
    bool cleanAll(float ratio);


    bool addCache(int pageNum,QImage &image);
    QImage* getCache(int pageNum);



private:

    QMap<int,QImage*> cacheMap;
    float ratio;



};







#endif // IMAGECACHE_H
