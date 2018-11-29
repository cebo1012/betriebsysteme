#pragma once
class myFAT {

   private:
	  int table [BLOCK_NUMBER];
	  int size = BLOCK_NUMBER;
   public:
      myFAT();
      ~myFAT();

      int link (int currentNo, int nextNo);
      int unLink ( int currentNo);
      int getNext(int current, int* next);
      int getSize(){return size;};

      /*int firstBlock:
      int nextBlock;
      int currentBlock;
      int fileLength;*/

};
