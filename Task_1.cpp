/*
#include<iostream>
using namespace std;

int y(int x) {
    if (x == 0) {
        return 1;}

        if (x<0){
            throw "The number is under zero.";
        }

    else
    {
        long long int multiplier = y(x - 1);
        if ( INT_MAX / x < multiplier) {
            throw invalid_argument("Too big number. An arithmetic overflow has occurred (out of int range).");
        }
        return x * multiplier;
    }
}
int main(){
    try{
        cout<<y(12312);
    }
    catch(const char *ch){
    cout<<ch;
    }
    catch(const exception &c){
        cout<<c.what();
    }
    return 0;
}
*/
