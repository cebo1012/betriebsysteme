#pragma once

class myFAT {

   public:
	  int table [BLOCK_NUMBER];
      myFAT();
      ~myFAT();

      int link (int currentNo, int nextNo);
   private:
      /*int firstBlock:
      int nextBlock;
      int currentBlock;
      int fileLength;*/

}
