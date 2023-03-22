#include<iostream>
#include<string>
using namespace std;

void test(){

    string str1 = "hello";
    string str2 = "hello";
    //compare（）函数是逐个比较字符串的ASCII码
    if (str1.compare(str2)==0)//两字符串相等返回0
    {
        printf("字符串相等");
    }
    //大于返回1，小于返回-1
    
}

int main(){

    test();
    return 0;
}