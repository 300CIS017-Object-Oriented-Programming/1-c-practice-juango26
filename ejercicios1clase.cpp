#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int temp, ans;
    ans = 0;
    for (int i=0;i<3;i++){
        cin >> temp;
        ans +=temp;
        
    } 
    cout << ans;
    return 0;
}