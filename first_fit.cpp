//first fit algorithm
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
    int BlockSize[5] = {100, 500, 200, 300, 600};
    int ProcessSize[4] = { 212, 417, 112, 426};
    bitset<5> updateBit; //00000
    bool check_pro[4]= {false};

    for(int i = 0; i < 4 ; ++i){ //treversing in ProcessSize
        for(int j =0; j<5;++j){ //treversing in blocksize
            if(ProcessSize[i] < BlockSize[j] && updateBit[5-j]!=1){
                updateBit[5-j]=1;
                check_pro[i]=true;
                cout<<"p"<<i+1<<" = "<<ProcessSize[i]<<" has block :"<<BlockSize[j]<<endl;
                break;
            }
        }
    }
    // waiting process
    for(int j =0; j<4;++j){ //treversing in blocksize
        if(!check_pro[j]){
            cout<<" no block assigned to p"<<j+1<<" = "<<ProcessSize[j]<<endl;
            break;
        }
    }
    for(int j =0; j<5;++j){ //treversing in blocksize
        if(updateBit[5-j]!=1){
            //updateBit[5-j]=1;
            //check_pro[i]=true;
            cout<<" block :"<<BlockSize[j]<<" is free"<<endl;
            break;
        }
    }                

    // cout<<"Hello World";

    return 0;
}