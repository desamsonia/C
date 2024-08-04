#***** Method 1 ********

#final:
#	gcc main.c add.c mul.c -o final

#***** Method 2 ********
$(CC) = gcc
final:
	$(CC) main.c add.c mul.c -o final

Clean:
	rm *.o final

#**** Method 3 **********
$(CC) = gcc
final: main.o add.o mul.o
	$(CC) main.o add.o mul.o -o final

main.o: main.c header.h
	$(CC) -c main.c

add.o: add.c header.h
	$(CC) -c add.c

mul.o: mul.c header.h
	$(CC) -c mul.c

clean:
	rm *.o final
