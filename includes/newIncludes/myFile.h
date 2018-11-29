#include <string>
#include <stdlib.h>
using namespace std;

class myFile {
private:
	string name;//Dateiname
	uid_t user;//Benutzer
	gid_t group;//Gruppen-ID
	off_t size;//Dateigroesse
	mode_t mode;//Zugriffsberechtigung
	time_t lastAccess;//Zeitpunkt letzter Zugriff (atime)
	time_t lastMod;//letzte Ver�nderung (mtime)
	time_t lastStatusChange;//letzter Status�nderung (ctime)
	int firstBlock;//Zeiger auf ersten Block
public:
	myFile(string cname, uid_t cuser, gid_t cgroup, off_t csize, mode_t cmode, time_t clastAccess,
			time_t clastMod, time_t clastStatusChange, int cfirstBlock);
	~myFile();
};
