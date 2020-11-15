#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector<int> data{};
    char num{};
    do{
    cout<<"\nP - Print number"<<endl;
    cout<<"A - Add a number"<<endl;
    cout<<"M - Display mean of number"<<endl;
    cout<<"S - Display the smallest number"<<endl;
    cout<<"L - Display the largest number"<<endl;
    cout<<"Q - Quit\n"<<endl;
    cout<<"Enter your choice"<<endl;
    cin>>num;

    if(num=='P' || num=='p'){
         if(data.size()==0){
             cout<<"[]- the list is empty"<<endl;
         }else{
             cout<<" [ ";
             for(auto num_list : data){
                 cout<<num_list<<" ";
             }
             cout<<"]"<<endl;
         }
    }else if(num=='A'||num=='a'){
        int add_num{};
        cout<<"Enter a number which you want to add: ";
        cin>>add_num;
        cout<<add_num<<" added ";
        data.push_back(add_num);
    }
    else if(num=='m'||num=='M'){
        if(data.size()==0){
            cout<<"Unable to calculate mean - no data"<<endl;
        }else{
//            double num_average{};  this method is also fine 
            int num_average{};
            for(auto num:data)
                num_average += num;
            cout<<"The mean is: "<< static_cast<double>(num_average)/data.size()<<endl;
        }
    }
    else if(num=='s'||num=='S'){
        if(data.size()==0){
            cout<<"---list is empty---"<<endl;
        }else{
            int num_smallest= data.at(0);
            for(auto num:data){
                if(num<num_smallest){
                    num_smallest= num;
                }
            }
            cout<<"the smallest number is :"<<num_smallest<<endl;
        }
    }else if(num=='l'||num=='L'){
        if(data.size()==0){
            cout<<"---list is empty---"<<endl;
        }else{
            int num_largest= data.at(0);
            for(auto num:data){
                if(num>num_largest){
                    num_largest= num;
                }
            }
            cout<<"the largest number is :"<<num_largest<<endl;
        }
    }else if(num=='q'||num=='Q'){
        cout<<"Goodbye...."<<endl; 
    }else{
        cout<<"choice is out of boundary \nenter valid choice"<<endl;
    }
    
    
    }while(num!='q' && num!='Q');
    
    
    
    return 0;

}








//    if(num=='Q'|| num=='q'){
//     cout<<"Goodbye...."<<endl;  
//    }else
    
    
//       data.push_back(num_list);
//           for(int i{1}; i<=num_list; i++){
//               if(num_list==0){
//                   cout<<"list is empty"<<endl;
//               }else{
//                   cout<<"[]"<<endl;
//               }
           //}
//           cout<<numList<<endl;