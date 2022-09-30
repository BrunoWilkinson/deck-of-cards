#ifndef exception_h
#define exception_h

#include <exception>

class E : public std::exception {
    const char * msg = nullptr;
    E();
public:
    E(const char *s) noexcept(true) : msg(s) {}
    const char* what() const noexcept(true) { return msg; }
};

#endif // exception_h