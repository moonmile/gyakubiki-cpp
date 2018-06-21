void main( void )
{
	long v = 0;
	
//	int *p = static_cast<int*>( v ); 		// キャスト不可
	int *p = reinterpret_cast<int*>( v );	// キャスト可能
	
//	long x = static_cast<long>( &v );		// キャスト不可
	long x = reinterpret_cast<long>( &v );	// キャスト可能
}
