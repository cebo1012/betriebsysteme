﻿
#include "dMap.h"
#include "blockdevice.h"
dMap::dMap() {

	//Blockno 0 is not used
	firstFreeBlock = 1;
}



int dMap::getFreeBlocks(int neededBlocks,  int* returnArray[]) {

	for (int i = firstFreeBlock; i <= BLOCK_NUMBER; i++) {

		if (dmap[i] == 0) {
			*returnArray[neededBlocks - 1] = i;
			neededBlocks--;
		}

		//Still more blocks needed?
		if (neededBlocks == 0) {
			return 0;
		}
	}

	// Blockdevice full, no free blocks found
	return -1;
}


int dMap::setUsed(int blockNumber) {

	if(blockNumber>BLOCK_NUMBER||blockNumber<0)
		return -1;

	dmap[blockNumber] = 1;
	return 0;

}

int dMap::setUnused(int blockNumber) {
if(blockNumber>BLOCK_NUMBER||blockNumber<0)
			return -1;

	dmap[blockNumber] = 0;

	// Update first free block
	if (blockNumber < firstFreeBlock) {
		firstFreeBlock = blockNumber;
	}
return 0;
}
