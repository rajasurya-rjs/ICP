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
  /*

    // to count how may times the element is present in the error;
    int n;
    cin>>n;
    vector<int>a(n);
    int m;
    for(int i =0 ;i<a.size();i++){
        cin>>m;
        a[i]=m;
    }
    int count=0;
    int k;
    cin>>k;
    for(int i = 0;i<a.size();i++){
        if(a[i]== k){
            count++;
        }
    }
    cout<<count;



    // given an array count the number of even numberS;


    int n;
    cin>>n;
    vector<int>v(n);
    int m;
    for(int i=0;i<v.size();i++){
        cin>>m;
        v[i]=m;
    }
    int count=0;
    for(int i = 0;i<v.size();i++){
        if(v[i]%2==0){
            count++;
        }
    }
    cout<<count;
    
   
   //  to find the both the array is same or not 
   
   
   
   int n;
   cin>>n;
   vector <int> a(n);
   vector <int> b(n);
   int m;
   for(int i =0;i<n;i++){
    cin>>m;
    a[i]=m;
   }
   for(int i =0;i<n;i++){
    cin>>m;
    b[i]=m;
   }
   bool k = true;
   for(int i = 0;i<=n;i++){
    if(a[i]!=b[i]){
        cout<<"not same";
        k= false;
        break;
    }
   }
   if(k==true){
    cout<<"it is same";
   }
   


    // given an array you need to reverse the same array


   int n;
   cin>>n;
   vector <int> a(n);
   int m;
   for(int i =0;i<n;i++){
    cin>>m;
    a[i]=m;
   }
   int i =0;
   int j = n-1;
   int temp=0;
   while(i<j){
        temp = a[i];
        a[i]= a[j];
        a[j]= temp;
        i++;
        j--;

   }
    for(int i = 0;i<a.size();i++){
        cout<<a[i]<<" ";
    }



    // given an arrray check whether it is palindrom;
    
   int n;
   cin>>n;
   vector <int> a(n);
   int m;
   for(int i =0;i<n;i++){
    cin>>m;
    a[i]=m;
   }
   int i = 0;
   int j = n-1;
   bool k = true;
   while(i<j){
    if(a[i]!=a[j]){
        cout<<"No";
        k = false;
        break;
    }
    i++;
    j--;
   }
   if(k==true){
   cout<< "yes it is palindrome";
   }

    // given an array find the max;

    int n;
   cin>>n;
   vector <int> a(n);
   int m;
   for(int i =0;i<n;i++){
    cin>>m;
    a[i]=m;
   }
   int max =0;;
for(int i =0;i<n;i++){
    if(a[i]>max){
        max=a[i];
    }
        
    }
    cout<<max;
 // given an array find the second max;
   int n;
   cin>>n;
   vector <int> a(n);
   int m;
   for(int i =0;i<n;i++){
    cin>>m;
    a[i]=m;
   }
   int max =0;;
for(int i =0;i<n;i++){
    if(a[i]>max){
        max=a[i];
    }
        
    }

int second_max=0;
for(int i =0;i<n;i++){
    if(a[i]>second_max && a[i]!=max){
        second_max=a[i];
    }
        
    }
    cout<<second_max;
}

 // given an array find the third max;

int n;
   cin>>n;
   vector <int> a(n);
   int m;
   for(int i =0;i<n;i++){
    cin>>m;
    a[i]=m;
   }
   int max =0;;
for(int i =0;i<n;i++){
    if(a[i]>max){
        max=a[i];
    }
        
    }
    cout<<"first"<<max<<endl;

int second_max=0;
for(int i =0;i<n;i++){
    if(a[i]>second_max && a[i]!=max){
        second_max=a[i];
    }
        
    }
    cout<<"second"<<second_max<<endl;

int third_max=0;
for(int i =0;i<n;i++){
    if(a[i]>third_max && a[i]!=max && a[i]!=second_max){
        third_max=a[i];
    }
        
    }
    cout<<"third"<<third_max<<endl;




   // OR
   int n;
   cin>>n;
   vector <int> a(n);
   int m;
   for(int i =0;i<n;i++){
    cin>>m;
    a[i]=m;
   }
   sort(a.begin(),a.end());
   cout<<a[n-1];
   cout<<a[n-2];
   cout<<a[n-3];



        // given an array and also an int k, we need to find the no of pairs that when we add them that resutls value of k;

   int n;
   cin>>n;
   vector <int> a(n);
   int m;
   for(int i =0;i<n;i++){
    cin>>m;
    a[i]=m;
   }
   int count = 0;
   int k =12;


   for(int i = 0;i<n;i++){
   for(int j =i+1;j<n;j++ ){
        if((a[i]+a[j])==k){
            count++;
        }
    }
   }
    cout<<count;
    


    //given an array print all unique elements;


   int n;
   cin>>n;
   vector <int> a(n);
   int m;
   for(int i =0;i<n;i++){
    cin>>m;
    a[i]=m;
   }
   for(int i = 0;i<n;i++){
    for(int j = 0;j<n;j++){
        if(a[i]==a[j]&& i!=j){
            break;
        }
        if(j==n-1){
            cout<<a[i]<<" ";
        }
    }


   }


  // given an arrray count the triplet such that a[i+a[j]+a[k]=even sum ;
    

    int n;
   cin>>n;
   vector <int> a(n);
   int m;
   for(int i =0;i<n;i++){
    cin>>m;
    a[i]=m;
   }
   int count=0;
   for(int i = 0;i<n;i++){
      for(int j = 0;j<n;j++){
         for(int k = 0;k<n;k++){
            if(i!=j && j!=k && k!=i && (a[i]+a[j]+a[k])%2==0){
                count++;
            }
         }
      }
   }
   cout<<count/6;
   
*/}