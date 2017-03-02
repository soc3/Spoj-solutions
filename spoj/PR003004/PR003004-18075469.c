#include<iostream>
#include<cmath>
using namespace std;

long long sum(long long N){
    if(N/10==0) return N*(N+1)/2;
    long long i=0;
    long long n=N;
    while(n/10!=0){
        i++;
        n/=10;
    }
    long long  p=pow(10,i);
    return ((n*45*i*p/10)+ n*(n-1)*p/2+ n*(N%p+1) + sum(N%p));
}

int main(){
    long long a,b;
    int t ;
    cin>>t;
    while(t--)
    {
      cin>>a>>b;    
        cout<<sum(b)-sum(a-1)<<endl;
    }
    return 0;
}