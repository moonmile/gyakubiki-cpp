#include <stdio.h>

int main( void )
{
	FILE *fp = NULL;
	char buffer[100];
	
	if ( (fp=fopen("sample.dat","w")) == NULL ) {
		printf("'sample.dat' を書き込みオープンできませんでした\n");
		return 0;
	}
	fputs("Hello world\n", fp );
	fputs("Hello world, too\n", fp );
	fclose( fp );
	
	if ( (fp=fopen("sample.dat","r")) == NULL ) {
		printf("'sample.dat' を読み出しオープンできませんでした\n");
		return 0;
	}
	
	/* １行読み込む */
	fgets( buffer, sizeof buffer, fp );
	printf("%s", buffer );
	printf("現在位置は: %d\n", ftell(fp));
	fgets( buffer, sizeof buffer, fp );
	printf("%s", buffer );
	printf("現在位置は: %d\n", ftell(fp));
	fseek( fp, 0, SEEK_SET );
	printf("現在位置は: %d\n", ftell(fp));

	fclose( fp );
	return 1;
}
