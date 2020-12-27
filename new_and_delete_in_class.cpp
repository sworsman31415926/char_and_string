#include<iostream>
using std::cout;
using std::endl;
using std::string;

class MyClass{
public:
    struct Student{
        int sno;//学号
        string name;//姓名
        int grade;//成绩
    };
};
void main(void)
{
    //主要体会new的用法
    //1.创建类的对象
    MyClass  *myClass = new MyClass;//myClass指向申请空间的首地址
    MyClass::Student student;//创建结构体对象
    student.sno = 1;
    student.name = "张三";
    student.grade = 90;
    //输出
    delete  myClass;//安全考虑new申请的空间必须释放
}