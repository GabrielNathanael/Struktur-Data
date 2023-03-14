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
	
	int first,mid,last,pointer;
	first=0,last=5-1,pointer=0;
	while(pointer==0 && first<=last){
		mid=(first+last)/2;
		if (number[mid]==find){
			pointer=1;
			break;
		}
		else if(number[mid]<find){
			first=mid+1;
		}
		else{
			last=mid-1;
		}
	}
	if(pointer=1){
		cout<<"\nNumber found in indeks"<<mid<<endl;
	}
	else{
		cout<<"Data not found";
	}
	
	return 0;
}