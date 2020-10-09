OBJS	= main.o telecom.o
SOURCE	= main.c telecom.c
HEADER	= telecom.h
OUT	= test.out
CC	 = gcc
FLAGS	 = -g -c -Wall
LFLAGS	 = 

all: $(OBJS)
	$(CC) -g $(OBJS) -o $(OUT) $(LFLAGS)

main.o: main.c
	$(CC) $(FLAGS) main.c 

telecom.o: telecom.c
	$(CC) $(FLAGS) telecom.c 


clean:
	rm -f $(OBJS) $(OUT)
