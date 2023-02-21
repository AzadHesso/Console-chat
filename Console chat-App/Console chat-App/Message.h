#pragma once
#include "User.h"

class Message
{
public:
	Message(const std::string& from, const std::string& to, const std::string msg);

	const std::string& getFrom() const;
	void setFrom(const std::string& from);

	const std::string& getTo() const;
	void setTo(const std::string& to);

	const std::string& getMsg() const;
	void setMsg(const std::string& msg);

private:
	std::string _from;
	std::string _to;
	std::string _msg;
};