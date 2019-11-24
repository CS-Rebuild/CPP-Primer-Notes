#include <iostream>
#include <string>

using namespace std;

typedef std::string::size_type pos;
class Screen {
public:
    Screen() = default;
    Screen(pos ht, pos wd, char c) : height(ht), width(wd), contents(ht*wd, c) {}
    char get() const { return contents[cursor]; }
    char get(pos ht, pos wd) const {
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
    Screen myScreen(5, 5, 'X');
    myScreen.move(3,4); 
    const string Screen::*pdata = Screen::data();
    auto s = myScreen.*pdata;
    cout << s << endl;
    const pos Screen::*pCursor = Screen::cur();
    cout << myScreen.*pCursor << endl;
}
