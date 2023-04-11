#include <iostream>
#include <string>
using namespace std;

int main()
{
    struct person
    {
        char gander;
        int age;
        string name;
        float weight;
    };
    int num;
    cout<<"Numbers of persons: ";
    cin>>num;
    person p[num];

    for(int i = 0; i < num; i++)
    {
        cout<<"Enter the Name, Gander, Age and weight of "<< i+1 <<" person."<<endl;
        cin>> p[i].name >> p[i].gander >> p[i].age >> p[i].weight;
    }
    cout<<endl;
    
    for(int i=0; i < num; i++)
    {
    	cout<< "Name of "<< i+1<<" person is: "<<p[i].name <<endl;
    	cout<< "Gander of "<< i+1<<" person is: "<<p[i].gander <<endl;
    	cout<< "Age of "<< i+1<<" person is: "<<p[i].age <<endl;
    	cout<< "Weight of "<< i+1<<" person is: "<<p[i].weight <<endl;
    	cout<<endl;
	}
    

    return 0;
}
