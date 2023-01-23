#include <iostream>
#include<stack>
using namespace std;

void getLeaders(int leaderArray[], int size){

   stack<int>leader;

   if(size == 0){
     return;
   }

   else{
        leader.push(leaderArray[size-1]);

        for(int i=size-2; i>=0; i--){
            if(leaderArray[i] > leader.top()){
                leader.push(leaderArray[i]);
            }
        }
   }

   while(!leader.empty()){
        cout << leader.top() << "  ";
        leader.pop();
   }

}

int main(){

    int leaderArray[] = {7, 1, 5, 3, 63, 4,7,6,4,3,1,16, 17, 5};
    int size = sizeof(leaderArray)/sizeof(leaderArray[0]);
    
    getLeaders(leaderArray, size);

    return 0;
}