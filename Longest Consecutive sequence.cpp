class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_map<int,int>seqMap;
        int longest=0;

    
    for(int num: nums){
        if(seqMap.find(num)==seqMap.end()){
            int left=seqMap.count(num-1) ? seqMap[num-1] : 0;
            int right=seqMap.count(num+1) ? seqMap[num+1] : 0;
            int lenght=left+1+right;
            seqMap[num]=lenght;
            seqMap[num-left]=lenght;
            seqMap[num+right]=lenght;
            longest=max(seqMap[num],longest);
        }
    }
        return longest;
    }
};
