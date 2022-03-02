CC = gcc
CFLAGS = -g -Wall -c
INCLUDEPATH = ./../include
SRCPATH = ./../src
OBJPATH = ./../obj
BINPATH = ./../bin


$(BINPATH)/main: $(OBJPATH)/main.o $(OBJPATH)/source.o
	$(CC) -Wall -g -o main $(OBJPATH)/main.o $(OBJPATH)/source.o
	mv main $(BINPATH)

$(OBJPATH)/main.o: $(SRCPATH)/main.c $(INCLUDEPATH)/header.h
	$(CC) $(CFLAGS) $(SRCPATH)/main.c -I $(INCLUDEPATH)/
	mv main.o $(OBJPATH)/

$(OBJPATH)/source.o: $(SRCPATH)/source.c $(INCLUDEPATH)/header.h
	$(CC) $(CFLAGS) $(SRCPATH)/source.c -I $(INCLUDEPATH)/
	mv source.o $(OBJPATH)/

clear:
	rm $(BINPATH)/main $(OBJPATH)/main.o $(OBJPATH)/source.o
run:
	${BINPATH}/./main