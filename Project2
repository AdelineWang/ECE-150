#include <iostream>
#include <cstring>
#include <fstream> 
#include <cstdlib>
#include <cmath>
#include <string>
#include <ctime>

using namespace std;
extern float avg(float item[], int size);
extern float median(float item[], int size);
extern float stdDev(float item[],float a, int size);
extern float aad(float item[],float m, int size);

//int argc, char *argv[]

int main(int argc, char *argv[])
{
	int bias;
    bias = atoi(argv[1]);
    if(bias<0)
    {
    	cerr<<"error"<<endl;
    	return 1;
    }

	ifstream input;
	input.open("ece150-proj2-input.txt");

	if( input.fail())
	{
		cerr << "Error" << endl;
   		return -1;
	}

	//how many user requests (inputs) there are
	int inputCount=0; 
	string userInput;
	string inputUrl[1000]={};
	//get user input and put into array called inputUrl

	while(userInput!="exit")
	{
		cin>> userInput;
		inputUrl[inputCount]=userInput;
		inputCount++;
	}

	int countFile=0;
	int j=0;
	string input1;
	float input2;
	float input3;
	int max;
	int min;

	//ifstream input;
	//input.open("ece150-proj2-input.txt");

	//int fileSize=0;
	string request;
    float FileSize[999]={};
    float FilePriority[999]={};
    string fileUrl[999]={};
    string uriInput[999]={};

	
	while(input>> fileUrl[j])
	{
		input>>FileSize[j];
		input>>FilePriority[j];
		j++;
		countFile++;
	}

	
	float sizeMatch[999]={};
	float priorityMatch[999]={};
	int matchCount=0;

	for(int j=0; j<inputCount; j++)
	{
		for(int i=0; i<countFile; i++)
		{
			if(inputUrl[j]==fileUrl[i])
			{
				sizeMatch[j]=FileSize[i];
				priorityMatch[j]=FilePriority[i];
				matchCount++;
			}

		}
	}
	int totalCount=inputCount-1;
	if(matchCount!=totalCount)
	{
		cerr<<"error" << endl;
		return 1;
	}
		float timeTrans[999]={};
		float sizeTrans[999]={};

  		int upper=0;
  		int lower=0;
  		int value=0;
  		upper=pow(2,bias);
  		lower=-pow(2,bias);
  		int random[999]={};
  		int temp=0;
  		int tempArray[999]={};

  		int r[999]={};
  		
	if(bias!=0)
	{
		
		for(int i=0; i<inputCount; i++)
		{
			for(int j=0; j<countFile; j++)
			{
				tempArray[j]=rand()%(upper-lower) +lower;
				//tempArray[j]=temp;
				if((tempArray[j] != tempArray[j+1]) && ((sizeMatch[i]+tempArray[j])>0) && j>0)
				
				{
					random[i]=tempArray[j];
					//cout<<random[i]<<endl;
				}
			}
		}
	}

	else if(bias==0)
	{	
		for(int i=0; i<inputCount; i++)
		random[i]=0;
	}

		for(int i=0; i<inputCount; i++)
		{
			//cout<<"random "<<random[i]<<" sizeMatch "<<sizeMatch[i]<<endl;
			sizeTrans[i]=random[i]+sizeMatch[i];
			//cout<<"new size "<<sizeTrans[i]<<" = "<<random[i]<<" sizeMatch "<<sizeMatch[i]<<endl;
			timeTrans[i]=(sizeTrans[i])/1.25;
		}

		
		//for(int i=0; i<match; i++)
		//r[i] =rand()%(upper-lower)+lower;

		//for(int i=0; i<match; i++)
		//cout<< r[i]<<endl;

		/*
		float sizeDelay[1000];
		float timeDelay[1000];

		for(int i=0; i<inputCount; i++)
		{
			sizeDelay[i]=r[i]+sizeMatch[i];
			timeDelay[i]=sizeDelay[i]/1.25;
		} */

	float Saverage;
	float Smed;
	float SstandardDev;
	float SabsoluteDev;
	float Paverage;
	float Pmed;
	float PstandardDev;
	float PabsoluteDev;
	float Taverage;
	float Tmed;
	float TstandardDev;
	float TabsoluteDev;

	
	
		Saverage=avg(sizeMatch, totalCount);
  		Smed=median(sizeMatch, totalCount);
  		SstandardDev=stdDev(sizeMatch, Saverage, totalCount);
  		SabsoluteDev=aad(sizeMatch, Smed, totalCount);
  		cout<< Saverage <<"  " << Smed << "  " << SstandardDev << "  " << SabsoluteDev<<endl;

  		Paverage=avg(priorityMatch, totalCount);
  		Pmed=median(priorityMatch, totalCount);
  		PstandardDev=stdDev(priorityMatch, Paverage, totalCount);
  		PabsoluteDev=aad(priorityMatch, Pmed, totalCount);
  		cout<< Paverage << "  " << Pmed << "  " << PstandardDev << "  " << PabsoluteDev<<endl;

  		Taverage=avg(timeTrans, totalCount);
  		Tmed=median(timeTrans, totalCount);
  		TstandardDev=stdDev(timeTrans, Taverage, totalCount);
  		TabsoluteDev=aad(timeTrans, Tmed, totalCount);
  		cout<< Taverage << "  " << Tmed << "  " << TstandardDev << "  " << TabsoluteDev<<endl;
  		input.close();
		
}




	
/*
	

		*/

  		/*Taverage=avg(sizeTrans, match);
  		Tmed=median(sizeTrans, match);
  		TstandardDev=stdDev(sizeTrans, Paverage, match);
  		TabsoluteDev=aad(sizeTrans, Pmed, match);
  		cout<< Taverage << "  " << Tmed << "  " << TstandardDev << "  " << TabsoluteDev<<endl;
  		*/














	/*
  	int bias;
  	double transDelay;
    bias = atoi(argv[1]);
   // int lower=pow(-2.71828183,bias);
    int lower=exp(bias);
    int upper=-exp(bias);
  	




	string userInput;
	int inputCount;
	string inputUrl[100];  //url for user input
	float Saverage;
	float Smed;
	float SstandardDev;
	float SabsoluteDev;
	float Paverage;
	float Pmed;
	float PstandardDev;
	float PabsoluteDev;
	float Taverage;
	float Tmed;
	float TstandardDev;
	float TabsoluteDev;

	string input1;
	float input2;
	float input3;
	float urlMatchPirority[100];
	float urlMatchSize[100];
	string urlMatch[100];
	int match=0;



	//get user input and put into array called inputUrl
	while(userInput!="exit")
	{
		cin>> userInput;
		inputUrl[inputCount]=userInput;
		inputCount++;
	}

	ifstream input;
	input.open("ece150-proj2-input.txt");

	int fileSize=0;

	while(input>>  input1>>input2 >> input3) 
	{ 
		fileSize++;
	}
	input.clear();  //clear flags
	input.seekg(0); //reset pointer to beginning
	input.close();
	//cout<<"lines in file " <<fileSize<<endl;

	string fileUrl[fileSize];  //url for textfile

	string urlFile[fileSize]; 
	float sizeFile[fileSize]; 
	float priorityFile[fileSize];
	//cout<< fileSize<<endl;
	//float urlMatchPirority[100];
	//float urlMatchSize[100];
	input.open("ece150-proj2-input.txt");
	for(int i=0; i<fileSize; i++)
	{
		input >> urlFile[i];
		input >> sizeFile[i];
		input >> priorityFile[i];
		//cout<< sizeFile[i]<<endl;
	//	cout<< fileSize<<endl;
		//cout<<"read file "<<sizeFile[i]<<endl;
	}

	//cout<<"input" <<inputCount;
	//cout<< "file   "<<fileSize<<endl;
	
	//cout<<fileSize<<endl;

	for(int i=0; i<inputCount; i++)  //textfile
  	{
  		//cout<< "test1"<<endl;
  		for(int j=0; j<fileSize; j++)  //user input
  	 	{
  	 	//	cout<< "test"<<endl;
  	 		if(inputUrl[i]==urlFile[j])
  	 		{
  	 				//urlMatch[match]=urlFile[j];
  	 				//cout<<"test"<<endl;
  	 				//cout<<"read file "<<sizeFile[i]<<endl;
  	 				

  	 				urlMatchSize[match]=sizeFile[j];

  	 				//cout<<"size match" <<urlMatchSize[match]<<endl;
	  	 			urlMatchPirority[match]=priorityFile[j];
	  	 			//cout<<"priorty match" <<urlMatchPirority[match]<<endl;

		  	 		match++;
		  	 		//cout<<"url match " <<urlFile[i];	
		  	 		break;
		  	 		
	  	 	}
	  	 
  		}
  	}	
  	//cout<<"match "<<endl;

  	int request=match;
  	int num=0;
  	float sizeTrans[match];

  	srand(time(NULL));
	int r[request];
	
	for(int i=0; i<request; i++)
	{
		r[i]=rand()%(upper-lower)-lower;
		//cout<<r[i]<<endl;
	}



	for(int i=0; i<request; i++)
	{
		sizeTrans[i]=urlMatchSize[i]+r[i];
		//cout<< sizeTrans[i]<<endl;
	}

	for(int i=0; i<match; i++)
	{
		//cout<< urlMatchPirority[i] << endl;
	}

	//cout<<"match "<< endl;
  		Saverage=avg(urlMatchSize, match);
  		Smed=median(urlMatchSize, match);
  		//cout << Saverage << endl;
  		SstandardDev=stdDev(urlMatchSize, Saverage, match);
  		//cout << "HELLO" << endl;
  		SabsoluteDev=aad(urlMatchSize, Smed, match);


  		cout<< Saverage <<"  " << Smed << "  " << SstandardDev << "  " << SabsoluteDev<<endl;

  		Paverage=avg(urlMatchPirority, match);
  		Pmed=median(urlMatchPirority, match);
  		PstandardDev=stdDev(urlMatchPirority, Paverage, match);
  		PabsoluteDev=aad(urlMatchPirority, Pmed, match);
  		cout<< Paverage << "  " << Pmed << "  " << PstandardDev << "  " << PabsoluteDev<<endl;



  		Taverage=avg(sizeTrans, match);
  		Tmed=median(sizeTrans, match);
  		TstandardDev=stdDev(sizeTrans, Paverage, match);
  		TabsoluteDev=aad(sizeTrans, Pmed, match);
  		cout<< Taverage << "  " << Tmed << "  " << TstandardDev << "  " << TabsoluteDev<<endl;
  		

*/


