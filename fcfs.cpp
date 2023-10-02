#include<bits/stdc++.h>
using namespace std;
int main(){
	int arr[10][10],i,j,k,temp;
	for(i=0;i<5;i++)
	  arr[i][0]=i+1;
	  		
	cout<<"enter arival time"<<endl;
    for(i=0;i<5;i++)
	  cin>>arr[i][1];
   
    cout<<"enter burst time"<<endl;
    for(i=0;i<5;i++)
	  cin>>arr[i][2];
	   
    //calcluting completion time;
    arr[0][3]=arr[0][2];
    for(i=1;i<5;i++){
    	if(arr[i][1]>arr[i-1][3]){
    		int temp=arr[i][1]-arr[i-1][3];
    	 arr[i][3]=arr[i][2]+arr[i-1][3]+temp;	
		}
		else
		arr[i][3]=arr[i][2]+arr[i-1][3];
     		
	}
	
	float avg_tat=0;
    float avg_wat=0;
       for(i=0;i<5;i++){
       	//tat  time
       	arr[i][4]=arr[i][3]-arr[i][1];
	    avg_tat+=arr[i][4];
	    // WATT
	   	arr[i][5]=arr[i][4]-arr[i][2];
	   	avg_wat+=arr[i][5];
	   }
//	  cout<<"PRocess"<<" "<<"AT"<<" "<<"BT"<<" "<<"CT"<<" "<<"TAT"<<"wat"<<endl;
	for(i=0;i<5;i++){
	  for(j=0;j<6;j++)
	   cout<<" "<<arr[i][j];
	   cout<<endl;
       }
       cout<<"avg tat:"<<avg_tat/5<<"\navg wat:"<<avg_wat/5<<endl;    
}