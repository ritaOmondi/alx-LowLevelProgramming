Static Library: This is a collection of objects linked into the program during compilation, hoever not relevant during runtime
0. creating a static library "libmy.a": ar rc libmy.a
1. gcc -c *.c : converting .c files to object
  ar rc liball.c *.o: Transfering all object files to the static library file.
