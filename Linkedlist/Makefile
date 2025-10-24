
allcfiles = main.c linkedlist.c

allofiles = $(allcfiles:%.c=%.o)

CC = gcc

.PHONY = clear

hidden = @ 

all:res

%.o : %.c
	${hidden} ${CC} -c $<

res : $(allofiles)
	${hidden} ${CC} -o res ${allofiles}

clear : 
	${hidden} rm -f *.o res