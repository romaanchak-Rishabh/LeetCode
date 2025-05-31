class Solution {
public:
    int chalkReplacer(vector<int>& chalk, int k) {
        long long int i=0;
        for(int studentChalkUse: chalk) {
            i+=studentChalkUse;
        }

        int remainingChalk = k%i;

        for(int j=0; j<chalk.size(); j++) {
            if(remainingChalk<chalk[j]) return j;
            remainingChalk-=chalk[j];
        }
        // while(chalk[i]<=k) {
        //     k-=chalk[i];
        //     i++;
        //     if(i==chalk.size()) i=0;
        // }
        return 0;
    }
};