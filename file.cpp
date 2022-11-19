#include<iostream>
#include<fstream>
#include<string>

using namespace std;

int main(){
	
	fstream File;
	string line, name, choice;
	
	cout<<"Enter file name: ";
	getline(cin, name);
	File.open(name.c_str(), ios::trunc | ios::out | ios::in);

	cout<<"Enter information to store.. ";
    getline(cin, line);
    
	while(File){
		
		File<<line<<endl;
		cout<<"Want to enter more ? (y/n).. ";
		getline(cin, choice);
		
		if(choice == "n")
			break;
		getline(cin, line);
	}
	
	File.close();
	cout<<endl<<endl;
	cout<<"The information succesfully stored in the file..!!"<<endl<<endl;
	cout<<"Want to see ? (y/n)..";
	getline(cin, choice);
	cout<<endl<<endl;
	
	if(choice=="y")
		cout<<"The file contains:"<<endl;
		
	File.open(name.c_str());
	File.seekg(0, ios::beg);
	
	while(getline(File, line)){
		cout<<line<<endl;
	}
	
	File.close();
	return 0;
}
