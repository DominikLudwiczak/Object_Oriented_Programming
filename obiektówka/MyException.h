#pragma once
#include <iostream>
class MyException
{
	std::string message;
	int err_num;

public:
	explicit MyException(std::string msg, int num)
	{
		message = msg;
		err_num = num;
	}
};

