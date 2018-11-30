// TODO LinkedList, bibliotheken anschauen std::list
#include <list>
myRoot::myRoot(myFile firstfile) {
	file.push_front(firstfile);
}
myRoot::myRoot(string name, off_t size, mode_t mode) {
	myFile firstfile = new myFile(name, size, mode);
	file.push_front(firstfile);
}
myRoot::~myRoot() {
	files.clear();
}

void myRoot::addFile(string name, off_t size, mode_t mode) {
	//Speichern von Name, Dateigroesse und Zugriffsrechte pro Datei
	myFile f = new myFile(name, size, mode);
	files.push_back(f);
}

void myRoot::deleteFile(string name) {
	//In Root Verzeichnis Datei loeschen
	if(files.size() != 0){
	myFile filetodelete = files.getFile(name);
	files.erase(filetodelete);}

}
myFile ROOT::getFile(string name) {
	it = files.begin();
	while (it != files.end() || *it.name != name)
	{
		it++;
	}
	return *it;
}



//Tanja add: i need it to have a list from all files
MyFile MyRoot::getFile(int n) {

	return files[n];
}

int MyRoot::getFileTry(int n) {

	//if file exist return 0
	// not exist return -1
	return 0;

}

