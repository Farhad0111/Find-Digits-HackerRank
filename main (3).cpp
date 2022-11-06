/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

struct Farhad{
    int faru(int t){
        int n,count=0;
        cin>>n;
        int new_n=n;
       // cout<<n<<endl;
       while(n!=0){
           int d=n%10;
           n=n/10;
          if(d!=0&&new_n%d==0){
               count++;
           }
         //  cout<<"n: "<<n<<endl<<"d: "<<d<<endl<<"MOD: "<<n%d<<endl;
       }
       cout<<count<<endl;
        return 0;
    }
};

int main(){
    Farhad farhad=Farhad();
    int t;
    cin>>t;
    while(t--){
    farhad.faru(t);
    }
    return 0;
}