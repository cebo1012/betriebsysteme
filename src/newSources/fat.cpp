using namespace std;

#include <iostream>







int  myFAT::unLink ( int currentNo){ //todo fehle behandeln + header bearbeiten
	table[currentNo]=0;
	RETURN(0);

}

 int myFAT::link (int currentNo, int nextNo) {
	 table[currentNo]=nextNo;
	 RETURN(0);
}

 int myFAT::getNext(int no) {
 	 return table[No];
 }


