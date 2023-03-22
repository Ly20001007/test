#include<iostream>
#include<string>
#include<vector>
#include<sstream>
#include<algorithm>
#include<cmath>
#include<set>
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

//比较两个字符串是否有相同字符
bool match(int x,int t){
    stringstream sm;
    sm << x << endl << t;
    string match,m;
    sm >> match >> m;
    for (size_t i = 0; i < match.size(); i++)
    {
        if (m.find(match.substr(i,1)) != -1)
        {
            return true;
        }
        
    }
    return false;
}

int main(){
    int X,D;
    int ans = 0;
    set<int> setnum;
    cin >> X;

    int limit = sqrt(X);
    for (size_t i = 1; i <= limit; i++)
    {
        if (X % i == 0 && match(X,i)) 
        {
            setnum.insert(i);
        }
        int f = X / i;
        if (X % f == 0 && match(X,f)) 
        {
            setnum.insert(f);
        }
        
    }
    cout << setnum.size() << endl;

    return 0;
}