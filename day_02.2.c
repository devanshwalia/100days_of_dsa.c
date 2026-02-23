#include <stdio.h>

int maxProfit(int prices[], int n) {
    if (n == 0) return 0;

    int minPrice = prices[0];
    int maxProfit = 0;

    for (int i = 1; i < n; i++) {
        // Calculate profit if sold today
        int profit = prices[i] - minPrice;

        if (profit > maxProfit)
            maxProfit = profit;

        // Update minimum price
        if (prices[i] < minPrice)
            minPrice = prices[i];
    }

    return maxProfit;
}

int main() {
    int n;
    scanf("%d", &n);

    int prices[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &prices[i]);

    printf("%d\n", maxProfit(prices, n));

    return 0;
}
