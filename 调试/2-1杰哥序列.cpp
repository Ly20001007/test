#include<iostream>
#include<string>
using namespace std;

int arr[1000] = {0};

int main(){
    int count = 0;
    int N,A,B;
    cin >> N >> A >> B;
    for (size_t i = 0; i < N; i++)
    {
        cin >> arr[i];
    }
    for (size_t i = 0; i < N; i++)
    {
        for(int j = i+1 ; j < N ; j++){
            if (arr[i] > arr[j])
            {
                count++;
            }
        }
    }
    int num = 0;
    if (A < B)
    {
        num = A*count;
    }else
        num = B*count;
    
    cout << num << endl;

    return 0;
}