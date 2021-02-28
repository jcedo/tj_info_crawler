#include "ConfigParser.h"

// 构造函数
ConfigParser::ConfigParser() {};

ConfigParser* ConfigParser::instance() {
    if(_self == NULL){
        _self = new ConfigParser();
    }
    return _self;
};

int ConfigParser::loader(char* conf_filepath) {
    if(conf_filepath == "") return -1;
    FILE *file;
    char buf[128];
    file = fopen(conf_filepath, "r");
    if(file == NULL){
        perror("read config file fault");
    }else{
        if(fgets(buf, 128, file) != NULL){
            puts(buf);
        }
    }
    fclose(file);
    return 0;
}