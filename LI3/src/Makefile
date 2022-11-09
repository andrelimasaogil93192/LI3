


CFLAGS=-Wall -g -I/usr/include/glib-2.0 -I/usr/lib/x86_64-linux-gnu/glib-2.0/include -c

program: main.o user.o driver.o ride.o types.o users.o drivers.o rides.o 
	gcc $(CFLAGS) $^ -o program -lm


main.o: main.c
	gcc $(CFLAGS) -c $^

user.o : user.c user.h
	gcc $(CFLAGS) -c $^ 

driver.o : driver.c driver.h
	gcc $(CFLAGS) -c $^

ride.o: ride.c ride.h
	gcc $(CFLAGS) -c $^

types.o: types.c types.h
	gcc $(CFLAGS) -c $^

users.o : users.c users.h
	gcc $(CFLAGS) -c $^ 

clean:
	rm *.o Guiao4