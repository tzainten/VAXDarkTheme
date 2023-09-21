#include <iostream>

template <typename T>
class MyClass
{
public:
	void Mutate( T NewValue ) { Integer = NewValue; }
private:
	T Integer;
};

int main()
{
	std::cout << "Hello World!\n";

	MyClass<int32_t> Object;
	Object.Mutate( 500 );

	return 0;
}