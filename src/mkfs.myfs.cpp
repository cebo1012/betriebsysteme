//
//  mk.myfs.cpp
//  myfs
//
//  Created by Oliver Waldhorst on 07.09.17.
//  Copyright © 2017 Oliver Waldhorst. All rights reserved.
//

#include "myfs.h"
#include "blockdevice.h"
#include "macros.h"

int main(int argc, char *argv[]) {

    // TODO: Implement file system generation & copying of files here
	//We can try to test first hier
	MyFS* fileSystem = new MyFS();
	printf("%i", fileSystem);
    //no mistakes? It's done!
    return 0;
}
