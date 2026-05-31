#include <iostream>
#include<queue>
#include <string>

using namespace std;
int main(){
    queue <string> customers;
    int choice;
    string name;
    
    do{
        cout<<"\nMenu\n";
        cout<< "1. Join\n";
        cout<<"2. serve\n";
        cout<<"3.Next\n";
        cout<<"4.Count\n";
        cout<<"5.Display Queue\n";
        cout<< "6.Exit\n";
        cout<<"Enter choice:";
        cin>>choice;

        switch(choice){

            case 1:
                cin.ignore();
                cout<<"Enter name:";
                getline(cin,name);

                customers.push(name);
                cout<<name<<" joined\n";
                break;

            case 2:
            if(customers.empty()){
                cout<<"No customers\n";
            }
            else{
                cout<<customers.front()<<" got the ticket";
                customers.pop();
            }
            break;
            case 3:
            if(customers.empty()){
                cout<<"No customers\n";
            }
            else{
                cout<<"Next customer:"<<customers.front()<<endl;
            }
            break;
            case 4:
            cout<<"Total customers:"<<customers.size()<<endl;
            break;
            case 5:
            if(customers.empty()){
                cout<<"No customers\n";
            }
            else{
                queue <string> temp = customers;
                cout<<"Queue:\n";
                while(!temp.empty()){
                    cout<<temp.front();

                    temp.pop();
                     if(!temp.empty()){
                        cout<<"->";
                     }
                     cout<<endl;
                    
                }
            }
            break;
            case 6:
            cout<<"Exting.....\n";
            break;
            default:
            cout<<"Invalid choice\n";
        }
    }while(choice !=6);
    return 0;
}