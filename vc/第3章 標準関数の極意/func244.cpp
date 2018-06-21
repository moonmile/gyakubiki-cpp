#include <stdio.h>
#include <stdlib.h>

void main( void )
{
	char *mem  = NULL;
	int  *memi = NULL;
	char *mem0 = NULL;
	char *mem1 = NULL;
	
	printf("malloc �֐��� char�^ 100 �o�C�g�m��\n");
	mem = (char*)malloc( 100 );
	if ( mem == NULL ) {
		printf("�������̊m�ۂɎ��s���܂���\n");
	} else {
		printf("�m�ۂ��������� [%p]\n", mem );
	}
	
	printf("malloc �֐��� int�^ 100 �� �m��\n");
	memi = (int*)malloc( 100 * sizeof(int) );
	if ( memi == NULL ) {
		printf("�������̊m�ۂɎ��s���܂���\n");
	} else {
		printf("�m�ۂ��������� [%p]\n", memi );
	}
	
	printf("malloc �֐��� 0 �o�C�g�m��\n");
	mem0 = (char*)malloc( 0 );
	if ( mem0 == NULL ) {
		printf("�������̊m�ۂɎ��s���܂���\n");
	} else {
		printf("�m�ۂ��������� [%p]\n", mem0 );
	}
	
	printf("malloc �֐��� -1 ���w��\n");
	/* -1 ���w�肵���ꍇ�� size_t �� unsigned int �Œ�`����Ă���̂ŁA
	 * �L���X�g����A�m�ۂ����o�C�g���� 0x80000000 �ƂȂ� 
	 */
	mem1 = (char*)malloc( -1 );
	if ( mem1 == NULL ) {
		printf("�������̊m�ۂɎ��s���܂���\n");
	} else {
		printf("�m�ۂ��������� [%p]\n", mem1 );
	}
	
	if ( mem  != NULL ) free( mem );
	if ( memi != NULL ) free( memi );
	if ( mem0 != NULL ) free( mem0 );
	if ( mem1 != NULL ) free( mem1 );
}
