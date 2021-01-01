/*
My name: NAzar Altayeb Osman Alkhalifa
Class: Second
Department: Computer
*/
#include <iostream>
#include <string>
#include <fstream>//including this in order to deal with files
#include<windows.h>
using namespace std;
ofstream data_sheet;
struct node {//create node with data and pointer
    string name,
        given_name,
        additional_name,
        family_name,
        yomi_name,
        given_name_yomi,
        additional_name_yomi,
        family_name_yomi,
        name_prefix,
        name_suffix,
        initials,
        nickname,
        short_name,
        maiden_name,
        birthday,
        gender,
        location,
        billing_information,
        directory_server,
        mileage,
        occupation,
        hobby,
        sensitivity,
        priority,
        subject,
        notes,
        language,
        e_mail1_type,
        e_mail1_value,
        e_mail2_type,
        e_mail2_value,
        phone1_type,
        phone2_type,
        phone3_type,
        phone4_type,
        organization1_type,
        organization1_name,
        organization1_yomi_name,
        organization1_title,
        organization1_department,
        organization1_location,
        organization1_job_description,
        website1_type,
        website1_value,
        group_Membership,
        organization1_symbol,
        phone1_value, phone2_value, phone3_value, phone4_value;
    node* next;
};
node* head = NULL, * newnode, * trav, * temp;
int length = 0;

void create_contact() {//this to add new node
    newnode = new node;
    cout << "\n";
    cin.get();
    cout << "Enter the Name: "; getline(cin, newnode->name);
    cout << "Enter Given Name : "; getline(cin, newnode->given_name);
    cout << "Enter Additional Name: "; getline(cin, newnode->additional_name);
    cout << "Enter Family Name: "; getline(cin, newnode->family_name);
    cout << "Enter Yomi Name: "; getline(cin, newnode->yomi_name);
    cout << "Enter Given Name Yomi: "; getline(cin, newnode->given_name_yomi);
    cout << "Enter Additional Name Yomi: "; getline(cin, newnode->additional_name_yomi);
    cout << "Enter Family Name Yomi: "; getline(cin, newnode->family_name);
    cout << "Enter Name Prefix: "; getline(cin, newnode->name_prefix);
    cout << "Enter Name Suffix: "; getline(cin, newnode->name_suffix);
    cout << "Enter Initials: "; getline(cin, newnode->initials);
    cout << "Enter Nickname: "; getline(cin, newnode->nickname);
    cout << "Enter Short Name: "; getline(cin, newnode->short_name);
    cout << "Enter Maiden Name: "; getline(cin, newnode->maiden_name);
    cout << "Enter Birthday: "; getline(cin, newnode->birthday);
    cout << "Enter Gender: "; getline(cin, newnode->gender);
    cout << "Enter Location: "; getline(cin, newnode->location);
    cout << "Enter Billing Information: "; getline(cin, newnode->billing_information);
    cout << "Enter Directory Server: "; getline(cin, newnode->directory_server);
    cout << "Enter Mileage: "; getline(cin, newnode->mileage);
    cout << "Enter Occupation: "; getline(cin, newnode->occupation);
    cout << "Enter Hobby: "; getline(cin, newnode->hobby);
    cout << "Enter Sensitivity: "; getline(cin, newnode->sensitivity);
    cout << "Enter Priority: "; getline(cin, newnode->priority);
    cout << "Enter Subject: "; getline(cin, newnode->subject);
    cout << "Enter Notes: "; getline(cin, newnode->notes);
    cout << "Enter Language: "; getline(cin, newnode->language);
    // cout<<"Enter Photo: ";
    cout << "Enter Group Membership: "; getline(cin, newnode->group_Membership);
    cout << "Enter E-mail 1 - Type: "; getline(cin, newnode->e_mail1_type);
    cout << "Enter E-mail 1 - Value: "; getline(cin, newnode->e_mail1_value);
    cout << "Enter E-mail 2 - Type: "; getline(cin, newnode->e_mail2_type);
    cout << "Enter E-mail 2 - Value: "; getline(cin, newnode->e_mail2_value);
    cout << "Enter Phone 1 - Type: "; getline(cin, newnode->phone1_type);
    cout << "Enter Phone 1 - Value: "; getline(cin, newnode->phone1_value);
    cout << "Enter Phone 2 - Type: "; getline(cin, newnode->phone2_type);
    cout << "Enter Phone 2 - Value: "; getline(cin, newnode->phone2_value);
    cout << "Enter Phone 3 - Type: "; getline(cin, newnode->phone3_type);
    cout << "Enter Phone 3 - Value: "; getline(cin, newnode->phone3_value);
    cout << "Enter Phone 4 - Type: "; getline(cin, newnode->phone4_type);
    cout << "Enter Phone 4- Value: "; getline(cin, newnode->phone4_value);
    cout << "Enter Organization 1 - Type: "; getline(cin, newnode->organization1_type);
    cout << "Enter Organization 1 - Name: "; getline(cin, newnode->organization1_name);
    cout << "Enter Organization 1 - Yomi Name: "; getline(cin, newnode->organization1_yomi_name);
    cout << "Enter Organization 1 - Title: "; getline(cin, newnode->organization1_title);
    cout << "Enter Organization 1 - Department: "; getline(cin, newnode->organization1_department);
    cout << "Enter Organization 1 - Symbol: "; getline(cin, newnode->organization1_symbol);
    cout << "Enter Organization 1 - Location: "; getline(cin, newnode->organization1_location);
    cout << "Enter Organization 1 - Job Description: "; getline(cin, newnode->organization1_job_description);
    cout << "Enter Website 1 - Type: "; getline(cin, newnode->website1_type);
    cout << "Enter Website 1 - Value: "; getline(cin, newnode->website1_value);
    newnode->next = NULL;
    if (head == NULL)
    {
        head = newnode;
        trav = newnode;
    }
    else {
        trav->next = newnode;
        trav = newnode;

    }


}

void display() {//function to show all nodes (contacts)
    if (head == NULL) {
        cout << "contacts list is Empty" << endl;
    }
    else {
        node* trav = head;
        while (trav != NULL) {
            cout << "Name: " << trav->name << endl;
            cout << "Given Name : " << trav->given_name << endl;
            cout << "Additional Name: " << trav->additional_name << endl;
            cout << "Family Name: " << trav->family_name << endl;
            cout << "Yomi Name: " << trav->yomi_name << endl;
            cout << "Given Name Yomi: " << trav->given_name_yomi << endl;
            cout << "Additional Name Yomi: " << trav->additional_name_yomi << endl;
            cout << "Family Name Yomi: " << trav->family_name_yomi << endl;
            cout << "Name Prefix: " << trav->name_prefix << endl;
            cout << "Name Suffix: " << trav->name_suffix << endl;
            cout << "Initials: " << trav->initials << endl;
            cout << "Nickname: " << trav->nickname << endl;
            cout << "Short Name: " << trav->short_name << endl;
            cout << "Maiden Name: " << trav->maiden_name << endl;
            cout << "Birthday: " << trav->birthday << endl;
            cout << "Gender: " << trav->gender << endl;
            cout << "Location: " << trav->location << endl;
            cout << "Billing Information: " << trav->billing_information << endl;
            cout << "Directory Server: " << trav->directory_server << endl;
            cout << "Mileage: " << trav->mileage << endl;
            cout << "Occupation: " << trav->occupation << endl;
            cout << "Hobby: " << trav->hobby << endl;
            cout << "Sensitivity: " << trav->sensitivity << endl;
            cout << "Priority: " << trav->priority << endl;
            cout << "Subject: " << trav->subject << endl;
            cout << "Notes: " << trav->notes << endl;
            cout << "Language: " << trav->language << endl;
            //cout<<temp->photo<<endl;
            cout << "Group Membership: " << trav->group_Membership << endl;
            cout << "E-mail 1 -Type: " << trav->e_mail1_type << " : " << trav->e_mail1_value << endl;
            cout << "E-mail 2 -Type: " << trav->e_mail2_type << " : " << trav->e_mail2_value << endl;
            cout << trav->phone1_type << "  " << trav->phone1_value << endl;
            cout << trav->phone2_type << "  " << trav->phone2_value << endl;
            cout << trav->phone3_type << "  " << trav->phone3_value << endl;
            cout << trav->phone4_type << "  " << trav->phone4_value << endl;
            cout << "Organization Type: " << trav->organization1_type << endl;
            cout << "Organization Name: " << trav->organization1_name;
            cout << "Organization Yomi Name: " << trav->organization1_yomi_name << endl;
            cout << "Organization Title: " << trav->organization1_title << endl;
            cout << "Organization Department: " << trav->organization1_department << endl;
            cout << "Organization Symbol: " << trav->organization1_symbol << endl;
            cout << "Organization Location: " << trav->organization1_location << endl;
            cout << "Organization Job Description: " << trav->organization1_job_description << endl;
            cout << "Organization website Type: " << trav->website1_type << endl;
            cout << "Organization website: " << trav->website1_value << endl;
            trav = trav->next;
            length++;
        }
        cout << "Total Contacts in List : " << length;

    }

}
void write_contact_text();//prototype function
void search_contact() {//search node
    node* search_node = head;
    string search_;
    int counter = 1;
    cout << "Enter the contact you want search With Name: ";
    cin >> search_;
    bool found = true;
    if (head == NULL) {
        cout << "There is no Contacts";

    }
    else {
        while (search_node != NULL) {
            if (search_ == search_node->name || search_ == search_node->given_name) {
                cout << "\n \n";
                cout << "Name: " << search_node->name << endl;
                cout << "Given Name : " << search_node->given_name << endl;
                cout << "Additional Name: " << search_node->additional_name << endl;
                cout << "Family Name: " << search_node->family_name << endl;
                cout << "Yomi Name: " << search_node->yomi_name << endl;
                cout << "Given Name Yomi: " << search_node->given_name_yomi << endl;
                cout << "Additional Name Yomi: " << search_node->additional_name_yomi << endl;
                cout << "Family Name Yomi: " << search_node->family_name_yomi << endl;
                cout << "Name Prefix: " << search_node->name_prefix << endl;
                cout << "Name Suffix: " << search_node->name_suffix << endl;
                cout << "Initials: " << search_node->initials << endl;
                cout << "Nickname: " << search_node->nickname << endl;
                cout << "Short Name: " << search_node->short_name << endl;
                cout << "Maiden Name: " << search_node->maiden_name << endl;
                cout << "Birthday: " << search_node->birthday << endl;
                cout << "Gender: " << search_node->gender << endl;
                cout << "Location: " << search_node->location << endl;
                cout << "Billing Information: " << search_node->billing_information << endl;
                cout << "Directory Server: " << search_node->directory_server << endl;
                cout << "Mileage: " << search_node->mileage << endl;
                cout << "Occupation: " << search_node->occupation << endl;
                cout << "Hobby: " << search_node->hobby << endl;
                cout << "Sensitivity: " << search_node->sensitivity << endl;
                cout << "Priority: " << search_node->priority << endl;
                cout << "Subject: " << search_node->subject << endl;
                cout << "Notes: " << search_node->notes << endl;
                cout << "Language: " << search_node->language << endl;
                cout << "Group Membership: " << search_node->group_Membership << endl;
                cout << "E-mail 1 -Type: " << search_node->e_mail1_type << " : " << search_node->e_mail1_value << endl;
                cout << "E-mail 2 -Type: " << search_node->e_mail2_type << " : " << search_node->e_mail2_value << endl;
                cout << "Phone 1: " << trav->phone1_type << " " << search_node->phone1_value << endl;
                cout << "Phone 2: " << trav->phone2_type << " " << search_node->phone2_value << endl;
                cout << "Phone 3: " << trav->phone3_type << " " << search_node->phone3_value << endl;
                cout << "Phone 4: " << trav->phone4_type << " " << search_node->phone4_value << endl;
                cout << "Organization Type: " << search_node->organization1_type << endl;
                cout << "Organization Name: " << search_node->organization1_name << endl;
                cout << "Organization Yomi Name: " << search_node->organization1_yomi_name << endl;
                cout << "Organization Title: " << search_node->organization1_title << endl;
                cout << "Organization Department: " << search_node->organization1_department << endl;
                cout << "Organization Symbol: " << search_node->organization1_symbol << endl;
                cout << "Organization Location: " << search_node->organization1_location << endl;
                cout << "Organization Job Description: " << search_node->organization1_job_description << endl;
                cout << "Organization website Type: " << search_node->website1_type << " : " << search_node->website1_value << endl;
                found = true;
                break;
            }
            search_node = search_node->next;
            counter++;
        }
    }
    if (found == true) {

        cout << " This Name In Index : " << counter;
    }
    else {
        cout << " Contact no Found" << endl;
    }
};

void delete_contact() {//delete a node (contact)
    int pos;
    node* next_node;
    temp = head;
    cout << "Enter the position where you want to delete contact" << endl;
    cin >> pos;
    if (head == NULL) {
        cout << "There is no Contact to Delete " << endl;
    }
    else if (pos > length) {
        cout << "Invalid Position " << endl;
    }
    else if (pos == 0) {
        temp = head;
        head = head->next;
        delete temp;
        cout << "Contact is Deleted " << endl;
    }
    else {
        for (int i = 1; i < pos; i++) {
            temp = temp->next;
        }
        next_node = temp->next;
        temp->next = next_node->next;
        delete next_node;
        cout << "Contact is Deleted " << endl;
    }


}

void clear_all() {//delete all contacts
    if (head == NULL) {
        cout << "List is Empty" << endl;
    }
    else {
        temp = head;
        while (head != NULL) {
            head = head->next;
            delete temp;
        }
        cout << "All contacts are Deleted" << endl;
    }
}

void modify() {//to0o modify node
    int selected_index;
    cout << "Enter The Index of Contact that you want Edit: "; cin >> selected_index;
    int pos;
    pos = selected_index;
    node* next_node;
    temp = head;
    if (head == NULL) {
        cout << "There is no Contact to Delete " << endl;
    }
    else if (pos > length) {
        cout << "Invalid Position " << endl;
    }
    else if (pos == 0) {
        temp = head;
        head = head->next;
        delete temp;

    }
    else {
        for (int i = 1; i < pos; i++) {
            temp = temp->next;
        }
        next_node = temp->next;
        temp->next = next_node->next;
        delete next_node;

    };

    if (head == NULL) {
        cout << "No contact to edit" << endl;
    }
    else {


        newnode = new node;
        cin.get();
        cout << "Enter the Name: "; getline(cin, newnode->name);
        cout << "Enter Given Name : "; getline(cin, newnode->given_name);
        cout << "Enter Additional Name: "; getline(cin, newnode->additional_name);
        cout << "Enter Family Name: "; getline(cin, newnode->family_name);
        cout << "Enter Yomi Name: "; getline(cin, newnode->yomi_name);
        cout << "Enter Given Name Yomi: "; getline(cin, newnode->given_name_yomi);
        cout << "Enter Additional Name Yomi: "; getline(cin, newnode->additional_name_yomi);
        cout << "Enter Family Name Yomi: "; getline(cin, newnode->family_name);
        cout << "Enter Name Prefix: "; getline(cin, newnode->name_prefix);
        cout << "Enter Name Suffix: "; getline(cin, newnode->name_suffix);
        cout << "Enter Initials: "; getline(cin, newnode->initials);
        cout << "Enter Nickname: "; getline(cin, newnode->nickname);
        cout << "Enter Short Name: "; getline(cin, newnode->short_name);
        cout << "Enter Maiden Name: "; getline(cin, newnode->maiden_name);
        cout << "Enter Birthday: "; getline(cin, newnode->birthday);
        cout << "Enter Gender: "; getline(cin, newnode->gender);
        cout << "Enter Location: "; getline(cin, newnode->location);
        cout << "Enter Billing Information: "; getline(cin, newnode->billing_information);
        cout << "Enter Directory Server: "; getline(cin, newnode->directory_server);
        cout << "Enter Mileage: "; getline(cin, newnode->mileage);
        cout << "Enter Occupation: "; getline(cin, newnode->occupation);
        cout << "Enter Hobby: "; getline(cin, newnode->hobby);
        cout << "Enter Sensitivity: "; getline(cin, newnode->sensitivity);
        cout << "Enter Priority: "; getline(cin, newnode->priority);
        cout << "Enter Subject: "; getline(cin, newnode->subject);
        cout << "Enter Notes: "; getline(cin, newnode->notes);
        cout << "Enter Language: "; getline(cin, newnode->language);
        // cout<<"Enter Photo: ";
        cout << "Enter Group Membership: "; getline(cin, newnode->group_Membership);
        cout << "Enter E-mail 1 - Type: "; getline(cin, newnode->e_mail1_type);
        cout << "Enter E-mail 1 - Value: "; getline(cin, newnode->e_mail1_value);
        cout << "Enter E-mail 2 - Type: "; getline(cin, newnode->e_mail2_type);
        cout << "Enter E-mail 2 - Value: "; getline(cin, newnode->e_mail2_value);
        cout << "Enter Phone 1 - Type: "; getline(cin, newnode->phone1_type);
        cout << "Enter Phone 1 - Value: "; getline(cin, newnode->phone1_value);
        cout << "Enter Phone 2 - Type: "; getline(cin, newnode->phone2_type);
        cout << "Enter Phone 2 - Value: "; getline(cin, newnode->phone2_value);
        cout << "Enter Phone 3 - Type: "; getline(cin, newnode->phone3_type);
        cout << "Enter Phone 3 - Value: "; getline(cin, newnode->phone3_value);
        cout << "Enter Phone 4 - Type: "; getline(cin, newnode->phone4_type);
        cout << "Enter Phone 4- Value: "; getline(cin, newnode->phone4_value);
        cout << "Enter Organization 1 - Type: "; getline(cin, newnode->organization1_type);
        cout << "Enter Organization 1 - Name: "; getline(cin, newnode->organization1_name);
        cout << "Enter Organization 1 - Yomi Name: "; getline(cin, newnode->organization1_yomi_name);
        cout << "Enter Organization 1 - Title: "; getline(cin, newnode->organization1_title);
        cout << "Enter Organization 1 - Department: "; getline(cin, newnode->organization1_department);
        cout << "Enter Organization 1 - Symbol: "; getline(cin, newnode->organization1_symbol);
        cout << "Enter Organization 1 - Location: "; getline(cin, newnode->organization1_location);
        cout << "Enter Organization 1 - Job Description: "; getline(cin, newnode->organization1_job_description);
        cout << "Enter Website 1 - Type: "; getline(cin, newnode->website1_type);
        cout << "Enter Website 1 - Value: "; getline(cin, newnode->website1_value);
        newnode->next = NULL;
        if (head == NULL)
        {
            head = newnode;
            trav = newnode;
        }
        else {
            trav->next = newnode;
            trav = newnode;

        }
    }

}

void menu() {//The menu function
    cout << "\n\n";
    cout << "\t***********************************" << endl;
    cout << "\t*           Contacts              *" << endl;
    cout << "\t***********************************" << endl;
    cout << "\t*    1  Add A Contacts            *" << endl;
    cout << "\t*    2  Search contact            *" << endl;
    cout << "\t*    3  Delete contact            *" << endl;
    cout << "\t*    4  Edit Contact              *" << endl;
    cout << "\t*    5  Add Two Contacts Together *" << endl;
    cout << "\t*    6  Display  Contacts         *" << endl;
    cout << "\t*    7  Exit From Contacts        *" << endl;
    cout << "\t*                                 *" << endl;
    cout << "\t***********************************" << endl;
}
int main(){//the main function of the program


    int option;
    bool loop = true;
    while (loop) {
        menu();
        cout << "\tSelection: "; cin >> option;


        switch (option) {
        case 1:
            create_contact();
            write_contact_text();
            system("cls");
            break;
        case 2:
            system("cls");
            search_contact();
            break;

        case 3:
            system("cls");
            int deletion_selection;
            cout << "\n\t*********************************" << endl;
            cout << "\t*        Deletion Menu          *" << endl;
            cout << "\t*********************************" << endl;
            cout << "\t*1 Delete Specific Contact\t*\n\t*2 Delete All Contact\t\t*" << endl;
            cout << "Selection: "; cin >> deletion_selection;
            system("cls");
            if (deletion_selection == 1) {
                delete_contact();
            }
            else if (deletion_selection == 2) {
                clear_all();
            }
            else {
                cout << "Deletion Not Succeed..." << endl;
            }
            break;
        case 4:
            modify();
            break;

        case 5:
            int first_position, second_position;
            system("cls");
            cout << "Enter The Position The Contacts: \n" << endl;
            cout << "First Position: "; cin >> first_position;
            cout << "Second Position: "; cin >> second_position;

            break;
        case 6:
            length = 0;
            display();
            break;
        case 7:
            loop = false;

            break;
        default:
            cout << "error" << endl;


        }data_sheet.close();//close text file

    }



    return 0;
}
void write_contact_text(){//to write on file txt
    data_sheet.open("data_for_contacts.txt");//opening the file
    data_sheet << "Name: " << newnode->name ;
    data_sheet << " Given Name : "<<newnode->given_name<<endl;
    data_sheet << "Additional Name : "<<newnode->additional_name;
    data_sheet << " Family Name: "<<newnode->family_name<<endl;
    data_sheet << "Yomi Name : "<<newnode->yomi_name;
    data_sheet << " Given Name Yomi: "<<newnode->given_name_yomi<<endl;
    data_sheet << "Additional Name Yomi: "<<newnode->additional_name_yomi;
    data_sheet << " Family Name Yomi: "<<newnode->family_name_yomi<<endl;
    data_sheet << "Name Prefix: "<<newnode->name_prefix;
    data_sheet << " Name Suffix: "<<newnode->name_suffix<<endl;
    data_sheet << "Initials: "<<newnode->initials;
    data_sheet << " Nickname: "<<newnode->nickname<<endl;
    data_sheet << "Short Name : "<<newnode->short_name;
    data_sheet << " Maiden Name: "<<newnode->maiden_name<<endl;
    data_sheet << "Birthday: "<<newnode->birthday;
    data_sheet << " Gender: "<<newnode->gender<<endl;
    data_sheet << "Location: "<<newnode->location;
    data_sheet << " Billing Information : "<<newnode->billing_information<<endl;
    data_sheet << "Directory Server: "<<newnode->directory_server;
    data_sheet << " Mileage: "<<newnode->mileage<<endl;
    data_sheet << "Occupation: "<<newnode->occupation;
    data_sheet << " Hobby: "<<newnode->hobby<<endl;
    data_sheet << "Sensitivity: "<<newnode->sensitivity;
    data_sheet << " Priority: "<<newnode->priority<<endl;
    data_sheet << "Subject: " <<newnode->subject;
    data_sheet << " Notes: "<<newnode->notes<<endl;
    data_sheet << "Language: "<<newnode->language;
    data_sheet << " Group Membership: "<<newnode->group_Membership<<endl;
    data_sheet << newnode->e_mail1_type << " " << newnode->e_mail1_value;
    data_sheet << newnode->e_mail2_type << " " << newnode->e_mail2_value<<endl;
    data_sheet << newnode->phone1_type << " " << newnode->phone1_value;
    data_sheet << newnode->phone2_type << " " << newnode->phone2_value<<endl;
    data_sheet << newnode->phone3_type << " " << newnode->phone3_value;
    data_sheet << newnode->phone4_type << " " << newnode->phone4_value<<endl;
    data_sheet << " Organization 1 - Type: "<< newnode->organization1_type;
    data_sheet << " Organization 1 - Name: "<<newnode->organization1_name<<endl;
    data_sheet << " Organization 1 - Yomi Name: "<<newnode->organization1_yomi_name;
    data_sheet << " Organization 1 - Title: "<<newnode->organization1_title<<endl;
    data_sheet << " Organization 1 - Department: "<<newnode->organization1_department;
    data_sheet << " Organization 1 - Symbol: "<<newnode->organization1_symbol<<endl;
    data_sheet << " Organization 1 - Location: "<<newnode->location;
    data_sheet << " Organization 1 - Job Description: "<<newnode->organization1_job_description<<endl;
    data_sheet << " Website : "<<newnode->website1_value;


}
