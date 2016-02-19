#include <iostream>
#include <stack>
#include <queue>
#include <cstdio>
using namespace std;

int main()
{
	stack<int> stk;
	//".push()" to add new stack onto the top
	stk.push(1);
	//".empty()" to check if there is data in that stack
	while(stk.empty() == false){
		//".top()" means the data at the top of the stack
		cout << stk.top() <<endl;
		//".pop()" deletes the data at the top of the stack
		stk.pop();
	}
	cout << "^^^^^^^^stack^^^^^^^^" << endl;
	stk.push(1);
	stk.push(2);
	while(stk.empty() == false){
		cout << stk.top() <<endl;
		stk.pop();
	}
	cout << "^^^^^^^^stack^^^^^^^^" << endl;
	queue<int> que;
	//".push()" to add new queue to the back 
	que.push(1);
	//".empty()" to check if there is data in that queue
	while(que.empty() == false){
		//".front()" means the data at the head of the queue
		cout << que.front() <<endl;
		//".pop()" deletes the data from the back of the queue
		que.pop();
	}
	cout << "^^^^^^^^queue^^^^^^^^" << endl;
	que.push(1);
	que.push(2);
	while(que.empty() == false){
		cout << que.front() <<endl;
		que.pop();
	}
	cout << "^^^^^^^^queue^^^^^^^^" << endl;
}