#include<iostream>
#include<string>
using namespace std;

int main(){
    string str1 = "我";
    //直接拼接
    str1 += "woshinidie1";
    cout << "str1 = " << str1 << endl;

    //拼接字符串家
    string str2 = "LLOHHS";
    str1 += str2;
    cout << "str1 = " << str1 << endl;
    

    //append 拼接
    string str3 = "I";
    str3.append("LOVE YOU");
    cout << "str3 = " << str3 << endl;
    
    //拼接前5个字符
    str3.append("game over",5);
    cout << "str1 = " << str3 << endl;

    str3.append(str1);
    cout << "str1 = " << str3 << endl;
    
    //截取具体位置具体个数
    string str4 = "C++";
    cout << "str4 = " << str4 << endl;
    str4.append(str3,0,4);//冲第0个位置开始截取4个字符
    cout << "str4 = " << str4 << endl;
    return 0;
}