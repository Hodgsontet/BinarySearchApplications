#include <bits/stdc++.h>
#include <cmath>
#define F(i, l, r) for(int i = l; i < (r); ++i)
#define FD(i, r, l) for(int i = r; i > (l); --i)
#define INF 1e9

using namespace std;
vector<int> arr = {1,2,3,4,6,7,8,9};
int target = 5;
int lowerBound(int t)
{
	int l,r,mid;
	l = 0;
	r = arr.size()-1;
	

	while(l<r)
	{
		mid = l + (r-l)/2;

		if (t<=arr[mid])
		{
			r = mid;
		}
		else
			l = mid+1;

	}
	return l;
}
int main(int argc, char const *argv[])
{
	cout<<lowerBound(target);
	return 0;
}