#pragma once
#include <string>

class User
{
public:
	User(const std::string& name, const std::string& login, const std::string& password);

	const std::string& getName() const;
	void setName(const std::string& name);

	const std::string& getLogin() const;
	void setLogin(const std::string& login);

	const std::string& getPassword() const;
	void setPassowrd(const std::string& passowrd);


private:
	std::string _name;
    const std::string _login;
	std::string _password;
};
