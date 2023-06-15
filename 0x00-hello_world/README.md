0. gcc -E $CFILE -o c : Preprocessor
1. gcc -c $CFILE : compiler
2. gcc -S $CFILE :Assembler
3. gcc $cfile -o cisfun
4. #include <stdio.h>
int main (void){
 puts("Programming is like building a multilingual puzzle");
 return (0);

}   
5. #include <stdio.h>
int main (void){
 puts("with proper grammar, but the outcome is a piece of art,");
 return (0);

}
6. #include <stdio.h>
int main (void){

int i;
char c;
double d;

 puts("The size of an int is: %lu.\n" (unsigned long)sizeof(i));
 return (0);
}
7. gcc -S -masm=$CFILE
8.  
