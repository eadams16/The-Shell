all:	posh

posh:	cscd340Lab7.c ./tokenize/makeArgs.o ./utils/myUtils.o ./process/process.o ./pipes/pipes.o ./fileUtils/fileUtils.o ./linkedlist/linkedList.o ./linkedlist/listUtils.o ./myCommand/myCommand.o ./myAlias/myAlias.o
	gcc -g cscd340Lab7.c ./tokenize/makeArgs.o ./utils/myUtils.o ./process/process.o ./pipes/pipes.o ./fileUtils/fileUtils.o ./linkedlist/linkedList.o ./linkedlist/listUtils.o ./myCommand/myCommand.o ./myAlias/myAlias.o -o posh

makeArgs.o:	./tokenize/makeArgs.c ./tokenize/makeArgs.h
	gcc -g -c ./tokenize/makeArgs.c

myUtils.o:	./utils/myUtils.o ./utils/myUtils.h
	gcc -g -c ./utils/myUtils.c

process.o:	./process/process.c ./process/process.h
	gcc -g -c ./process/process.c	

pipes.o:	./pipes/pipes.c ./pipes/pipes.h
	gcc -g -c ./pipes/pipes.c

fileUtils.o:    ./fileUtils/fileUtils.c ./fileUtils/fileUtils.h
	gcc -g -c ./fileUtils/fileUtils.c

linkedList.o:    ./linkedlist/linkedList.c ./linkedlist/linkedList.h
	gcc -g -c ./linkedlist/linkedList.c

listUtils.o:    ./linkedlist/listUtils.c ./linkedlist/listUtils.h
	gcc -g -c ./linkedlist/listUtils.c

myCommand.o:    ./myCommand/myCommand.c ./myCommand/myCommand.h
	gcc -g -c ./myCommand/myCommand.c

myAlias.o:    ./myAlias/myAlias.c ./myAlias/myAlias.h
	gcc -g -c ./myAlias/myAlias.c

clean:
	rm ./pipes/pipes.o	
	rm ./utils/myUtils.o
	rm ./process/process.o
	rm ./tokenize/makeArgs.o
	rm ./fileUtils/fileUtils.o
	rm ./linkedlist/linkedList.o
	rm ./linkedlist/listUtils.o
	rm ./myCommand/myCommand.o
	rm ./myAlias/myAlias.o
	rm posh

