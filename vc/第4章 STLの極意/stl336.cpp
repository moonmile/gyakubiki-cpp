#include <string>
#include <iostream>
using namespace std;

void main( void )
{
	string str1("Hello world.");
	
	// æ“ª‚©‚ç‘S‘Ì‚Å’Tõ
	cout << "æ“ª‚©‚ç world ‚ª " << 
		str1.find("world") << " ƒoƒCƒg–Ú‚ÉŒ©‚Â‚©‚è‚Ü‚µ‚½" << endl;
	cout << "æ“ª‚©‚ç web ‚ª " << 
		(( str1.find("web") != string::npos )? "Œ©‚Â‚©‚Á‚½": "Œ©‚Â‚©‚ç‚È‚©‚Á‚½") << endl;
	// w’è•¶šˆÈ~‚Å’Tõ
	cout << "4 •¶š–ÚˆÈ~‚Å world ‚ª " << 
		(( str1.find("world",3) != string::npos )? "Œ©‚Â‚©‚Á‚½": "Œ©‚Â‚©‚ç‚È‚©‚Á‚½") << endl;
	cout << "4 •¶š–ÚˆÈ~‚Å Hello ‚ª " << 
		(( str1.find("Hello",3) != string::npos )? "Œ©‚Â‚©‚Á‚½": "Œ©‚Â‚©‚ç‚È‚©‚Á‚½") << endl;
	// w’è•¶šˆÈ~‚ÅAw’è•¶š”•ª‚ğ’Tõ‘ÎÛ‚É‚·‚é
	cout << "7 •¶š–ÚˆÈ~‚Å wo ‚ª " <<
		(( str1.find("wowow",6,2) != string::npos )? "Œ©‚Â‚©‚Á‚½": "Œ©‚Â‚©‚ç‚È‚©‚Á‚½") << endl;
	cout << "9 •¶š–ÚˆÈ~‚Å wo ‚ª " <<
		(( str1.find("wowow",8,2) != string::npos )? "Œ©‚Â‚©‚Á‚½": "Œ©‚Â‚©‚ç‚È‚©‚Á‚½") << endl;
}
