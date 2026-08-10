class Solution {
public:
int threeSumClosest(vector<int>& a, int t) {
sort(a.begin(), a.end());
int ans = a[0] + a[1] + a[2];

for (int i = 0; i < a.size(); i++) {
int l = i + 1, h = a.size() - 1;
while (l < h) {
int s = a[i] + a[l] + a[h];
if (abs(t - s) < abs(t - ans))
ans = s;
if (s < t)
l++;
else if (s > t)
h--;
else
return t;
}
}
return ans;
}
};
