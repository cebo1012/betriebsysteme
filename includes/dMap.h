#pragma once

class Dmap {

private:

	static int dmapLength;
	static int dmap[];

	static unsigned int firstFreeBlock;


public:

	//~Dmap();
	Dmap(unsigned int totalnumberOfBlocks= BLOCK_NUMBER);



	//returns -1 if no more bloks avalible
// todo unsigned wegmachen
	int getFreeBlocks(unsigned int neededBlocks,  int* returnArray[]);
	void setUsed(unsigned int blockNumber);

	void setUnused(unsigned int blockNumber);

};
