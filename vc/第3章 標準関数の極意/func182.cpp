#include <stdio.h>

int main( void )
{
	int ch;
	/* �W���o�͂���ǂݏo�����Ƃ���ƃG���[������ */
	ch = fgetc( stdout );
	if ( ferror( stdout ) ) {
		printf("�W���o�͂���ǂݏo�����Ƃ��ăG���[������\n");
	}
	/* �N���A�����ɕW�����͂֏o�� */
	puts("�N���A�����ɕW���o�͂֏o��");
	if ( ferror( stdout ) ) {
		printf("�O��̃G���[���c���Ă���\n");
	}
	/* �G���[���N���A���� */
	clearerr(stdout);
	
	if ( ferror( stdout ) ) {
		printf("�O��̃G���[���c���Ă���\n");
	} else {
		printf("�G���[�̓N���A����܂���\n");
	}
	return 1;
}
