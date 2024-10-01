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

void minswap(vector <int> &a, int i ){
    int min = i;
    for(int k = i;k<a.size();k++){
        if(a[k]<a[min]){
            min = k;
        }
    }
    swap(a[min],a[i]);
}
void selection_sort(vector <int> &a,int n){
    for(int i = 0;i<n-1;i++){
        minswap(a,i);
    }
    
}
int main(){
    int n,m;
    cin>>n;
    
    vector <int> a(n);
    for(int i = 0;i<n;i++){
        cin>>m;
        a[i]=m;
    }
    selection_sort(a,n);
    for (size_t i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }

  }