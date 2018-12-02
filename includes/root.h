#pragma once
#include <string>
#include <list>
#include "MyFile.h"
using namespace std;
class MyRoot {
private:
	std::list<MyFile> files;
	MyFile* addressRoot;

public:
	//TODO KONSTRUKTOR DESTRUKTOR
	MyRoot(myFile firstfile);
	MyRoot(string name, off_t size, mode_t mode);
	~MyRoot();

	int addFile(string name, off_t size, mode_t mode);
	int deleteFile(string name);
	int getFile(string name, MyFile* file);
	int getFileTry(int number);
	MyFile getFile(int number);
};


