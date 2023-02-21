#pragma once
#include "User.h"

class Message
{
public:
	Message(const std::string& from, const std::string& to, const std::string msg);


private:
	std::string _from;
	std::string _to;
	std::string _msg;
};