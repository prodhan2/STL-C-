
#include<bits/stdc++.h>
using namespace std;

// ***********max element and min element *****************
//int *ma = max_element(a,a+10);
//    cout<< *ma<<endl;

// ***********foreach loop *****************
//for_each(a.begin(), a.end(), [](const int& element) {
//  cout<<element<<endl; });

//// ***********max element position *****************
//cout <<distance(Array.begin(),max_element(Array.begin(),Array.end()));
bool second(pair<int,int>p1,pair<int,int>p2)
  {

      return (p1.second <p2.second);
  }
int main()
{

int n;cin>>n;
vector<pair<int,int>>v;
for(int i=0;i<n;i++)
{
    int first,second;
    cin>>first>> second;
    v.push_back(make_pair(first,second));
}
sort(v.begin(),v.end(),second);
int endd = v[0].second;
int count=1;
for(int i=1;i<n;i++)
{
    if(v[i].first >= endd)
    {
        count++;
        endd = v[i].second;
    }
}

cout<<count<<endl;
}
