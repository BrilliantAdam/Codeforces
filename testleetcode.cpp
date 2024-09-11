class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        map<int, int> freqMp;
        for(auto num : arr1){
            freqMp[num] = freqMp.count(num) ? freqMp[num] + 1 : 1;
        }
        int indx = 0;
        for(auto num : arr2){
            int freq = freqMp[num];
            while(freq-- > 0){
                arr1[indx++] = num;
            }
            freqMp[num] = 0;
        }
        for(auto entry : freqMp){
            auto num = entry.first;
            auto freq = entry.second;
            while(freq-- > 0){
                arr1[indx++] = num;
            }
        }
        return arr1;
    }
};
