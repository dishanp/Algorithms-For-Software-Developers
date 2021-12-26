class Solution {
public:
	int findSpecialInteger(vector<int>& arr) {
		int c = 0;
		for(int i = 1; i < arr.size(); i++){
			if(arr[i] == arr[i - 1]){
				c++;
			}
			else{
				c = 1;
			}
			if(c > arr.size() / 4){
				return arr[i];
			}
		}
		return arr[0];
	}
};
