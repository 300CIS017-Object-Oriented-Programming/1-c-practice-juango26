#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void punto1(){
        /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int temp, ans;
    ans = 0;
    for (int i=0;i<3;i++){
        cin >> temp;
        ans +=temp;
        
    } 
    cout << ans;
}
void punto2() {
    int number;
    cin >> number;

    if (number <= 9) {
        // Print the lowercase English word corresponding to the number
        switch (number) {
            case 1:
                cout << "one";
                break;
            case 2:
                cout << "two";
                break;
            case 3:
                cout << "three";
                break;
            case 4:
                cout << "four";
                break;
            case 5:
                cout << "five";
                break;
            case 6:
                cout << "six";
                break;
            case 7:
                cout << "seven";
                break;
            case 8:
                cout << "eight";
                break;
            case 9:
                cout << "nine";
                break;
            default:
                break;
        }
    } else {
        // Print "Greater than 9" if the number is greater than 9
        cout << "Greater than 9";
    }

    cout << endl;
}
void punto3() {
    // Complete the code.
    int a;
    int b;
    cin >> a;
    cin >> b;
    for(int i=a;i<=b;i++){
        if (i<=9){
            if(i==1){
                cout << "one"<<endl;
            }
            if(i==2){
                cout << "two"<<endl;
            }
            if(i==3){
                cout << "three"<<endl;
            }
            if(i==4){
                cout << "four"<<endl;
            }
            if(i==5){
                cout << "five"<<endl;
            }
            if(i==6){
                cout << "six"<<endl;
            }
            if(i==7){
                cout << "seven"<<endl;
            }
            if(i==8){
                cout << "eight"<<endl;
            }
            if(i==9){
                cout << "nine"<<endl;
            }
        }
        else {
            if((i%2)==0){
                cout << "even"<<endl;
            }
            else if((i%2)!=0){
                cout << "odd"<<endl;
            }
        }
    }
}
//punto 4
 int max_of_four(int a, int b, int c, int d){
     int ans=0;
     if (a>ans){
         ans = a;
     }
     if (b>ans){
         ans = b;
     }
     if (c>ans){
         ans = c;
     }
     if (d>ans){
         ans = d;
     }
     
     return ans;
 }
int main() {
    punto1();
    punto2();
    punto3();
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    return 0;
}