#include<bits/stdc++.h>
using namespace std;
void roman()
{
    vector<int>nums;
    int x;
    int n;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>x;
        nums.push_back(x);
    }
    vector<int>v;
    v=nums;
    sort(nums.begin(),nums.end());
    int f=nums[nums.size()-1];
    int k=0,maxi=1;
    for(int i=0; i<nums.size(); i++)
    {
        if(f==v[i])
        {
            k++;
            maxi=max(maxi,k);
        }
        else
        {

            k=0;
        }
    }
    if(k==nums.size())
        cout<< nums.size();
    else
        cout<<maxi;
    cout<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        roman();
    }

}
