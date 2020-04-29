#pragma once
#include <iostream>
#include <exception>
class MyException : virtual public std::exception
{
	std::string message;
	int err_num;

public:
	explicit MyException(std::string msg, int num)
	{
		message = msg;
		err_num = num;
	}

	virtual ~MyException() {};

	virtual const char* what() const noexcept override
	{
		return message.c_str();
	}

	virtual int getErrNum() const
	{
		return err_num;
	}
};

