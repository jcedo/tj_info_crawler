#pragma once
#include <stdio.h>
#include <list>
class ConfigParser {
public:
	int loader(char* conf_filepath);
	// for single
	ConfigParser* instance();
	// operation
	int getJobNum();
	char getUrlSeed();
	int getDeep();
	int getLogLevel();
	char* getModulePath();
	std::list<std::string> getModules();
	std::list<std::string> getFileType();

private:
	ConfigParser();
	static ConfigParser* _self;

private:
	int job_nums;
	char* seed;
	int deeps;
	int log_level;
	char* module_path;
	std::list<std::string> module_name;
	std::list<std::string> file_type;
};