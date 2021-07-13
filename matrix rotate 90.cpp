#include <iostream>
#define N 3
using namespace std;

int main()
{
    int a[N][N], b[N][N];
    for(int i=0; i<N; i++)
        for(int j=0; j<N; j++)
            cin>>a[i][j];
    int j = 0;
    int m=0, n=0;
    for(int i=(N-1); (i>=0 && j<3); i--){
        b[m][n] = a[i][j];
        n++;
        // cout<< "i = "<< i<<" ";
        //cout<<"i+N%n = " <<(i+N)%N<<"\n";
        if((i+N)%N == 0){
            //cout<< "i = "<< i<<" ";
            i = N;
            j++;
            m++;
            n=0;
          //  cout<< "i = "<< i<<" j = "<<j<<" k = "<<m<<" ";
          //  cout<<"enter here!";
        }
    }
    
    
    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++)
            cout<<a[i][j]<<" ";
        cout<<"\n";
    }
    cout<<"\n\n";
    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++)
            cout<<b[i][j]<<" ";
        cout<<"\n";
    }
        
    
    return 0;
}
