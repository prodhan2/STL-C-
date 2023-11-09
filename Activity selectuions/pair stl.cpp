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
    int a[] ={1,3,4,100,6,7,8,9};
    int b[] ={2,3,6,8,200,3,4,10};
    vector<pair<int,int>>v;
    for(int i=0;i<sizeof(a)/sizeof(a[0]);i++)
    {
       v.push_back(make_pair(a[i],b[i])) ;
    }

    for(int i=0;i<(sizeof(a)/sizeof(a[0]));i++)
    {
        cout<<v[i].first<<" "<<v[i].second<<endl;
    }
  sort(v.begin(),v.end());
//   ****************** [[ after sort ]] by first element **************************************
  cout<<"after sort by first elemnt"<<endl;
  for(int i=0;i<(sizeof(a)/sizeof(a[0]));i++)
    {
        cout<<v[i].first<<" "<<v[i].second<<endl;
    }
//    ****************** [[ after sort ]] by first element *****************
   cout<<"after sort by second element "<<endl;
  sort(v.begin(),v.end(),second);
   for(int i=0;i<(sizeof(a)/sizeof(a[0]));i++)
    {
        cout<<v[i].first<<" "<<v[i].second<<endl;
    }
}
