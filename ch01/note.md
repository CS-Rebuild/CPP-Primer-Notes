# 1 开始

- C++并未定义任何输入输出语句，包含一个全面的库来提供IO机制
- endl: 相当于结束当前行，并将与设备关联的缓冲区的内容刷到设备中
- 调试阶段最好的注释方式是使用`//`注释掉代码段的每一行
- 输入运算符`>>`和输出运算符`<<`，返回其左侧对象。
  ```c++
  std::cout << v1 << v2;
  // std::cout是对象
  // 相当于 std::cout << v1 -> std::cout -> std::cout << v2
  // << 运算符返回其左侧的运算对象作为计算结果，第一次运算std::cout<<v1的结果为std::cout，然后作为第二次运算的左侧运算对象，结果放在std::cout中
  (std::cout << v1) << v2;

  std::cin >> v1 >> v2;
  // std::cin是对象
  // 相当于 std::cin >> v1 -> std::cin -> std::cin >> v2
  // >> 运算符返回其左侧的运算对象作为计算结果，虽然是输入的值存在v1中，第一次运算std::cin>>v1数值存入v1，但是返回std::cin对象，然后该对象作为第二次运算的左侧对象，然后输入值存入v1，再返回std::cin对象
  (std::cin >> v1) >> v2;
  ```
- 文件结束符：windows(ctrl+z -> enter); unix(ctrl+d)
  ```C++
  #include <iostream> 
  int main() {
    int sum = 0, value = 0;
    // read until end-of-file, calculating a running total of all values read
    // 遇到结束符或者无效输入，比如不是整数，iostream会返回无效，条件就为假。这里结束符为在unix中（ctrl+d），windows中（ctrl+z -> enter）
    while (std::cin >> value) 
      sum += value; // equivalent to sum = sum + value
    std::cout << "Sum is: " << sum << std::endl;
    return 0;
  }
  ```
- 默认情况下读`cin`会刷新`cout`，程序非正常终止时也会刷新`cout`
- 默认情况下写`cerr`的数据是不缓冲的
  