#include<iostream>
#include<string>
using namespace std;

void test01(){

    string str1 = "jiahsdkjasl";
    cout << "str1 = " << str1 << endl;
    //编程数组逐个访问字符
    for (size_t i = 0; i < str1.size(); i++)
    {
        cout << str1[i] << " ";
    }
    cout << endl;
    //通过at方式访问字符
    for (size_t i = 0; i < str1.size(); i++)
    {
        cout << str1.at(i) << " ";
    }
    cout << endl;

}

int main(){

    test01();
    return 0;
}