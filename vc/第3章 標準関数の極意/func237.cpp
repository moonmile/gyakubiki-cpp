#include <stdio.h>
#include <ctype.h>

int check( const char *str )
{
	char *p;
	for ( p=(char*)str; *p != '\0'; p++ ) {
		if(!isxdigit(*p)) return 0;
	}
	return 1;
}

void main( void )
{
	char str1[] = "1FFF";
	char str2[] = "1fff";
	char str3[] = "0x100";
	char str4[] = "-10";
	char str5[] = " 1FFF ";
	
	printf("[%s] ‚Í ‚P‚Ui”‚Ì•¶š—ñ‚Å %s\n",
		str1, check( str1 )? "‚ ‚é": "‚È‚¢" );
	printf("[%s] ‚Í ‚P‚Ui”‚Ì•¶š—ñ‚Å %s\n",
		str2, check( str2 )? "‚ ‚é": "‚È‚¢" );
	printf("[%s] ‚Í ‚P‚Ui”‚Ì•¶š—ñ‚Å %s\n",
		str3, check( str3 )? "‚ ‚é": "‚È‚¢" );
	printf("[%s] ‚Í ‚P‚Ui”‚Ì•¶š—ñ‚Å %s\n",
		str4, check( str4 )? "‚ ‚é": "‚È‚¢" );
	printf("[%s] ‚Í ‚P‚Ui”‚Ì•¶š—ñ‚Å %s\n",
		str5, check( str5 )? "‚ ‚é": "‚È‚¢" );
}
