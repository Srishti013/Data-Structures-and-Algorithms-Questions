void push(stack<int>& s, int a){
	s.push(a);
}

bool isFull(stack<int>& s,int n){
	if(s.size()==n)
	return true;
	else 
	return false;
}

bool isEmpty(stack<int>& s){
    if(s.empty())
    return true;
    else
    return false;
	
}

int pop(stack<int>& s){
    int temp=s.top();
	s.pop();
	return temp;
}

int getMin(stack<int>& s){
	int size=s.size(),min=99999,temp=s.size();
	while(size--)
	{
	    if(s.top()<min)
	    min=s.top();
	    
	    s.pop();
	    
	}
	return min;
}
