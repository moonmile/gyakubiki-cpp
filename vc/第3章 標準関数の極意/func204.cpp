#include <stdio.h>
#include <errno.h>
#ifndef _MSC_VER
#error "Cannot use this function in gcc"
#endif
#include <io.h>
#include <sys/stat.h>

int main( void )
{
	int ret;
	
	/* ‘‚«‚İ‹–‰Â‚ğİ’è‚·‚é */
	ret = _chmod( "func204.cpp", _S_IWRITE );
	if ( ret == 0 ) {
		printf("‘‚«‚İ‹–‰Â‚ğİ’è‚µ‚Ü‚µ‚½\n");
	} else {
		printf("‘‚«‚İ‹–‰Â‚ªİ’è‚Å‚«‚Ü‚¹‚ñ‚Å‚µ‚½\n");
	}
	
	ret = _chmod( "sample_no_file.txt", _S_IWRITE );
	if ( ret == 0 ) {
		printf("‘‚«‚İ‹–‰Â‚ğİ’è‚µ‚Ü‚µ‚½\n");
	} else {
		printf("‘‚«‚İ‹–‰Â‚ªİ’è‚Å‚«‚Ü‚¹‚ñ‚Å‚µ‚½\n");
	}
	return 1;
}
