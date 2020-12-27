/*char型字符串的使用，怎样进行修改值*/
#include <stdio.h>
#include <string.h>
 
struct Student 
{
	int sid;
	char name[20];
	int age;
} st;  //此处分号不可省略
 
int main(void) 
{
 
	struct Student st = {1000,"zhangsan",20};
	printf("%d  %s  %d\n", st.sid, st.name, st.age);
	st.sid = 500;
	// st.name="lisi"  //error
    //use the code
	strcpy(st.name,"lisi");
	st.age = 20;
    printf("%d  %s  %d\n", st.sid, st.name, st.age);
	//while(true){}
}

/*
1000  zhangsan  20
500  lisi  20
*/