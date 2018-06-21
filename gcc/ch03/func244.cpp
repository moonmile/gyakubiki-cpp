#include <stdio.h>
#include <stdlib.h>

int main( void )
{
	char *mem  = NULL;
	int  *memi = NULL;
	char *mem0 = NULL;
	char *mem1 = NULL;
	
	printf("malloc 関数で char型 100 バイト確保\n");
	mem = (char*)malloc( 100 );
	if ( mem == NULL ) {
		printf("メモリの確保に失敗しました\n");
	} else {
		printf("確保したメモリ [%p]\n", mem );
	}
	
	printf("malloc 関数で int型 100 個 確保\n");
	memi = (int*)malloc( 100 * sizeof(int) );
	if ( memi == NULL ) {
		printf("メモリの確保に失敗しました\n");
	} else {
		printf("確保したメモリ [%p]\n", memi );
	}
	
	printf("malloc 関数で 0 バイト確保\n");
	mem0 = (char*)malloc( 0 );
	if ( mem0 == NULL ) {
		printf("メモリの確保に失敗しました\n");
	} else {
		printf("確保したメモリ [%p]\n", mem0 );
	}
	
	printf("malloc 関数で -1 を指定\n");
	/* -1 を指定した場合は size_t が unsigned int で定義されているので、
	 * キャストされ、確保されるバイト数は 0x80000000 となる 
	 */
	mem1 = (char*)malloc( -1 );
	if ( mem1 == NULL ) {
		printf("メモリの確保に失敗しました\n");
	} else {
		printf("確保したメモリ [%p]\n", mem1 );
	}
	
	if ( mem  != NULL ) free( mem );
	if ( memi != NULL ) free( memi );
	if ( mem0 != NULL ) free( mem0 );
	if ( mem1 != NULL ) free( mem1 );
}
