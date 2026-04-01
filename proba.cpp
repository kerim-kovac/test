#include<iostream>
#include<vector>

using namespace std;

template<typename T>
T zamjena(T &a, T &b){
     T pomocna = a;
     a = b;
     b = pomocna;
     cout<<"\nNakon zamjene\n";
     cout<<"A: "<<a<<"\n";
     cout<<"B: "<<b<<"\n";
}


int main(){
     int a=5;
     int b=7;
     cout<<"\nPrije zamjene\n";
     cout<<"A: "<<a<<"\n";
     cout<<"B: "<<b<<"\n";
     zamjena(a,b);
}
