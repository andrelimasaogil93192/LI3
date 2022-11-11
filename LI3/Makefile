
all: programa-principal


programa-principal: programa-principal.o types.o user.o driver.o ride.o users.o
		gcc -g programa-principal.o types.o user.o driver.o ride.o users.o -lglib-2.0 -o programa-principal



types.o: src/types.c src/types.h
		gcc -Wall -g -I/usr/include/glib-2.0 -I/usr/lib/x86_64-linux-gnu/glib-2.0/include -c src/types.c -o types.o

user.o: src/user.c src/user.h types.o
		gcc -Wall -g -I/usr/include/glib-2.0 -I/usr/lib/x86_64-linux-gnu/glib-2.0/include -c src/user.c -o user.o

ride.o: src/ride.c src/ride.h types.o
		gcc -Wall -g -I/usr/include/glib-2.0 -I/usr/lib/x86_64-linux-gnu/glib-2.0/include -c src/ride.c -o ride.o

driver.o: src/driver.c src/driver.h types.o
		gcc -Wall -g -I/usr/include/glib-2.0 -I/usr/lib/x86_64-linux-gnu/glib-2.0/include -c src/driver.c -o driver.o

users.o: src/users.c src/users.h types.o
		gcc -Wall -g -I/usr/include/glib-2.0 -I/usr/lib/x86_64-linux-gnu/glib-2.0/include -c src/users.c -o users.o

programa-principal.o: src/main.c
		gcc -Wall -g -I/usr/include/glib-2.0 -I/usr/lib/x86_64-linux-gnu/glib-2.0/include -c src/main.c -o programa-principal.o

clean:
		rm * programa-principal