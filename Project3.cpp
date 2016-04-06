
#include <iostream>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <cctype>
#include "ece150-proj3-provided.h"
using namespace std;

bool equal(request* left, request* right)
{
	return (strcmp(left -> name, right -> name) == 0 && (left -> t.hh == right-> t.hh) && (left -> t.mm == right->t.mm) && (left->t.ss == right->t.ss));
}


//convert to seconds 
unsigned sec(timestamp t) 
{
	unsigned secs=t.hh*3600 +t.mm*60 + t.ss;  
	//cout<<"hi"<<ses<<endl;
	return secs;  

}

//get info from  structs about request, uri
uri* information(uri* input, request* nameMatch)     
	{
		for(uri* RequestInput=input; RequestInput !=NULL; RequestInput=RequestInput -> next) 

		{
			if(strcmp(RequestInput->name, nameMatch->name)==0)  
			{

				return RequestInput;   
				//cout<<"chec";
			}
		} 

		return NULL;   

	} 





timestamp maxClientDelay(uri* a, request* b) 
{

//types are all unsigned not float 
	unsigned trans=0; 
	unsigned matchDe=0; 
	timestamp tempT1;
		
	unsigned currentTime=0;
	timestamp tempT; 
	unsigned delay=0;
	bool exist=false; 

	

	while(b != NULL)
	 {
		request* Rmax=NULL; 
		uri* Umax = NULL; 
		request* reqIn;  
		for(reqIn=b; reqIn!=NULL && sec(reqIn -> t) <= currentTime; reqIn = reqIn -> next)  
		{

			//find the bigest prioirty
			uri* match=information(a, reqIn); 

		
			if(match -> priority >= Umax -> priority && Rmax==NULL && Umax==NULL && Rmax==NULL || Umax==NULL) 
			{
				Rmax=reqIn; 
				Umax=match; 
			}

		
		}
		//getstats from the structs

		if(Rmax==NULL && Umax==NULL && Rmax==NULL || Umax ==NULL )
		{
			Rmax=b; 
			tempT=b -> t;
			currentTime=sec(tempT);
			Umax=information(a, reqIn); 
		}

		//adjust transmission value
		trans=Umax->size/1.25; 
		tempT1=Rmax -> t;  

		matchDe=currentTime -sec(tempT1);   
		currentTime=trans+currentTime; 
		delay=matchDe;

		//delete
		request* temp=NULL; 
		request* prev=b;  
		request*curr=b -> next;   


		if(!equal(b,Rmax))
		{
			while(curr!=NULL && !equal(curr,Rmax)) 
			{

				prev=curr; 
				curr=curr->next; 
				//delete curr;
				//dont need to delete, just change pointers 
			}

			prev -> next=curr -> next;
	
		} 

		else if(equal(b,Rmax))

		{
			b=b->next;
		}
		
	

	}

//convert to timestamp form

	timestamp answer; 
	answer.hh =delay/3600; 


	delay= delay%3600; 
	answer.mm = delay/60; 
	delay=delay%60;
	answer.ss = delay;


	return answer;
 }




