#pragma once
#include <string>

#include "MyFile.h"
using namespace std;
class MyRoot {
private:
	MyFile files[BLOCK_NUMBER];
	MyFile* addressRoot;

public:
	//TODO KONSTRUKTOR DESTRUKTOR
	MyRoot();
	~MyRoot();
	int addFile(string name, off_t size, mode_t mode);
	int deleteFile(string name);
	int getFile(string name, MyFile* file);
	int getFileTry(int number);
	MyFile getFile(int number);
};


