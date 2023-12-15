class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        unordered_set<string> start_cities, end_cities;

        for (const auto& path : paths) {
            start_cities.insert(path[0]);
            end_cities.insert(path[1]);
        }

        auto it = std::find_if(end_cities.begin(), end_cities.end(),
            [&](const std::string& city) { return start_cities.find(city) == start_cities.end(); });

        return *it;
    }
};
