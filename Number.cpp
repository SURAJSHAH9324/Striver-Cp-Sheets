#include<iostream>
#include<cstring>
using namespace std;
int ChangeDigit(char t){
    return '9' - t + 48;
}
int main(){

    char x[20] ,y;
    cin >> x ;
    for(int i = 0 ; i < strlen(x);i++){
        if(i== 0){
            x[i] == '9' ;
                continue;
        }
        y = ChangeDigit(x[i]);
        if(x[i] > y){
            x[i] = y ;
        }
        
    }
    cout << x ;
    return 0;
}
