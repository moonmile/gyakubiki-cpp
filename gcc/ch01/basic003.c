#include <stdio.h>
#include <stdlib.h>
void printmessage( const char *lang );

void printmessage( const char *lang ) {
    printf( "Hello %s world, again.\n", lang );
}
int main( void ) {
    puts("Hello C world.");
    printmessage( "C" );
}
