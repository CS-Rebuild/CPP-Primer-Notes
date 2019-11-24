#include <iostream>
#include <string>

using namespace std;

typedef std::string::size_type pos;
class Screen {
public:
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
private:
    std::string contents;
    pos cursor = 0;
    pos height = 0, width = 0;
};

int main() {
    cout << "----" << endl;
    Screen myScreen(5, 5, 'X');
    auto pmf = &Screen::get_cursor;
    (myScreen.*pmf)();
    pmf = &Screen::get;
    (myScreen.*pmf)();
    //! auto p1 = &Screen::get;
}
