#pragma once
#include <stdio.h>
#include <list>
#include <map>
#include <queue>

class UrlManager {
public:
    void addUrl();
    void addUrlList();
    void getUrlFormQueue();
    void removeUrlFormQueue();

private:
    void findUrl();

private:
    // 下列的string 应为url类型 暂时没有定义
    std::list<std::string> urls;
    std::map<int, std::string*> url_map;
    std::queue<std::string*> url_queue;
};