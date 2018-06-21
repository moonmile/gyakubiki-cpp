#include <stdio.h>
#include <utime.h>
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
	
	/* 変更対象のファイルを作成 */
	if ( (fp = fopen("sample.dat","w")) == NULL ) {
		printf("'sample.dat' の作成に失敗\n");
	} else {
		fprintf( fp, "Hello world.");
		fclose( fp );
	}
	
	/* 更新時刻を yyyy/mm/dd 00:00:00 に設定 */
	time(&tt);
	t = localtime( &tt );
	t->tm_hour = 0;
	t->tm_min  = 0;
	t->tm_sec  = 0;
	ut.actime  = 0;
	ut.modtime = mktime( t );
	utime( "sample.dat", &ut );
	stat( "sample.dat", &st );
	printf( "更新時刻: %s", ctime( &st.st_mtime ));
	
	/* 更新時刻を現在時に設定 */
	utime( "sample.dat", NULL );
	stat( "sample.dat", &st );
	printf( "更新時刻: %s", ctime( &st.st_mtime ));

	return 1;
}
