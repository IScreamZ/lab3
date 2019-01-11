#include<iostream>
using namespace std;
int main() {
    float numP;
    float sum = 0;
    float y = 2;
    while(numP<68){
        sum=sum+(1/y);
        if(y<69){
            y=y+1;
        }
        numP=numP+1;
    }
        cout<<"\nSum is: "<<sum;
return 0;
}     