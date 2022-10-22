#include<iostream>
using namespace std;
void print(int n,int shift){
    string pattern="";
    for(int i=0;i<shift;i++)
        pattern+=" ";
    for(int i=0;i<n;i++)
        pattern+="* ";
    cout<<pattern<<endl;
}
void fractal_pattern(int n,int shift){
    if(n==1)
        print(n,shift);
    else if(n>=2){
        fractal_pattern(n/2,shift);
        print(n,shift);
        fractal_pattern(n/2,shift+n/2);
    }
}
int main(){
    fractal_pattern(8,0);
}