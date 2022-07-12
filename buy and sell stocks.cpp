int maxProfit(vector<int>& prices) {
        int mini=1e5+10,profit=0;
        for(int i=0;i<prices.size();i++){
            if(prices[i]<mini){
                mini=prices[i];
            }
            int temp=[i]-mini;
            if(temp>profit){
                profit=temp;
            }
        }
        return profit;
    }
