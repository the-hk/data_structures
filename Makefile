# this makefile is the main makefile which compile all the folders and run them sequencely
GLB_PWD=$(pwd)

all: hashTableMake heapMake stackMake linkedlistMake queueMake

purge: hashTablePurge heapPurge stackPurge linkedlistPurge queuePurge

hashTableMake:
	cd GLB_PWD; cd hashTable; make ;

heapMake:
	cd GLB_PWD; cd heap; make ;

stackMake:
	cd GLB_PWD; cd stack; make ;

linkedlistMake:
	cd GLB_PWD; cd linkedList; make ;

queueMake:
	cd GLB_PWD; cd queue; make ;


hashTablePurge:
	cd GLB_PWD; cd hashTable; make purge;

heapPurge:
	cd GLB_PWD; cd heap; make purge;

stackPurge:
	cd GLB_PWD; cd stack; make purge; 

linkedlistPurge:
	cd GLB_PWD; cd linkedList; make purge;

queuePurge:
	cd GLB_PWD; cd queue; make purge;