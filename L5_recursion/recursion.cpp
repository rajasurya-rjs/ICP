#include <bits/stdc++.h>
using namespace std;
#define f first
#define s second
#define nn '\n'
#define all(v) v.begin(), v.end()
#define sz(v) int(v.size())
typedef long long ll;
typedef pair<int,int> pi;
template<typename T, typename U> void smin(T& a, U b){if (a > b) a = b;}
template<typename T, typename U> void smax(T& a, U b){if (a < b) a = b;}
template<typename T> istream& operator>>(istream& is,  vector<T>  &v)
{ for(auto& i : v) is >> i; return is;}
template<typename T> ostream& operator<<(ostream& os,  vector<T>  v)
{for (auto& i : v) os << i << ' '; if(!v.empty()) os << nn; return os;}
template<typename T, typename U> istream& operator>>(istream& is, pair<T, U> &p)
{is >> p.first >> p.second; return is;}
template<typename T, typename U> ostream& operator<<(ostream& os, pair<T, U>  p)
{os << p.first << ' ' << p.second; return os;}
/*
// to print the names n times 

void call_name(int i,int n){
    if(i<=n){
        cout<<"SURYA"<<" ";
        i++;
        call_name(i,n);
            }
}
int main(){
    int n;
    cin>>n;
    call_name(1,n);
}


// to print linerly from 1 to n;

void printn(int i,int n){
    if(i<=n){
        cout<<i<<" ";
        i++;
        printn(i,n);
    }
}
int main(){
    int n;
    cin>>n;
    printn(1,n);
}



// to print n to 1;



void printn1(int n){
    if(n>0){
        cout<<n<<" ";
        n--;
        printn1(n);
    }
}


int main(){
    int n;
    cin>>n;
    printn1(n);
}


// try to solve this problem using backtracking
// print from 1 to n; 



void backtraking1(int i , int n){
    if(i<1){
        return ;
    }
    backtraking1(i-1,n);
    cout<<i<<" ";
}
int main(){
int n;
cin>>n;
backtraking1(n,n);
}


*/



// try to solve this problem using backtracking
// print from n to 1;


void printre(int i , int n){
    
}

int main (){
    int n;
    cin>>n;
    printre(n,n);
}


//Print GFG n times without the loop.

