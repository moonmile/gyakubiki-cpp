void main( void )
{
	long v = 0;
	
//	int *p = static_cast<int*>( v ); 		// �L���X�g�s��
	int *p = reinterpret_cast<int*>( v );	// �L���X�g�\
	
//	long x = static_cast<long>( &v );		// �L���X�g�s��
	long x = reinterpret_cast<long>( &v );	// �L���X�g�\
}
