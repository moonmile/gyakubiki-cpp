#include <stdio.h>
#include <sys/utime.h>
#include <errno.h>
#include <time.h>
#include <sys/stat.h>

int main( void )
{
	FILE *fp;
	time_t tt;
	struct utimbuf ut;
	struct stat st;
   	struct tm *t;
	
	/* �ύX�Ώۂ̃t�@�C�����쐬 */
	if ( (fp = fopen("sample.dat","w")) == NULL ) {
		printf("'sample.dat' �̍쐬�Ɏ��s\n");
	} else {
		fprintf( fp, "Hello world.");
		fclose( fp );
	}
	
	/* �X�V������ yyyy/mm/dd 00:00:00 �ɐݒ� */
	time(&tt);
	t = localtime( &tt );
	t->tm_hour = 0;
	t->tm_min  = 0;
	t->tm_sec  = 0;
	ut.actime  = 0;
	ut.modtime = mktime( t );
	utime( "sample.dat", &ut );
	stat( "sample.dat", &st );
	printf( "�X�V����: %s", ctime( &st.st_mtime ));
	
	/* �X�V���������ݎ��ɐݒ� */
	utime( "sample.dat", NULL );
	stat( "sample.dat", &st );
	printf( "�X�V����: %s", ctime( &st.st_mtime ));

	return 1;
}
