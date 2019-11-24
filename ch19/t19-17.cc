#include <iostream>
#include <string>

using namespace std;

typedef std::string::size_type pos;
class Screen {
public:
    using Action = Screen& (Screen::*)();
    Screen() = default;
    Screen(pos ht, pos wd, char c) : height(ht), width(wd), contents(ht*wd, c) {}
    char get_cursor() const { 
        std::cout << __PRETTY_FUNCTION__ << endl;
        return contents[cursor]; 
    }
    char get() const { 
        std::cout << __PRETTY_FUNCTION__ << endl;
        return contents[cursor]; 
        return contents[cursor]; 
    }
    char get(pos ht, pos wd) const {
        std::cout << __PRETTY_FUNCTION__ << endl;
        return contents[cursor]; 
        pos row = ht * width;
        return contents[row + wd];
    }
    Screen &move(pos r, pos c) {
        pos row = r * width;
        cursor = row + c;
        return *this;
    }
    static const std::string Screen::*data() {
        return &Screen::contents;
    }   
    static const pos Screen::*cur() {
        return &Screen::cursor;
    }
    enum Directions {HOME, FORWARD, BACK, UP, DOWN};
    Screen &move(Directions);
    Screen& home() {
        std::cout << __PRETTY_FUNCTION__ << endl;
        return *this;
    }
    Screen& forward() {
        std::cout << __PRETTY_FUNCTION__ << endl;
        return *this;
    }
    Screen& back() {
        std::cout << __PRETTY_FUNCTION__ << endl;
        return *this;
    }
    Screen& up() {
        std::cout << __PRETTY_FUNCTION__ << endl;
        return *this;
    }
    Screen& down() {
        std::cout << __PRETTY_FUNCTION__ << endl;
        return *this;
    }
private:
    static Action Menu[];
    std::string contents;
    pos cursor = 0;
    pos height = 0, width = 0;
};

Screen& Screen::move(Directions cm) {
    return (this->*Menu[cm])();
}

Screen::Action Screen::Menu[] = {
    &Screen::home,
    &Screen::forward,
    &Screen::back,
    &Screen::up,
    &Screen::down,
};

int main() {
    cout << "----" << endl;
    Screen myScreen(5, 5, 'X');
    auto pmf = &Screen::get_cursor;
    (myScreen.*pmf)();
    pmf = &Screen::get;
    (myScreen.*pmf)();
    myScreen.move(Screen::HOME);
    myScreen.move(Screen::DOWN);
    //! auto p1 = &Screen::get;
    using Get4 = char (Screen::*)(pos, pos) const;
    Get4 p1 = &Screen::get;
    (myScreen.*p1)(2, 3);
    typedef char (Screen::*pGet)(pos, pos) const;
    pGet p2 = &Screen::get;
    (myScreen.*p2)(3, 4);
    using Move = Screen& (Screen::*)(Screen::Directions);
    Move p3 = &Screen::move;
    (myScreen.*p3)(Screen::UP);
}
