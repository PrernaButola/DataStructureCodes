#include<iostream>
#include<stack>;
#include<vector>;
#include<conio.h>;
using namespace std;

int main(){
	//need 2d matrix according to the graph, write 1 if vertices is connected otherwise 0 for every each node
	int adjmat[9][8]={
		{0,1,0,1,0,0,0,0},
		{1,0,1,0,1,0,0,0},
		{0,1,0,1,0,0,0,0},
		{1,0,0,0,0,1,0,0},
		{0,1,0,0,0,0,0,0},
		{0,0,0,1,0,0,1,1},
		{0,0,0,0,0,1,0,0},
		{0,0,0,0,0,1,0,0},
		{0,0,0,0,0,0,0,0}
	};
	
	//Enter where you want  to start the traversal
	int src;
	cout<<"enetr the source vertices: ";
	cin>>src;
	
	//use stack for traversing record dfs use stack
	stack<int>st;
	//vector for result of traversed vertices
	vector<int>tlist;
	
	//push the starting node directly in the stack 
	st.push(src); 
	
	while(!st.empty()){
		int temp= st.top();
		if(adjmat[8][temp]==0)
			tlist.push_back(temp);
		adjmat[8][temp]=1; // for make vertices as visited
		st.pop();
		
		for(int i=0;i<8;i++){
			if(adjmat[temp][i]==1 && adjmat[8][i]==0) // so that visisted node not come again in stack as it already in result vector
				st.push(i);
		}
	}
	
	//final print the sequence
	for(int j=0;j<tlist.size();j++){
		cout<<tlist[j]<<" ,";
	}
	
	
	return 0;
}