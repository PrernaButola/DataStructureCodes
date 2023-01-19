#include<iostream>
#include<vector>
#include<queue>
#include<conio.h>
using namespace std;
int main(){
	//according to graph represent it 2d matrix form 
	int adjmat[7][6]={
	
	{0,1,1,0,0,0},
	{0,0,0,0,0,1},
	{0,0,0,1,0,0},
	{1,1,0,0,0,0},
	{0,1,0,1,0,0},
	{0,0,1,0,0,0},
	{0,0,0,0,0,0}
	};
	
	//enter where from you want to start
	int src;
	
	cout<<"enter source node: ";
	cin>>src;
	
	//bfs use queue for recode of traversing node
	queue<int> qu;
	//for result traversed vertices 
	vector<int> tlist;
	//push intial node for start
	qu.push(src);
	

	while(!qu.empty()){
		int temp=qu.front();
		if(adjmat[6][temp]==0){
		
			tlist.push_back(temp);
		}
		adjmat[6][temp]=1; //mark node visited
	
		qu.pop();
		
		for(int i=0;i<6;i++){
			if(adjmat[temp][i]==1 && adjmat[6][i]==0){  // for not getting visited node on queue 
			
				qu.push(i);
			}
		}
	}
	//finally print result vector
	for(int j=0;j<tlist.size();j++){
		cout<<tlist[j]<<" ";
	}
	return 0;
}