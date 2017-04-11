#include<iostream>
#include<string>
 
using namespace std;
 
int main()
{
	string str="aaabbcdddd";
	string str1="";
 
	int count=1;
 
	for(int i=0;str[i]!='\0';i++)
	{
		while(str[i]==str[i+1])
		{
			count++;
			i++;
		}
		str1=str1 + str[i] + to_string(count);
		count=1;			
	}	
	cout<<str1;
 
	return 0;
}
