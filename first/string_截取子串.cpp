#include<iostream>
#include<string>
using namespace std;

void test(){
    string str1 = "abcde";
    cout << "str1 = " << str1 << endl;
    string str2 = str1.substr(1,3);
    //从一开始截取3个字符
    cout << "str2 = " << str2 << endl;


}

    //截取邮件用户名
void test01(){

    string email = "lly179690@qq.com";
    int pos = email.find("@");
    string Username = email.substr(0,email.find("@"));
    cout << "Username = " << Username << endl;
    }


int main(){

    test();
    test01();
    return 0;
}