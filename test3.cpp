#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
int checker(int num,int step,int p,int val){
    int p2=p;
    for (int i=step;i<=10;i++){
        int v=val+pow(i,2);
        //cout<<i<<"-";
        if (v==num){
             p2=1+p;
            cout<<p2<<"point";
           // return step;
            checker(100,i+1,p2,v);}
        else if(v<num){
            checker(100,i+1,p2,v);
        }

    }

}
int main(){

checker(100,1,0,0);
    return 0;
}