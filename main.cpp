#include <iostream>
#include <vector>

using namespace std;

//prototypes

void display_menu();
char get_selection();

//display list of data 
void display_list(const vector<int> &v);
//calculate mean
double calc_mean(vector<int>&v);
//smallest number
int calc_smallest_num(vector<int> &v);
//largest number
int calc_largest_num(vector<int> &v);

//menu controls prototype
void handle_display(const vector<int> &v);
void handle_add(vector<int> &v);
void handle_mean(vector <int> &v);
void handle_smallest( vector <int> &v);
void handle_largest( vector<int> &v);
void handle_quit();
void handle_unknowns();


int main(){
    vector <int> data{};
    char selection{};
    
    do{
        display_menu();
        selection = get_selection();
        switch(selection){
            case('P'):
                handle_display(data);
            break;
            case('A'):
                handle_add(data);
            break;
            case('M'):
                handle_mean(data);
            break;
            case('S'):
                handle_smallest(data);
            break;
            case('L'):
                handle_largest(data);
            break;
            case('Q'):
                handle_quit();
            break;
            default:
                handle_unknowns();
            break;
        }
        
    }while(selection != 'Q');
    cout<<endl;
    return 0;
}

//display menu
void display_menu(){
    cout<<"\nP - Print number"<<endl;
    cout<<"A - Add a number"<<endl;
    cout<<"M - Display mean of number"<<endl;
    cout<<"S - Display the smallest number"<<endl;
    cout<<"L - Display the largest number"<<endl;
    cout<<"Q - Quit\n"<<endl;
    cout<<"Enter your choice"<<endl;
}

//display list of data 
void display_list(const vector<int> &v){
    cout<<" [ ";
    for(auto num : v)
        cout<<num<<" ";
    cout<<" ] "<<endl;
}

//calculate mean
double calc_mean(vector<int>&v){
    int total{};
    for(auto num: v)
        total += num;
    return static_cast<double>(total)/v.size();
    
}
char get_selection(){
    char selection{};
    cin>>selection;
    return toupper(selection);
}

//smallest number
int calc_smallest_num(vector<int> &v){
    int smallest_num = v.at(0);
    for(auto num:v){
        if(num<smallest_num){
            smallest_num = num;
        }
    }
    return smallest_num;
}

//largest number
int calc_largest_num(vector<int> &v){
    int largest_num = v.at(0);
    for(auto num: v){
        if(num>largest_num){
            largest_num = num;
        }
    }
    return largest_num;
}

void handle_display(const vector<int> &v){
    if(v.size()==0)
        cout<<"[]- list is empty"<<endl;
    else 
        display_list(v);
}

void handle_add(vector<int> &v){
    int number{};
    cout<<"Enter an integer to add: ";
    cin>>number;
    v.push_back(number);
    cout<<number<<" added "<<endl;
    
}
void handle_mean(vector <int> &v){
    if(v.size()==0)
        cout<<"list is empty please add the numbers "<<endl;
    else
        cout<<"your mean is : "<<calc_mean(v)<<endl;
}
void handle_smallest( vector <int> &v){
    if(v.size()==0)
        cout<<"Error list is empty"<<endl;
    else
        cout<<"The smallest number is : "<<calc_smallest_num(v)<<endl;
}
void handle_largest( vector<int> &v){
    if(v.size()==0)
        cout<<"list is empty "<<endl;
    else
        cout<<"Largest number is: "<<calc_largest_num(v)<<endl;
}
void handle_quit(){
    cout<<"****************************"<<endl;
    cout<<"\tGoodbye"<<endl;
    cout<<"****************************"<<endl;
}
void handle_unknowns(){
    cout<<"Unknows selection - Try again"<<endl;
}