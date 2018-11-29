
int  myFAT::unLink ( int currentNo){ //todo fehle behandeln + header bearbeiten
	table[currentNo]=-1;
	return 0;

}

 int myFAT::link (int currentNo, int nextNo) {
	 table[currentNo]=nextNo;
	 return 0;
}

 int myFAT::getNext(int current, int*next) {
 	 if(*next>=size||*next<0)
 		 return-1;
 	 else
 		 *next=current;
 	 return 0;
 }


myFAT::myFAT()
{

for(int i=0;i<size;i++)
	table[i]=-1;

}

myFAT::~myFAT()
{

this = new myFAT();
}
