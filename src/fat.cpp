
int  myFAT::unLink ( int current){ //todo fehle behandeln + header bearbeiten
	if(*current>=size||*current<0)
	return-1;
	else
	table[current]=-1;
	return 0;

}

 int myFAT::link (int current, int next) {

	 if(*next>=size||*next<0||*current>=size||*current<0)
	 return-1;
	 else
	 table[current]=next;
	 return 0;
}

 int myFAT::getNext(int current, int*next) {
 	 if(*next>=size||*next<0||*current>=size||*current<0)
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
