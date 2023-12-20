#include <iostream>
#include<stdlib.h>
#include<ctime>
using namespace std;
class node
{
	string name;
	int score;
	node * next;
	public:
		node()
		{
			name=" ";
			score = 0;
			next = NULL;
		}
	
	void set_name(string n)
	{
		name = n;
	}
	void set_score(int s)
	{
		score = s;
	}

	void setnext(node *n)
	{
		next = n;
	}

	string get_name()
	{
		return name;
	}

	int get_score()
	{
		return score;
	}
	node* getnext()
	{
		return next;
	}
};

class stack
{
	node* head;
	int noe;
	int size;
	public:
		stack(int s)
		{
			noe=0;
			head=NULL;
			
			size=s;
		}
		bool isempty()
		{
			if(noe==0)
			return true;
			else 
			return false;	
		}
		bool isfull()
		{
			if(size==noe)
			return true;
			else 
			return false;
		}
		void push(string n,int d)
		{
			if(isfull())
			{
				cout<<"IS FULL ";
			}
			else
			{
			node* temp=new node;
			temp->set_name(n);
			temp->set_score(d);
			if(head==NULL)
			{
				head=temp;
				temp->setnext(NULL);
			}
			else
			{
				temp->setnext(head);
				head=temp;
			}
			noe++;
		}
		}
		void pop()
		{
			if(isempty())
			{
				cout<<"IS EMPTY";
			}
			else{
			node* temp=head;
			head=head->getnext();
			
			cout<< temp->get_name()<<"   "<<temp->get_score()<<endl;
			noe--; } 
		}
		
		
};



class queue
{
	int arr[5];
	int front;
	int rear;
	int noe;
	int nov_d;
	public:
		queue(int n)
		{
			nov_d=n;
			noe=0;
			front=-1;
			rear=-1;
			srand((unsigned)time(0));
		}
		bool isempty()
		{
			if(noe==0)
			return true;
			else 
			return false;	
		}
		bool isfull()
		{
			if(5==noe)
			return true;
			else 
			return false;
		}
		void enqueue(int d)
		{
			if(isfull())
			{
				cout<<"IS FULL ";
			}
			else
			{
				rear=(rear+1)%5;
				arr[rear]=d;
				noe++;
		}
		}
		void dequeue()
		{
			if(isempty())
			{
				cout<<"IS EMPTY";
			}
			else{
				front=(front+1)%5;
		    	cout<<arr[front];
			    noe--;
			 }
		}
        int getdice()
        {
        	
        	int r=rand()%nov_d+1;
        	return r;
		}
		
};



			



int main()
{
	int n;
	int n_o_p;
	cout<<"Enter the number of users ";
	cin>>n_o_p;
	stack s(n_o_p);
	cout<<"Enter the total numbers on dices ";
	cin>>n;
	queue q(n);
	for(int i=0;i<n_o_p;i++)
	{
		int score=0;
		string a;
		cout<<endl<<"Player "<<i+1<<" turn "<<endl;
		cout<<"Enter the player name ";
		cin>>a;
		for(int i=0;i<5;i++)
		{

			int b;
			b=q.getdice();
			score=score+b;
			q.enqueue(b);
		}
		
		for(int i=0;i<5;i++)
		{
			cout<<endl<<"your "<<i+1<<" roll ";
			q.dequeue();
			cout<<" ";
		}
		s.push(a,score);
	}
	
	for (int i=0;i<n_o_p;i++)
	{
		cout<<endl<<endl;
		s.pop();
	}
	
	
	
	
	return 0;
}





