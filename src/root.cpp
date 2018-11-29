// TODO LinkedList, bibliotheken anschauen
void myRoot::addFile(string name, off_t size, mode_t mode) {
	myFile copyfile[sizeof(files) + 1];
	int z = 0;
	for (int k = 0; k < (sizeof(files) + 1); k++, z++) {
		copyfile[z] = files[k];
	}
	//Speichern von Name, Dateigroesse und Zugriffsrechte pro Datei
	myFile f = new myFile(name, size, mode);
	copyfile[i] = f;
	files = copyfile.clone();
}

int myRoot::deleteFile(string name) {
	myFile filetodelete = getFile(name);
	//In Root Verzeichnis Datei loeschen
	int i = 0;
	while (filetodelete.name != files[i].name && filetodelete.size != files[i].size && filetodelete.mode != files[i].mode) {
		i++;
	}
	//Nachfolgende Elemente um eine Stelle nach hinten kopieren und ueberschreiben und
	//dabei in ein anderes Array kopieren um anschlie�end die Laenge von Files zu verkuerzen
	int indexfiles = i;
	myFile array[sizeof(files) - 1];
	for (int indexarray = 0; index < sizeof(files - 1) && indexarray < sizeof(array - 1); index++, indexarray++) {
		files[index] = files[index + 1];
		array[indexarray] = files[indexarray];
	}
	//Laenge von Files um eins verkuerzen --- Falls Blockanzahl nicht konstant
	//std::array<myFile,> a = { 1,2,3 };	
return 0;
}
myFile ROOT::getFile(string name) {
	int i = 0;
	while (!(strcmp(name, files[i].name))) {
		i++;
	}
	return files[i];
}

//Tanja add: i need it to have a list from all files
myFile myRoot::getFile(int n) {

	return files[n];
}

int myRoot::getFileTry(int n) {

	//if file exist return 0
	// not exist return -1
	return 0;

}

