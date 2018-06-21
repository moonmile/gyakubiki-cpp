
class Base {
public:
	virtual void func() {}
};
class Sub : public Base {
public:
	virtual void func2() {}
};
class Other {};

int main( void )
{
	Base *sub = new Sub();
	Base *base = new Base();
	Other *other = new Other();

	Sub *s1 = static_cast<Sub*>( sub );  // キャスト可能
	Sub *b1 = static_cast<Sub*>( base ); // キャスト可能？
//	Sub *o1 = static_cast<Sub*>( other );// キャスト不可
	
	Sub *s2 = dynamic_cast<Sub*>( sub );  // キャスト可能
	Sub *b2 = dynamic_cast<Sub*>( base ); // キャスト可能？
	// gccの場合はコンパイルエラー
	// VCの場合は実行エラーになる
	b2->func();
//	Sub *o2 = dynamic_cast<Sub*>( other );// キャスト不可
	
}
