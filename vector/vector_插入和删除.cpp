#include<iostream>
#include<string>
#include<vector>
using namespace std;

void printVector(vector<int>&v){
    for(vector<int>::iterator it = v.begin();it != v.end(); it++){
        cout << *it << " ";
    }
    cout << endl;
}


int main(){
    vector<int> v1;
    for (size_t i = 0; i < 10; i++)
    {
        v1.push_back(i);
    }

    printVector(v1);
    v1.pop_back();
    printVector(v1);
    //插入可从头部开始,第一个参数是迭代器
    v1.insert(v1.begin(),2,100);
    printVector(v1);

    //删除也可以从头部开始、参数是迭代器
    v1.erase(v1.begin());
    printVector(v1);


    //清空
    v1.clear();
    printVector(v1);
    return 0;
}