// Definition for a Pair
// class Pair {
// public:
//     int key;
//     string value;
//
//     Pair(int key, string value) : key(key), value(value) {}
// };

class Solution 
{
    public:
        vector<vector<Pair>> insertionSort(vector<Pair>& pairs) 
        {
            vector<vector<Pair>> result;
            int n = pairs.size(),row = 0;

            if(pairs.empty()) {
                return result;
            }

            result.push_back({});  // Add an empty vector for the current row
            for(auto& pair : pairs) {
                result[row].push_back(pair);
            }
            row++;

            for(int i = 1; i < n; i++) {
                Pair obj = pairs[i];
                int j = i - 1;
                
                while(j >= 0 && pairs[j].key > obj.key) {
                    pairs[j+1] = pairs[j];
                    j--;
                }
                pairs[j+1] = obj;

                result.push_back({});  // Add an empty vector for the current row
                for(auto& pair : pairs) {
                    result[row].push_back(pair);
                }
                row++;
            }
            return result;
        }
};
