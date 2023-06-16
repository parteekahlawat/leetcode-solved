class Solution {
public:
    int maxArea(vector<int>& height) {
        int i=0;
        int j=height.size()-1;
        long long int maxa=0;
        long long int area=0;
        while(i<j){
            area = min(height[i],height[j])*(j-i); 
            maxa = max(area, maxa);
            if(height[i]<height[j]){
                i++;
            }
            else
                j--;
        }
        return maxa;
    }
};