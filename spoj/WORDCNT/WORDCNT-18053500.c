#include<bits/stdc++.h>
using namespace std;
	    
#define sd(a) scanf("%d",&a)
#define ss(a) scanf("%s",a)
#define sl(a) scanf("%lld",&a)
#define clr(a) memset(a,0,sizeof(a))
#define debug(a) printf("check%d\n",a)
#define all(x) x.begin(), x.end()
#define F first
#define S second
#define MP make_pair
#define PB push_back
#define ll long long
#define mod 1000000007
#define MAX 1000000
#define tr(container, it)  for(typeof(container.begin()) it = container.begin(); it != container.end(); it++)
typedef pair<int,int> pii;

unsigned int split(const std::string &txt, std::vector<std::string> &strs, char ch)
{
    unsigned int pos = txt.find( ch );
    unsigned int initialPos = 0;
    strs.clear();

    // Decompose statement
    while( pos != std::string::npos ) {
        strs.push_back( txt.substr( initialPos, pos - initialPos + 1 ) );
        initialPos = pos + 1;

        pos = txt.find( ch, initialPos );
    }

    // Add the last one
    strs.push_back( txt.substr( initialPos, std::min( pos, txt.size() ) - initialPos + 1 ) );

    return strs.size();
}

int main(){
    int n;
    string str,w;
    sd(n);
    getline(cin,str);
    for(int i=0;i<n;i++){
        int sz=0,cnt=0,maxcnt=0;
        getline(cin,str);
        istringstream iss(str, istringstream::in);
        while(iss>>w){
            if(w.length()==sz) cnt++;
            else{
                sz=w.length();
                cnt=1;
            }
            if(cnt>maxcnt) maxcnt=cnt;
        }
        printf("%d\n",maxcnt);
    }
    return 0;
}