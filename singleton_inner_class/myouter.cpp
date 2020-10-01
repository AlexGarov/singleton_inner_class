#include "myouter.h"

myouter::inner_singleton myouter::inner_singleton::i_s;
int myouter::inner_singleton::counter=0;
int myouter::inner_singleton::counter2 = 0;
void myouter::inner_singleton::GetInstance()
{
	std::cout << "GetInstance\n";
	std::cout << counter2++ << std::endl;
}

myouter::inner_singleton::inner_singleton()
{
	std::cout << "Create sing\n";
	std::cout << counter++<<std::endl;
}

myouter::inner_singleton::~inner_singleton()
{
	std::cout << "Destroy sing\n";
}

myouter::myouter(int i)
{
	std::cout << "Create myouter\n";
	std::cout << i<<std::endl;
	inner_singleton::GetInstance();
}

myouter::~myouter()
{
	std::cout << "Destroy myouter\n";
}
