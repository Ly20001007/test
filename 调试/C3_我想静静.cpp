#include<iostream>
#include<string>
#include<vector>

using namespace std;
 
int main(){

    int N;
    cin >> N;
    int ans[2000] = {0};
    int ans1[1001] = {0};
    for (size_t i = 0; i < N; i++)
    {
        cin >> ans[i];
    }
    for (size_t i = 0; i < N; i++)
    {
        ans1[ans[i]]++;
    }
    for (size_t i = 0; i < N; i++)
    {
        if(ans1[i] == 1)
        cout << i << endl;
    }
    
    
    return 0;
}