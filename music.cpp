#include <iostream>
#include<queue>
#include <string>

using namespace std;
int main(){
    queue <string> playlist;
    int choice;
    string song;
    do{
        cout<<"\n Playlist\n";
        cout<<"1.Add\n";
        cout<<"2.Play\n";
        cout<<"3.Current\n";
        cout<<"4.Show\n";
        cout<<"5.Total songs\n";
        cout<<"6.Exit\n";
        cout<<"Enter choice:";
        cin>>choice;
        switch(choice){
            case 1:
            cin.ignore();
            cout<<"Enter song name:";
            getline(cin,song);
            playlist.push(song);
            cout<<"Added\n";
            break;
            case 2:
            if(playlist.empty()){
                cout<<"Playlist empty\n";
            }
            else {
                cout<<"Now playing"<<playlist.front()<<endl;
                playlist.pop();
            }
            break;
            case 3:
             if(playlist.empty()){
                cout<<"Playlist empty\n";
            }
            else {
                cout<<"Next song:"<<playlist.front()<<endl;
            }
            break;
            case 4:
             if(playlist.empty()){
                cout<<"Playlist empty\n";
            }
            else{
                queue <string> temp= playlist;
                cout<<"\n Playlist:\n";
                while (!temp.empty()){
                    cout<<temp.front()<<endl;
                    temp.pop();
                }
            }
            break;
            case 5:
            cout<<"Total:"<<playlist.size<<endl;
            break;
            case 6:
            cout<<"Exiting.....\n";
            break;
            default:
            cout<<"Invalid choice\n";
        }

    }   while(choice !=6);
    return 0; 
}