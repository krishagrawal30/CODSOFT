#include<iostream>
#include<vector>
using namespace std;
vector<pair<string, bool>> task;
void view()
{
    if (task.empty())
        cout<<"No task in TO-Do List."<<endl;
    else
    {
        cout<<"To-Do List:"<<endl;
        for (int i = 0; i < task.size(); i++)
            cout<<i+1<< ") "<<task[i].first<<" -> "<<(task[i].second ? "Completed" : "Pending")<<endl;
    }
}
int main()
{
    int c;
    while (true)
    {
        cout << "\n1. Add Task\n2. View tasks\n3. Mark Task as Completed\n4. Remove Task\n5. Exit\nEnter a choice: ";
        cin >> c;
        switch (c)
        {
        case 1:
        {
            string s;
            cout << "Enter task: ";
            cin.ignore();
            getline(cin, s);
            task.push_back({s, false});
            break;
        }
        case 2:
            view();
            break;

        case 3:
        {
            view();
            cout << "Enter task number to mark as completed: ";
            int num;
            cin >> num;
            if (num >= 1 && num <= task.size())
            {
                task[num-1].second = true;
                cout<<"task marked as completed."<<endl;
            }
            else cout<<"Invalid Task number."<<endl;
            break;
        }
        case 4:
        {
            view();
            cout << "Enter task number to remove: ";
            int num;
            cin >> num;
            if (num >= 1 && num <= task.size())
            {
                task.erase(task.begin() + num - 1);
                cout << "Task removed successfully."<<endl;
            }
            else cout<<"Invalid Task number."<<endl;
            break;
        }
        case 5:
            cout << "Exiting To-Do List."<<endl;
            return 0;

        default:
            cout << "Invalid choice. Try again."<<endl;
        }
    }
}
