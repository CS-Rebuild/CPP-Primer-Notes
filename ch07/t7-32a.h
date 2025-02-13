#ifndef _SCREEN_H
#define _SCREEN_H
#include <string>
class Window_mgr;
class Screen {
    friend void Window_mgr::clear(ScreenIndex);
public:
    typedef std::string::size_type pos;

    Screen() = default;
    Screen(pos ht, pos wd) : height(ht), width(wd), contents(ht * wd, ' ') { }
    Screen(pos ht, pos wd, char c) : height(ht), width(wd), contents(ht * wd, c) { }

    char get() const { return contents[cursor]; }
    char get(pos r, pos c) const;
    Screen &set(char);
    Screen &set(pos, pos, char);
    Screen &display(std::ostream &os) { do_display(os); return *this; }
    const Screen &display(std::ostream &os) const { do_display(os); return *this; }

    Screen &move(pos r, pos c);

private:
    void do_display(std::ostream &os) const { os << contents; }


    pos cursor = 0;
    pos height = 0, width = 0;
    std::string contents;
};

inline Screen &Screen::move(pos r, pos c) {
    pos row = r * width;
    cursor = row + c;
    return *this;
}

inline char Screen::get(pos r, pos c) const {
    pos row = r * width;
    return contents[row + c];
}

inline Screen &Screen::set(char c) {
    contents[cursor] = c;
    return *this;
}

inline Screen &Screen::set(pos r, pos col, char ch) {
    contents[r * width + col] = ch;
    return *this;
}

#endif
