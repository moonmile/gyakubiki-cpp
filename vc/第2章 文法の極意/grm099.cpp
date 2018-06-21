
class Base {
public:
	virtual void func() {}
};
class Sub : public Base {
public:
	virtual void func2() {}
};
class Other {};

void main( void )
{
	Base *sub = new Sub();
	Base *base = new Base();
	Other *other = new Other();

	Sub *s1 = static_cast<Sub*>( sub );  // �L���X�g�\
	Sub *b1 = static_cast<Sub*>( base ); // �L���X�g�\�H
//	Sub *o1 = static_cast<Sub*>( other );// �L���X�g�s��
	
	Sub *s2 = dynamic_cast<Sub*>( sub );  // �L���X�g�\
	Sub *b2 = dynamic_cast<Sub*>( base ); // �L���X�g�\�H
	// gcc�̏ꍇ�̓R���p�C���G���[
	// VC�̏ꍇ�͎��s�G���[�ɂȂ�
	b2->func();
//	Sub *o2 = dynamic_cast<Sub*>( other );// �L���X�g�s��
	
}
