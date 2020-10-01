#pragma once
#include <iostream>
class myouter
{
private:
	class inner_singleton
	{
	public:
		static void GetInstance();
		static int counter;
		static int counter2;
	private:
		inner_singleton();
		~inner_singleton();
		inner_singleton(const inner_singleton&) = delete;
		inner_singleton& operator=(const inner_singleton&) = delete;
		static inner_singleton i_s;
	};

public:
	myouter(int);
	~myouter();
};

