#include <iostream>
using namespace std;
int main(){
    int n,k;
    cin>>n;
    k=1+(n-1)*2;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=k;j++){
            if(i>j)
                cout<<'-';
            else    
                cout<<'*';
        }
        cout<<endl;
        k--;
    }
}
