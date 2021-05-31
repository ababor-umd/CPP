#include<iostream>
#include<fstream>
using namespace std;

//This is just a comment
//Hi there from Abdullah M Babor
     
int main()
{
	ofstream ofs("My.Text",ios::trunc);
	ofs<<"john"<<endl;
	ofs<<25<<endl;
	ofs<<"cs"<<endl;
	ofs.close();
	    
}
    
