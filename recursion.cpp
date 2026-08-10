#include <bits/stdc++.h>
using namespace std;
//Shubh space
int fact(int n)
{
    if(n == 0)
    {
        return 1;
    }

    return fact(n-1)*n;
}
 


//Radhika space
void print(int i,int n) {
    if(i>n) 
    {
        return;
    }

    cout << i << endl;
    print(i+1,n);
    
}

void print3(int i,int n) {
    if(i<1) 
    {
        return;
    }

    cout << i << endl;
    print3(i-1,n);
    
}

void print4(int i,int n) {
    if(i<1) 
    {
        return;
    }
    cout << i << endl;
    print4(i-1,n);
    
}
void print5(int i,int sum) {
    if(i<1) 
    {
        cout << sum << endl;
        return;
    }
    else{
    print5(i-1,sum +  i); 
    }
    
}

int print6(int n) {
    if(n==0) 
    {
        return 0;
    }
    
    return n + print6(n-1); 
    
    
}
int fact1(int n) {
    if(n==0) 
    {
        return 1;
    }
    
    return fact1(n-1) * n; 
    
    
}


int main(){
    //cout<<print6(3)<<endl;//radhika
    // cout<<fact1(3)<<endl;//radhika
    cout<<fact(5)<<endl;//Shubh
    return 0;
}      