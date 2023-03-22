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

    int n,m,q;
    int op,x,y;
    cin >> n >> m >> q;
    int juzhen[n][m];
    int hang[n],lie[m];
    for (size_t i = 0; i < n; i++)
    {
        for (size_t j = 0; j < m; j++)
        {
            cin >> juzhen[i][j];
        }
        
    }
    for (size_t i = 0; i < n; i++)
    {
        hang[i] = i;
    }
    for (size_t i = 0; i < m; i++)
    {
        lie[i] = i;
    }
    
    
    for (size_t i = 0; i < q; i++)
    {
        cin >> op >> x >> y;
        printf("\n");
        if (op == 0)
        {
            swap(hang[x-1],hang[y-1]);
        }else if (op == 1)
        {
            swap(lie[x-1],lie[y-1]);
        }
        else
        cout << juzhen[hang[x-1]][lie[y-1]] << endl; 
        
        
    }
    
    

    return 0;
}