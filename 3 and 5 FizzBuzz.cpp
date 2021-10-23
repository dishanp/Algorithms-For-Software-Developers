class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string>res;
        for(int i=1;i<=n;i++){
            if(i%3==0&&i%5==0){
                res.push_back("FizzBuzz");
                continue;
            }
            else if(i%3==0){
                res.push_back("Fizz");
                continue;
            }
            else if(i%5==0){
                res.push_back("Buzz");
                continue;
            }
            else{
                auto s = std::to_string(i);
                res.push_back(s);
            }
        }
        return res;
    }
};
