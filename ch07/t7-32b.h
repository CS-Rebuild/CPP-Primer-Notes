#ifndef _WINDOW_MGR
#define _WINDOW_MGR

#include <vector>
#include "t7-32a.h"

class Window_mgr {
public:
    using ScreenIndex = std::vector<Screen>::size_type;
    void clear(ScreenIndex);
private:
    std::vector<Screen> screens{Screen(24, 80, ' ')};
};

