#include <iostream>
using namespace std;
vector<int> valueEqualToIndex(int arr[], int n) {
	vector<int>res;
	for(int i=0;i<n;i++){
	   if(arr[i]==i+1)
	    	res.push_back(arr[i]);
	   }
	   return res;
	}
};
int main(){

    return 0;
}
