#include "StrBlob.h"

using namespace std;

int main()
{
    StrBlob sb1{ "a", "b", "c" };
    StrBlob sb2 = sb1;

    sb2[2] = "b";

    if (sb1 > sb2) {
        for (StrBlobPtr iter = sb1.begin(); iter != sb1.end(); ++iter)
            std::cout << *iter << " ";
        std::cout << std::endl;
    }

    StrBlobPtr iter(sb2);
    std::cout << iter->size() << std::endl;
}
