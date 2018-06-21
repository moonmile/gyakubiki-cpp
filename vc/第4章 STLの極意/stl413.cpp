#include <iostream>
#include <map>
using namespace std;

void main( void )
{
	map <char, int> m1;
	int i;
	for ( i=0; i<10; i++ ) m1.insert( pair <char, int> ('A'+i, i) );
	
	char ch = 'C';
	cout << "key '" << ch << "' ‚Ì—v‘f”: " << m1.count( ch ) << endl;
	// map ‚Å‚Íd•¡‚µ‚½—v‘f‚Í‚È‚¢‚Ì‚Åí‚É‚P‚É‚È‚é
	m1.insert(pair<char, int>('C',3));
	cout << "key '" << ch << "' ‚Ì—v‘f”: " << m1.count( ch ) << endl;
	
	
	// multimap ‚Ìê‡‚ÍAd•¡‚ð‹–‚·‚Ì‚Å—v‘f”‚ª•Ô‚é
	multimap<char, int> m2;
	for ( i=0; i<10; i++ ) m2.insert( pair <char, int> ('A'+i, i) );

	cout << "key '" << ch << "' ‚Ì—v‘f”: " << m2.count( ch ) << endl;
	m2.insert(pair<char, int>('C',3));
	cout << "key '" << ch << "' ‚Ì—v‘f”: " << m2.count( ch ) << endl;
	
}
