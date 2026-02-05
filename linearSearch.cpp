//Linear Search Problem In Vectors
#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector<int> vec = {0,1,2,3,4,5,6,7,8};
    int target;
	cout<<"Enter Target to Find :";
    cin>>target;

    bool found = false;
    for(int i =0 ; i < vec.size(); i++){
        if(vec[i]==target){
            cout<<"Target Found at "<<i<<"th index";
            found = true;
            break;
        }
    }
    if(!found){
        cout<<"Element Not Found";
    }
}


