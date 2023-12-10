#include <bits/stdc++.h>
using namespace std;
int b[100]; // প্রতিটি ব্লকের যোগফল এখানে রাখা হবে
int precalculate(int a[],int n){
	int segment_size=sqrt(n);
	int current_segment=-1; // প্রতিটি ব্লকের ইনডেক্স এখানে হিসাব করে রাখা হবে
	for(int i=0;i<n;i++){ 
		if(i%segment_size==0){
			++current_segment; // যদি a[] এর বর্তমান ইনডেক্স i সেগমেন্ট সাইজের (segment_size) গুণিতক হয় তবে পরবর্তি সেগমেন্টে (current_index+=1) যাবো। 
		}
		b[current_segment]+=a[i];
	}
        return segment_size;
}
int query(int l,int r,int a[],int n){
	int segment_size=sqrt(n);
	int sum=0;
        //প্রথম অংশঃ রেঞ্জের প্রথম সেগমেন্ট যা সম্পূর্ণ ওভারলেপ নাও হতে পারে 
	while(l<r&&l%segment_size!=0){
		sum+=a[l];
		++l;
	}
        //দ্বিতীয় অংশঃ সম্পুর্ন ওভারলেপ অংশ
	while(l+segment_size<=r){
		sum+=b[l/segment_size];
		l+=segment_size;
	}
        //তৃতীয় অংশঃ রেঞ্জের শেষ সেগমেন্ট যা সম্পূর্ণ ওভারলেপ নাও হতে পারে
	while(l<=r){
		sum+=a[l];
		l++;
	}
	return sum;
}
void update(int a[], int n, int i, int val) { 
    int segment_size=sqrt(n);
    int segment_no = i / segment_size; 
    b[segment_no] -= a[i];
    b[segment_no] += val;
    a[i] = val;
}
int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	precalculate(a,n);
	cout<<query(1,10,a,n)<<endl;
}
