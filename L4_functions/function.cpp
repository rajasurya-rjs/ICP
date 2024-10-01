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
// to print the sum of two numbers;


function structure :-

return_type function_name(varibale_type parameter_name,varibale_type parameter_name){
        if the return type is void then there is no return type what ever the funtion code has 
        it will just print that .
}
int main(){
    if return is the value then we have to call the function 
    else we doesnt want to do that


    }


double sum(double a, int b){
    return a+b;
}


int main(){
    double a= 5.2;
    double k = 6.4;
    double m = sum(a,k);
    cout<<m;
  }




  // to find the factorial of the n;



long long factorial(int n){
    long long k =1;
    for(int i = 1;i<=n;i++){
        k=k*i;
    }
    return k;
}

 int main(){
    int n;
    cin>>n;
    cout<<factorial(n);
 





// max of two values

int max1(int a,int b){
    int k =max(a,b);
    return k;
}
int main(){
    int a,b;
    cin>>a>>b;
    cout<<max1(a,b);
}


// max of three values 


int max1(int a,int b,int c){
    int k = max(a,b);
    int m = max(k,c);
    return m;
}
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    cout<<max1(a,b,c);
}


// max of the all values of array


int max1(vector <int> a){
   sort(a.begin(),a.end());
    int m=a[a.size()-1];
    return m;
}
int main(){
    int n;
    cin>>n;
    vector<int>a(n);
    int m;
    for(int i =0 ;i<a.size();i++){
        cin>>m;
        a[i]=m;
    }
    cout<<max1(a);

}

//see a video on arrays on function

int arr2(vector <int> a){
    a[0]=100;
    return a[0];
}
int main(){
    vector <int> a;
    a.push_back(1);
    cout<<a[0]<<" ";
    cout<<arr2(a)<<" ";
    cout<<a[0];
}


void reverseSubVector(vector<int>& vec, int a, int b) {
    // Check if the indices are valid
    if (a < 0 || b >= vec.size() || a >= b) {
        cout << "Invalid indices!" << endl;
        return;
    }

    // Reverse the portion of the vector from index a to b
    while (a < b) {
        swap(vec[a], vec[b]);
        a++;
        b--;
    }
    
}

int main() {
    // Example usage
    vector<int> g = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    int a = 2, b = 7;
    reverseSubVector(g, a, b);

    
   

    return 0;
}

// to check an array is in sorted way 

bool sort1(vector <int>& b,int n){
    vector <int> a(n);
    for(int i = 0;i<n;i++){
        a[i]=b[i];
    }
    sort(b.begin(),b.end());
    for(int i = 0;i<n;i++){
        if(a[i]!=b[i]){
            return false;
        }
    }
    return true;
}


int main(){
    int n;
    cin>>n;
    vector<int> g(n);
    int m;
    for(int i = 0;i<n;i++){
        cin>>m;
        g[i]=m;
    }
   cout<<sort1(g,n);
   }




// add the first element of the first array at the end of the list

   void sort1(vector <int>& g,int n,int k ){
    for(int i =0;i<k;i++){
  g.push_back(g[i]);
  g.erase(g.begin());
   
}
}
int main(){
    int n;
    cin>>n;
    vector<int> g(n);
    int m;
    for(int i = 0;i<n;i++){
        cin>>m;
        g[i]=m;
    }
    int k =3;
   sort1(g,n,k);

  for(int i = 0;i<n;i++){
    cout<<g[i]<<" ";
  }

   }





void bring(vector <int> &n){
    if(is_sorted(n.begin(),n.begin()+)){
        cout<<"true";
    }
    
    else{
    int temp = n[n.size()-1];
    
    for(int i = n.size()-1;i>=0;i--){
        if(n[i-1]>=temp){
            n[i]= n[i-1];
            n[i-1]=temp;

        }

    }

    for(int i =0;i<n.size();i++){
        
       cout<<n[i]<<" ";

    }
    
    }
}
int main(){
    int n;
    cin>>n;
    vector<int> g(n);
    int m;
    for(int i = 0;i<n;i++){
        cin>>m;
        g[i]=m;
    }
    bring(g);
}










void bring(vector <int> &n,int c){
    if(is_sorted(n.begin(),n.begin()+c+1)){
        cout<<"true";
    }
    
    else{
    int temp = n[c+1];
    
    for(int i = n[c+1];i>=0;i--){
        if(n[i-1]>=temp){
            n[i]= n[i-1];
            n[i-1]=temp;

        }

    }

    for(int i =0;i<n.size();i++){
        
       cout<<n[i]<<" ";

    }
    
    }
}
int main(){
    int n;
    cin>>n;
    int c;
    cin>>c;
    vector<int> g(n);
    int m;
    for(int i = 0;i<n;i++){
        cin>>m;
        g[i]=m;
    }
    bring(g);
}


*/