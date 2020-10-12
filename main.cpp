#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <math.h>

using namespace std;

int N;

int queenPos[100];
void NQueen (int K);




int main()
{
    cin>>N;
    NQueen(0);
    
   
}

void NQueen(int k){
    int i;
    if (k==N){
        for (i=0; i<N; i++)
        cout<<queenPos[i] +1 << "";
        cout<<endl;
        return;
    }
    for (i=0; i<N; i++){
        int j;
        for (j=0; j<k; j++){
            if ( queenPos[j]==i) break;
            else if (abs(queenPos[j]-i)==abs(k-j)) break;
            
            }
        if (j==k){
            queenPos[k]=i;
            NQueen(k+1);}
        }
}

bool SimulatedAnnealing(){
    
}


