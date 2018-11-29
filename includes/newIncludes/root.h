#pragma once
#include <string>

using namespace std;
class myRoot {
private:
	myFile files[BLOCK_NUMBER];
	myFile* addressRoot;

public:
	//TODO KONSTRUKTOR DESTRUKTOR

	void addFile(string name, off_t size, mode_t mode);
	void deleteFile(string name);
	myFile getFile(string name, myFile* file);
};


