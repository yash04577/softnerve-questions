#include <iostream>
#include<limits.h>
using namespace std;

int getMaxProfit(int priceArray[], int size){

    int buy_price = INT_MAX;
    int currentProfit = 0;
    int max_profit = 0;

    for (int i = 0; i < size; i++){

        if (priceArray[i] < buy_price){
            buy_price = priceArray[i];
        }

        currentProfit = priceArray[i] - buy_price;

        if (currentProfit > max_profit){
            max_profit = currentProfit;
        }
    }
    return max_profit;
}

int main(){

    int priceArray[] = {7, 1, 5, 3, 6, 4,7,6,4,3,1};
    int size = sizeof(priceArray) / sizeof(priceArray[0]);

    int maxProfit = getMaxProfit(priceArray, size);
    cout << "max profit = " << maxProfit;

    return 0;
}