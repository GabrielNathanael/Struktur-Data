#include <iostream>
using namespace std;

int main(){
	

	int number[5]={1,3,5,7,11};
	int x;
	for (x=0;x<5;x++){
		cout<< number[x]<<" ";
    }
    
	int find;
	cout <<"\nInput number : ";
	cin>>find;
	
	int first,mid,last;
	first=0,last=5-1;
	while(first<=last){
		mid=(first+last)/2;
	if (number[mid] == find) {
            cout << "\nNumber found in index " << mid << endl;
            return 0;
        } 
	if else (number[mid] < find) {
            first = mid + 1;
        } 
	else {
            last = mid - 1;
        }
    }
    
    cout << "Data not found in list";

    return 0;
}
