class Solution {
public:
    long long calculateScore(vector<string>& instructions, vector<int>& values) {
        unordered_set<int> visited;
        int i=0;
        long long score = 0;
        int n = instructions.size();
        while(i>=0 &&i<n &&visited.find(i)==visited.end()){
            visited.insert(i);
            if(instructions[i]=="add"){
                score+=values[i];
                i++;
            }
            else if(instructions[i]=="jump"){
                i+=values[i];
            }
            else{
                break;
            }
        }
        return score;
    }
    
};
