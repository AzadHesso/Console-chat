#pragma once
#include <string>

class User
{
public:
	User(const std::string& name, const std::string& login, const std::string& password);





private:
	std::string _name;
	const std::string _login;
	std::string _password;
};
