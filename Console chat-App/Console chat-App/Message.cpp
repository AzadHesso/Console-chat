#include "Message.h"

Message::Message(const std::string& from, const std::string& to, const std::string msg)
    : _from(from), _to(to), _msg(msg) {}
