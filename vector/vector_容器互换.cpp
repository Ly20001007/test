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

void printVector_odd(vector<int>&v){
    for(size_t i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }
    cout << endl;
}

int main(){
    vector<int> v1;
    for (size_t i = 0; i < 10; i++)
    {
        v1.push_back(i);
    }

    

    return 0;
}