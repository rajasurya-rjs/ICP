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
int main(){
    // to find the factorial 



    /*long long n;
    long long ans=1;
    cin>>n;
    if(n==0){
        cout<<1;
    }
    else{
    for(int i = n;i>0;i--){
        ans=ans*i;
    }
    cout<<ans;



    // to find the trailingzero;

        int t;
        cin>>t;
        for(int i = 1;i<=t;i++){ 
        long long n;
        cin>>n;
        int count = 0;
        int k =5;
        if(n<5){
            return 0;
        }
        else{
        while(k<=n){
            count = count + (n/k);
            k = k*5;
        }
        return count;
        
            
        }
}} 


    // to find the factors of the the number;


    int n;
    cin>>n;
    vector <int> a;
    for(int i = 1;i*i<=n;i++){
        if(n%i==0){
            a.push_back(i);
            if(n/i!=i){
                a.push_back(n/i);
            }
        }

    }
    sort(a.begin(),a.end());
    for(int i =0;i<=a.size()-1;i++){
        cout<<a[i]<<" ";
    }
    


   // to find a number is a prime number or not


    long long n;
    cin>>n;
    long long count=0;
    if(n==1){
        cout<<"no";
    }
    else{
    for(int i = 1;i*i<=n;i++){
        if(n%i==0){
            count++;
            if(n/i!=i){
                count++;
            }
        }
        if(count>2){
            break;
        }
    }
    if(count==2){
        cout<<"prime";
    }
    else if(count>2){
        cout<<"no";
    }
}





    // to find the gcd of the number

    int t,n;
    cin>>t>>n;
    if(t<0){
        t=t*-1;
    }
    if(n<0){
        n=n*-1;
    }
    int k = min(t,n);
    int gcd=0;
    for(int i =2 ;i<=k;i++){
        if(t%i==0 && n%i==0){
            gcd=i;
        }
    }
    cout<<gcd;

 */}