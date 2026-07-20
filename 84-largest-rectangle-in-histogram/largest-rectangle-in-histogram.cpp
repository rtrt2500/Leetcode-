class Solution {
public:

int findmaxarea(vector<int>&arr){
    int n=arr.size();
    stack<int>st;
    int maxarea=0;

    for(int i=0;i<n;i++){
        while(!st.empty() && arr[st.top()]>arr[i]){
            int element=st.top();
            st.pop();
            int nse=i;
            int pse;
            if(!st.empty()){
                pse=st.top();
            }
            else{
                pse=-1;
            }
            maxarea=max(arr[element]*(nse-pse-1),maxarea);
        }
        st.push(i);
    }

    while(!st.empty()){
        int element=st.top();
        st.pop();
        int nse=n;
        int pse;
        if(!st.empty()){
                pse=st.top();
            }
            else{
                pse=-1;
            }
            maxarea=max(arr[element]*(nse-pse-1),maxarea);
    }
    return maxarea;
}

    int largestRectangleArea(vector<int>& arr) {
        int answer=findmaxarea(arr);
      return answer;
    }

};