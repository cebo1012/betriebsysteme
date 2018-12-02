// TODO LinkedList, bibliotheken anschauen std::list
#include <list>

MyRoot::MyRoot(MyFile firstfile) {
	file.push_front(firstfile);
}
MyRoot::MyRoot(string name, off_t size, mode_t mode) {
	MyFile firstfile = new MyFile(name, size, mode);
	file.push_front(firstfile);
}
MyRoot::~MyRoot() {
	files.clear();
}

void MyRoot::addFile(string name, off_t size, mode_t mode) {
	//Speichern von Name, Dateigroesse und Zugriffsrechte pro Datei
	MyFile f = new MyFile(name, size, mode);
	files.push_back(f);
}

void MyRoot::deleteFile(string name) {
	//In Root Verzeichnis Datei loeschen
	if (files.size() != 0) {
		MyFile filetodelete = files.getFile(name);
		files.erase(filetodelete);
	}

}
MyFile ROOT::getFile(string name) {
	std::list<MyFile *>::iterator it;
	it = files.begin();
	while (it != files.end() || *it.name != name)
	{
		it++;
	}
	return *it;
}



//Tanja add: i need it to have a list from all files
MyFile MyRoot::getFile(int n) {
	std::list<MyFile *>::iterator it;
	it = files.begin();
	int i = 0;
	while (it != files.end() || i != n)
	{
		it++;
		i++;
	}
	return *it;
	//return files[n];
}

int MyRoot::getFileTry(int n) {
	//if file exist return 0
	if (files.size() >= n) {
		return 0;
	}
	else {
		return -1;
	}
	// not exist return -1
}

