#pragma once
#include "Message.h"
#include <memory>
#include <vector>
#include <exception>

class Chat
{
public:
	void start();
	bool isChatWork() const;
	std::shared_ptr<User> getCurrentUser() const;
	void showLoginMenu();
	void showUserMenu();
	void login();
	void signUp();
	void showChat() const;
	void showAllUsersName()const;
	void addMessage();
	std::vector<User>& getAllUsers();
	std::vector<Message>& getAllMessages();
	std::shared_ptr<User> getUserByLogin(const std::string& login) const;


private:
	bool _isChatWork = false;
	std::vector<User> _userArr;
	std::vector<Message> _messageArr;
	std::shared_ptr<User> _currentUser = nullptr;
};

struct LoginException : public std::exception
{
	const char* what() const noexcept override
	{
		return "Error: Login is busy!";
	}
};