#include <iostream>
#include <stack>
using namespace std;

int main() {
    stack<int> Customer_Data;

    cout << "Option 1: Insert customer ID\n";
    cout << "Option 2: Delete customer ID\n";
    cout << "Option 3: Print all remaining customer IDs\n";
    cout << "Option 4: Search for a customer ID\n";
    cout << "Enter -1 to exit\n";

    int option;
    while (true) {
        cout<<"Enter an option what you want to do: ";
        cin >> option;

        // option exit:
        if (option == -1) {
            break;
        }
        
        // option 1:
        else if (option == 1) {
            int id;
            cout << "Enter customer's ID to insert: ";
            cin >> id;
            Customer_Data.push(id);
            cout << "ID inserted successfully.\n";
        }
        
        // option 2:
        else if (option == 2) {
            if (Customer_Data.empty()) {
                cout << "Stack is empty. No data to delete.\n";
                continue;
            }
            
            int idToDelete;
            cout << "Enter customer ID to delete: ";
            cin >> idToDelete;
            
            stack<int> tempStack;
            bool found = false;
            
            while (!Customer_Data.empty()) {
                if (Customer_Data.top() == idToDelete && !found) {
                    Customer_Data.pop();
                    found = true;
                } else {
                    tempStack.push(Customer_Data.top());
                    Customer_Data.pop();
                }
            }
            
            while (!tempStack.empty()) {
                Customer_Data.push(tempStack.top());
                tempStack.pop();
            }
            
            if (found) {
                cout << "ID " << idToDelete << " deleted successfully.\n";
            } else {
                cout << "ID not found.\n";
            }
        }
        
        // option 3:
        else if (option == 3) {
            if (Customer_Data.empty()) {
                cout << "Stack is empty.\n";
                continue;
            }
            
            cout << "Remaining customer IDs: ";
            stack<int> tempStack = Customer_Data;
            while (!tempStack.empty()) {
                cout << tempStack.top() << " ";
                tempStack.pop();
            }
            cout << endl;
        }
        
        // option 4:
        else if (option == 4) {
            if (Customer_Data.empty()) {
                cout << "Stack is empty.\n";
                continue;
            }
            
            int idToSearch;
            cout << "Enter ID to search: ";
            cin >> idToSearch;

            bool found = false;
            stack<int> tempStack = Customer_Data;

            while (!tempStack.empty()) {
                if (tempStack.top() == idToSearch) {
                    found = true;
                    break;
                }
                tempStack.pop();
            }
            
            if (found) {
                cout << "ID " << idToSearch << " found in the stack.\n";
            } else {
                cout << "ID " << idToSearch << " not found in the stack.\n";
            }
        }
        
        // option unknown:
        else {
            cout << "Invalid option. Please try again.\n";
        }
    }

    return 0;
}
