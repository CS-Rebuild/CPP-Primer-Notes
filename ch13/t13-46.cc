#include <vector>
using namespace std;

int f() {
    return 0;
}

int main() {
  vector<int> vi(100);
  int &&r1 = f();  //返回非引用类型的函数
  int &r2a = vi[0]; //下标
  //! int &&r2b = vi[0]; //对象的值
  int &r3 = r1; //变量是左值
  int &&r4 = vi[0] * f(); //算术
}
