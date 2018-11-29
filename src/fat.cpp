
int  myFAT::unLink ( int currentNo){ //todo fehle behandeln + header bearbeiten
	table[currentNo]=0;
	return 0;

}

 int myFAT::link (int currentNo, int nextNo) {
	 table[currentNo]=nextNo;
	 return 0;
}

 int myFAT::getNext(int no) {
 	 return table[no];
 }


