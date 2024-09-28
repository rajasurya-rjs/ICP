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

// lets need to create class so that it specifyes some niche condition

class class_name{
    public: //public should be given so that we can access whatever function in the class
    void print(){
        cout<<"hello1";
    }
    void print1(){
        cout<<"hello world 3";
    }
}; // we have to add the semicolon at the end of the class

int main(){
    class_name object_name;  //  wwe have give the class name first then followed by object_name which is wathever;
    object_name.function_namewhich_we_want_call(); // to call them just do this;
}*/

