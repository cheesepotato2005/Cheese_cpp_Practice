#include<iostream>
                                                                  /*
-----Ep1.引用-----
_________________________________________________________________
··引用的理解：引用是对一个变量取别名。
··引用符号：  &
··举例：     int& b = a; //即对变量a，取一个别名b，（a就是b，b就是a）
_________________________________________________________________

$对下面的入口函数解注释可以进行测试：
可以看到，改变b的值，a的值也随之改变。
                                                                 */

//int main() {
//    int a = 6;
//    int& b = a;
//    std::cout<<a<<std::endl;//输出为6
//    std::cout<<b<<std::endl;//输出为6
//    b += 1;
//    std::cout<<a<<std::endl;//输出为7
//    system("pause");
//    return 0;
//}

                                                                          /*
________________________________________________________________________
>>>>>题目一：请撰写一个函数void swap(int& a, int& b){}实现a和b值的调换<<<<<

$可以解注释下方入口函数检验，检验结果应为：

1  0
3  -7                                                                     */

//int main() {
//	int a = 0, b = 1, c = -7, d = 3;
//	swap(a, b);
//	std::cout << a << " " << b << std::endl;
//	swap(c, d);
//	std::cout << c << " " << d << std::endl;
//	system("pause");
//	return 0;
//}

                                                                           /*
_________________________________________________________________________
>>>>>题目二：请阅读以下代码：
int& Function(){
    static int a = 2024;
    return a;
}
int main(){    
    int& ref = Function();
    Function() += 1;
    std::cout  << ref << std::endl;
    return 0;
}
思考：此程序输出的结果是多少？
理解重点：1.为什么函数int& Function()可以作左值？
         2.a是一个局部变量吗？为什么？
——————————————————————————————————————————————————————————————————————————
                                                                          */
//作者：cheesepotato2025//NJAU//