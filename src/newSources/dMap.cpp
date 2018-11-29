Dmap::Dmap(unsigned int totalNumberOfBlocks) {

//TODO nulltest element ist nicht belegt
	dmapLength = totalNumberOfBlocks-1;

	dmap[totalNumberOfBlocks - 1];

	firstFreeBlock = 0;
}



int Dmap::getFreeBlocks(unsigned int neededBlocks,  int* returnArray[]) {

	for (unsigned int i = firstFreeBlock; i < dmapLength; i++) {

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




void Dmap::setUsed(unsigned int blockNumber) {

	dmap[blockNumber] = 1;

}


void Dmap::setUnused(unsigned int blockNumber) {

	dmap[blockNumber] = 0;


	// Update first free block

	if (blockNumber < firstFreeBlock) {

		firstFreeBlock = blockNumber;

	}

}
