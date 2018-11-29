#pragma once
#include <string>
#include "myFile.h"
using namespace std;
class myRoot {
private:
	myFile files[BLOCK_NUMBER];
	myFile* addressRoot;

public:
	//TODO KONSTRUKTOR DESTRUKTOR

	int addFile(string name, off_t size, mode_t mode);
	int deleteFile(string name);
	int getFile(string name, myFile* file);
};


