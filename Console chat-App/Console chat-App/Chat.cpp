#include "Chat.h"
#include <iostream>

void Chat::start()
{
	_isChatWork = true;
}

bool Chat::isChatWork() const
{
	return _isChatWork;
}

std::shared_ptr<User> Chat::getCurrentUser() const
{
	return _currentUser;
}

void Chat::login()
{
	std::string login;
	std::string password;
	char operation;

	do
	{
		std::cout << "Login: ";
		std::cin >> login;
		std::cout << "Password: ";
		std::cin >> password;

		_currentUser = getUserByLogin(login);

		if (_currentUser == nullptr || (password != _currentUser->getPassword()))
		{
			_currentUser = nullptr;

			std::cout << "Error login failed..." << std::endl;
			std::cout << "Enter (e) to Exit, or any key to repeat: ";
			std::cin >> operation;

			if (operation == 'e')
				break;
		}

	} while (!_currentUser);
}

void Chat::signUp()
{
	std::string name;
	std::string login;
    std::string password;

	std::cout << "Name: ";
	std::cin >> name;
	std::cout << "Login: ";
	std::cin >> login;
	std::cout << "Password: ";
	std::cin >> password;

	if (getUserByLogin(login) || login == "all")
	{
		throw LoginException();
	}

	User user = User(name, login, password);
	_userArr.push_back(user);
	_currentUser = std::make_shared<User>(user);

}

void Chat::showChat() const
{
	std::string from;
	std::string to;

	std::cout << " Chat " << std::endl;

	for (auto& message : _messageArr)
	{
		if (_currentUser->getLogin() == message.getFrom() || _currentUser->getLogin() == message.getTo() || message.getTo() == "all")
		{
			from = (_currentUser->getLogin() == message.getFrom()) ? "Me" : getUserByLogin(message.getFrom())->getName();

			if (message.getTo() == "all")
			{
				to = "all";
			}
			else
			{
				to = (_currentUser->getLogin() == message.getTo()) ? "Me" : getUserByLogin(message.getTo())->getName();
			}

			std::cout << "Message from " << from << " to " << to << std::endl;
			std::cout << "Msg: " << message.getMsg() << std::endl;
		}
	}
}

std::vector<User>& Chat::getAllUsers()
{
	return _userArr;
}

std::vector<Message>& Chat::getAllMessages()
{
	return _messageArr;
}

std::shared_ptr<User> Chat::getUserByLogin(const std::string& login) const
{

	for (auto& user : _userArr)
	{
		if (login == user.getLogin())
			return std::make_shared<User>(user);
	}
	return nullptr;
}
