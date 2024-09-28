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
  //right angle triangle;

like this 

* 
* * 
* * * 
* * * * 
* * * * * 
* * * * * * 


int n;
cin>>n;
for(int i =1;i<=n;i++){
    for(int j = 1;j<=i;j++){
        cout<<"*"<<" ";
    }
    cout<<endl;
}


// like this we need too get for every value of n;
* * * * * * 
* * * * * 
* * * * 
* * * 
* * 
* 

int n;
cin>>n;
for(int i = 1;i<=n;i++){
    for(int j = 1;j<=n-i+1;j++){
        cout<<"*"<<" ";
    }
    cout<<endl;
}


//print like this 

* 
* 2 
* 2 * 
* 2 * 4 
* 2 * 4 * 
* 2 * 4 * 6 
* 2 * 4 * 6 * 


int n;
cin>>n;
for(int i = 1;i<=n;i++){
    for(int j = 1;j<=i;j++){
        if(j%2==1){
            cout<<"*"<<" ";
        }
        else{
            cout<<j<<" ";
        }
    }
    cout<<endl;
}



// print like this;
1 
1 * 
1 * 2 
1 * 2 * 
1 * 2 * 3 
1 * 2 * 3 * 
1 * 2 * 3 * 4 


int n;
cin>>n;
for(int i = 1;i<=n;i++){
    int k = 1;
    for(int j = 1;j<=i;j++){
        if(j%2==1){
            cout<<k<<" ";
            k++;
        }
        else{
            cout<<"*"<<" ";
        }
    }
    cout<<endl;
}


//like this ;
n=3
*  *
*  *
*  *


int n;
cin>>n;
for(int i = 1;i<=n;i++){
        cout<<"*";
        for(int l = 1;l<=n-1;l++){
            cout<<" ";
        }
        cout<<"*";
    cout<<endl;
}




like this ;


*  *
* *
**

int n;
cin>>n;
for(int i = 1;i<=n;i++){
        cout<<"*";
        for(int l = 1;l<=n-i;l++){
            cout<<" ";
        }
        cout<<"*";
    cout<<endl;
}




like this 
    *
   **
  ***
 ****
*****

int n;
cin>>n;
for(int i = 1;i<=n;i++){
    for(int j = 1;j<=n;j++){
        if(j<=n-i){
            cout<<" ";
        }
        else{
            cout<<'*';
        }
    }
    cout<<endl;
}


like this;
*****
 ****
  ***
   **
    *


int n;
cin>>n;
for(int i = 1;i<=n;i++){
    for(int j = 1;j<=n;j++){
        if(j<=i-1){
            cout<<" ";
        }
        else{
            cout<<'*';
        }
    }
    cout<<endl;
}



print like this; 
******
**  **
*    *
*    *
**  **
******


int n;
cin>>n;
for(int i = 1;i<=n;i++){
        
        for(int o = 1;o<=n-i+1;o++){
            cout<<"*";
        }
        for(int j = 1;j<=2*n-(2*(n-i+1));j++){
            cout<<" ";
        }
        for(int e = 1;e<=n-i+1;e++){
            cout<<"*";
        }
        cout<<endl;}
        
for(int i = 1;i<=n;i++){

        
        for(int o = 1;o<=i;o++){
            cout<<"*";
        }
        for(int j = 1;j<=2*n-(i+i);j++){
            cout<<" ";
        }
        for(int e = 1;e<=i;e++){
            cout<<"*";
        }
        cout<<endl;
        }

int n;
cin>>n;

for(int i = 1;i<=n;i++){
    for(int i =1;i<=3;i++){
    cout<<" ";
}
    for(int j =1;j<=n-i;j++){
        cout<<" ";
    }
    for(int j =1;j<=n+2-(2*(n-i));j++){
        cout<<"*";
    }
    for(int j =1;j<=n-i;j++){
        cout<<" ";
    }
    cout<<endl;

}
for(int i = 0;i<3;i++){
    for(int j =1;j<=i;j++){
        cout<<" ";
    }
    for(int j =1;j<=11-(i*2);j++){
        cout<<"*";
    }
    for(int j =1;j<=i;j++){
        cout<<" ";
    }
    cout<<endl;   
}
for(int i = 1;i<=n;i++){
    for(int j =1;j<=n-i;j++){
        cout<<" ";
    }
    for(int j =1;j<=11-2*(n-i)+1;j++){
        cout<<"*";
    }
    for(int j =1;j<=n-i;j++){
        cout<<" ";
    }
    cout<<endl;   
}
for(int i = 1;i<=n;i++){
      for(int i =1;i<=3;i++){
    cout<<" ";
}

    for(int j =1;j<=i-1;j++){
        cout<<" ";
    }
    for(int j =1;j<=n+2-(2*(i-1));j++){
        cout<<"*";
    }
    for(int j =1;j<=i-1;j++){
        cout<<" ";
    }
    cout<<endl;

}*/
}