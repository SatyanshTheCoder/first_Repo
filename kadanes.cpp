#include<bits/stdc++.h>
using namespace std;
int main(){
    int sum = 0;
    int max = 0;
    vector<int> v = {-2,1,-3,4,-1,2,1,-5,4};
    for (int i = 0; i < v.size();i++){
        sum = sum + v[i];
        if (sum < 0)
            sum = 0;
        if(max<sum)
           max = sum;
    }
    cout << max;
    return 0;

}