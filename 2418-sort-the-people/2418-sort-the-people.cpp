class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        int n = heights.size();

        vector<pair<int, string>> people;
        
        for(int i = 0; i < n; i++){
            people.push_back({heights[i] , names[i]});
        }

        sort(people.rbegin() , people.rend());

        for(int i = 0 ; i < n; i++){
            names[i] = people[i].second;
        }

        return names;
    }
};