	#include<iostream>
	using namespace std;
	void sequence(int);
	main(){
	int num;
	cout<<"Enter the number to Amplify: ";
	cin>>num;
	sequence(num);
	return 0;
	}
	void sequence(int num){
	    for(int i=1;i<=num;i++){
	if(i%4==0){
	    cout<<i*10;
	}
	else{
	    cout<<i;
	}
	if(i!=num){
	    cout<<", ";
	}
		    }
	
	}