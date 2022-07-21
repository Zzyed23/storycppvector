#include <iostream>
#include <vector>

using namespace std;
int main(){
	string n;
	string c;
	int a;
	vector<string> name;
	vector<string> color;
	vector<int> age;
	int i;
	for(i=0; i< 3; i++)
	{
		cout<<"Name a person"<<endl;
		cin>>n;
		name.push_back(n);
		cout<<"How old are they?\n";
		cin>>a;
		age.push_back(a);
		cout<<"Name a color that they like?\n";
		cin>>c;
		color.push_back(c);
	}
	
	
	cout<< name[0]<< ", " << name[1]<< " and, " << name[2]<< " are amazing people" << endl;
	cout<<"They like the colors " << color[0] <<", " << color[1]<<" and, " << color[2]
	<< endl;
	cout<< name[0]<< ", " << name[1]<< " and, " << name[2] <<" All attend the University of Louisville" <<endl;
	cout<< name[2]<< " is only "<< age[2] << " years old and they are taking their first computer science course! " << endl;
	cout<< name[1] << " has only a couple more semesters until they graduate."<< endl;
	
	
	
	
	
	return 0;
}
