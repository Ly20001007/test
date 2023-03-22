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

    //empty()判断是否为空，capacity()表示容量，size()表示大小，也就是元素个数

    if (v1.empty()==1)
    {
        printf("empty sussfully");
    }else{
        cout << "容器不为空" << endl;
        cout << "容器容积"  << v1.capacity() << endl;
        cout << "容器大小"  << v1.size() << endl;

    }
    
    v1.resize(15,10);//默认补0
    printVector(v1);
    v1.resize(5);
    printVector(v1);
    return 0;
}