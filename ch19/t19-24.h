#ifndef T19_24_H
#define T19_24_H
#include "Sales_data.h"
#include <string>
#include <iostream>
//using std::string;
class Token {
public:
    Token() : tok(INT), ival{0} {
        std::cout << __PRETTY_FUNCTION__ << std::endl; 
    }
    Token(const Token &t) : tok(t.tok) { 
        std::cout << __PRETTY_FUNCTION__ << std::endl; 
        copyUnion(t); 
    }
    Token &operator=(const Token&);
    ~Token() {
        std::cout << __PRETTY_FUNCTION__ << std::endl; 
        if (tok == STR) sval.std::string::~string(); 
        if (tok == SD) sdval.~Sales_data();
    }
    Token &operator=(const std::string&);
    Token &operator=(char);
    Token &operator=(int);
    Token &operator=(double);
    Token &operator=(const Sales_data &);
    Token(Token &&);
    Token &operator=(Token &&);

private:
    enum {INT, CHAR, DBL, STR, SD} tok;
    union {
        char cval;
        int ival;
        double dval;
        std::string sval;
        Sales_data sdval;
    };
    void copyUnion(const Token&);
};

Token &Token::operator=(int i) {
    std::cout << __PRETTY_FUNCTION__ << std::endl; 
    if (tok == STR) sval.std::string::~string();
    if (tok == SD) sdval.~Sales_data();
    ival = i;
    tok = INT;
    return *this;
}

Token &Token::operator=(char c) {
    std::cout << __PRETTY_FUNCTION__ << std::endl; 
    if (tok == STR) sval.std::string::~string();
    if (tok == SD) sdval.~Sales_data();
    cval = c;
    tok = CHAR;
    return *this;
}

Token &Token::operator=(double d) {
    std::cout << __PRETTY_FUNCTION__ << std::endl; 
    if (tok == DBL) sval.std::string::~string();
    if (tok == SD) sdval.~Sales_data();
    dval = d;
    tok = DBL;
    return *this;
}

Token &Token::operator=(const std::string &s) {
    std::cout << __PRETTY_FUNCTION__ << std::endl; 
    if (tok == SD) sdval.~Sales_data();
    if (tok == STR)
        sval = s;
    else 
        new(&sval) std::string(s);
    tok = STR;
    return *this;
}

Token &Token::operator=(const Sales_data &sd) {
    std::cout << __PRETTY_FUNCTION__ << std::endl; 
    if (tok == STR) sval.std::string::~string();
    if (tok == SD)
        sdval = sdval;
    else 
        new(&sdval) Sales_data(sd);
    tok = SD;
    return *this;
}

Token &Token::operator=(const Token &t) {
    std::cout << __PRETTY_FUNCTION__ << std::endl; 
    if (tok == SD && t.tok != SD) sdval.~Sales_data();
    if (tok == SD && t.tok == SD) sdval = t.sdval;
    if (tok == STR && t.tok != STR) sval.std::string::~string();
    if (tok == STR && t.tok == STR)
        sval = t.sval;
    else 
        copyUnion(t);
    tok = t.tok;
    return *this;
}

void Token::copyUnion(const Token &t) {
    std::cout << __PRETTY_FUNCTION__ << std::endl; 
    switch (t.tok) {
        case Token::INT: ival = t.ival; break;
        case Token::CHAR: cval = t.cval; break;
        case Token::DBL: dval = t.dval; break;
        case Token::STR: new(&sval) std::string(t.sval); break;
        case Token::SD: new(&sdval) Sales_data(t.sdval); break;
    }
}


Token::Token(Token &&t) {
    std::cout << __PRETTY_FUNCTION__ << std::endl; 
    copyUnion(t);
    tok = std::move(t.tok);
}

Token &Token::operator=(Token &&t) {
    std::cout << __PRETTY_FUNCTION__ << std::endl; 
    if (this != &t) {
        this->~Token();
        copyUnion(t);
        tok = std::move(t.tok);
    }
    return *this;
}
#endif
