#ifndef USERCACHE_H
#define USERCACHE_H

class userCache{


public:

    userCache();
    ~userCache();


public:

    bool firstInitCache();

public:

    bool loadCache();
    bool autoCache();
    bool saveCache();
    bool openAllDoc();
    bool openCacheDoc();

private:






};


#endif // USERCACHE_H
