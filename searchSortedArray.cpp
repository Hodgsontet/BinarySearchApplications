#include <bits/stdc++.h>
#include <cmath>
#define F(i, l, r) for(int i = l; i < (r); ++i)
#define FD(i, r, l) for(int i = r; i > (l); --i)
#define INF 1e9

using namespace std;
vector<int> nums = {4,5,6,7,0,1,2};

int main(int argc, char const *argv[])
{
	  // find pivot
 auto bin = [&](int left, int right, int tar)->int 
 {
  
	int middle;
	while(left<right)
	{
		 middle = (left+right)/2;
		 if (tar>nums[middle])
		 {
		 	left = middle+1;
		 }
		 else
		 {
		 	right = middle;
		 }
	}
	if (nums[left] ==tar)
	{
		return left;
	}
	else 
		return -1;
 };
	int l = 0;
	int r = nums.size();
	int mid;
	while(l<r)
	{
		 mid = (l+r)/2;
		 if (nums[mid]>nums[r])
		 {
		 	l = mid+1;
		 }
		 else
		 {
		 	r = mid;
		 }
	}
	//two binary searches on both sides
	cout<<nums[l]<<'\n';
	int pivot = l;
	int l1 = bin(0,pivot-1,0);
	int l2 = bin(pivot, nums.size()-1,0);

	printf("%d ,%d \n", l1 ,l2);


	return 0;
}