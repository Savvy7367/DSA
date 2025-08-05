#include<iostream>
using namespace std;
void hanoi(int n, char s, char h, char d){
    //base case
    if(n==0) return; 
    //recursive case
    hanoi(n-1,s,d,h);
    cout<<s<<"-->"<<d<<endl;
    hanoi(n-1,h,s,d);  
}
int main(){
    int n=3;
    hanoi(n,'A','B','C');
}