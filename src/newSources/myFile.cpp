
#include <string>
#include <stdlib.h>
using namespace std;
//Define the constructor
//TODO FEHLE FINDEN
myFile::myFile(string cname, uid_t cuser, gid_t cgroup, off_t csize, mode_t cmode, time_t clastAccess,
		time_t clastMod, time_t clastStatusChange, int cfirstBlock) {
	name = cname;//Dateiname
	user = cuser;//Benutzer
	group = cgroup;//Gruppen-ID
	size = csize;//Dateigroesse
	mode = cmode;//Zugriffsberechtigung
	lastAccess = clastAccess;//Zeitpunkt letzter Zugriff (atime)
	lastMod = clastMod;//letzte Ver�nderung (mtime)
	lastStatusChange = clastStatusChange;//letzter Status�nderung (ctime)
	firstBlock = cfirstBlock;//Zeiger auf ersten Block (u_int32_t BlockNo)
}
myFile::~myFile() {//
	/*delete[] name;//Dateiname
	delete[] user;//Benutzer
	delete[] group;//Gruppen-ID
	delete[] size;//Dateigroesse
	delete[] mode;//Zugriffsberechtigung
	delete[] lastAccess;//Zeitpunkt letzter Zugriff (atime)
	delete[] lastMod;//letzte Ver�nderung (mtime)
	delete[] lastStatusChange;//letzter Status�nderung (ctime)
	delete[] firstBlock;//Zeiger auf ersten Block*/
}