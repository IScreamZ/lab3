#include<iostream>
using namespace std;
int main() {
    float numP;
    float sum = 0;
    float y = 6;
    while(numP<19-6+1){
        sum=sum+(1/y);
        if(y<19){
            y=y+1;
        }
        numP=numP+1;
    }
        cout<<"\nSum is: "<<sum;
return 0;
}     