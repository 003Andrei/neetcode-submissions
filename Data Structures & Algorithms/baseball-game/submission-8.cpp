class Solution {
public:
    int calPoints(vector<string>& operations) {
        int result = 0; 
        stack <int> stk; 
        for (const string& each: operations){
            if (each == "+"){
                int temp = stk.top(); stk.pop();
                int temp2 = temp + stk.top();
                stk.push(temp); stk.push(temp2);
                result += temp2;
            }
            else if (each == "D"){
                stk.push(stk.top() * 2);
                result += stk.top();
            }
            else if (each == "C"){
                result -= stk.top();
                stk.pop();
            }
            else{
                stk.push(stoi(each));
                result += stk.top();
            }
        }
        return result;
    }
};