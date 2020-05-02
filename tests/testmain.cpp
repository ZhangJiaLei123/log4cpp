 
#pragma comment(lib, "ws2_32.lib")

#include <iostream>
#include "log4cpp/Category.hh"
#include "log4cpp/PropertyConfigurator.hh"

using namespace std;
int main(int argc, char* argv[]) {
	 
    log4cpp::PropertyConfigurator::configure("./log4cpp.conf");
	 
	log4cpp::Category& cat = log4cpp::Category::getInstance("rootAppender");

	cat.info("system is running");
	cat.warn("system has a warning");
	cat.error("system has a error, can't find a file");
	cat.fatal("system has a fatal error,must be shutdown");
	cat.info("system shutdown,you can find some information in system log");

	log4cpp::Category::shutdown();

	return 0;
}