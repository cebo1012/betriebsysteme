#pragma once

class myFAT {

   public:
	  int table [BLOCK_NUMBER];
      myFAT();
      ~myFAT();

      int link (int currentNo, int nextNo);
      int unLink ( int currentNo);
      int getNext(int no);
   private:
      /*int firstBlock:
      int nextBlock;
      int currentBlock;
      int fileLength;*/

};
