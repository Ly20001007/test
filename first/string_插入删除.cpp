#include<iostream>
#include<string>
using namespace std;

void test(){
    string str1 = "oooo";
    cout << "str1 = " << str1 << endl;
    str1.insert(2,"iiii");
    cout << "str1 = " << str1 << endl;

    //擦除，从第几个位置开始擦除几个
    str1.erase(2,4);
    cout << "str2 = " << str1 << endl;
}

int main(){

    test();
    return 0;
}