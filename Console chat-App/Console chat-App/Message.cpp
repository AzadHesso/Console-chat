#include "Message.h"

Message::Message(const std::string& from, const std::string& to, const std::string msg)
    : _from(from), _to(to), _msg(msg) {}

const std::string& Message::getFrom() const
{
    return _from;
}

void Message::setFrom(const std::string& from)
{
    _from = from;
}

const std::string& Message::getTo() const
{
    return _to;
}

void Message::setTo(const std::string& to)
{
    _to = to;
}

const std::string& Message::getMsg() const
{
    return _msg;
}

void Message::setMsg(const std::string& msg)
{
    _msg = msg;
}
