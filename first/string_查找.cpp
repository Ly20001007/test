#include<iostream>
#include<string>
using namespace std;

void test01(){

    string str1 = "abcdefg";
    //find函数使用
    int pos = str1.find("d");
    cout << "pos = " << pos << endl;

    //无对应字符返回-1
    int pos1 = str1.find("z");
        cout << "pos1 = " << pos1 << endl;
    //rfind（）可实现从右往左数


}


    //字符串替换
    void test03(){

        string str2 = "abcdefg";
        cout << "str2 = " << str2 << endl;
        str2.replace(1,3,"oooo"); //将1位置到3位置的字符替换成oooo
        cout << "str2 replace = " << str2 << endl;
    }
int main(){

    // test01();
    test03();
    return 0;
}