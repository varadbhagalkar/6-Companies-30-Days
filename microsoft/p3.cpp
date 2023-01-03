class Solution {
public:
    string getHint(string secret, string guess) {
        int bulls=0,cows=0,l;
        int cnt1[10]={0},cnt2[10]={0};
        l=secret.length();
        for(int i=0;i<l;i++){
            if(secret[i]==guess[i]){
                bulls++;
            }else{
                cnt1[secret[i]-'0']++;
                cnt2[guess[i]-'0']++;
            }
        }

        for(int i=0;i<10;i++){
            cows+=min(cnt1[i],cnt2[i]);
        }
        return to_string(bulls)+"A"+to_string(cows)+"B";
        
    }
};