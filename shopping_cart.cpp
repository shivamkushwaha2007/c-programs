// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main(){
    // Write C++ code here
    cout<<"welcome!!"<<endl;
    cout<<"sir!how can i help you?"<<endl;
    
    cout << "Do you want to buy something? (y/n): ";
    char c;
    cin >> c;

    bool wantsToBuy = (c == 'y' || c == 'Y');
    string clothes[]={"shirt","pant","t-shirt","lower", "shoes", "slippers"};
    int clothesprice[]={500,1000,300,300,1000,200};
    int sizeclothes = 6;
    string fruit_and_vegetable[]={"Apple", "Banana", "Mango", "potato", "Tomato", "pumpkin"};
    int fruit_and_vegetableprice[]={20,10,10,10,10,40};
    int sizefruit_and_vegetable=6;
    string daily_used_grocery[]={"Biscuit", "bread","paneer", "Butter", "poha", "rice","soap","shampoo", "hair oil"};
    int daily_used_groceryprice[]={10,20,100,50,40,30,20,10,50};
    int sizedaily_used_grocery=9;
    string chosenItems=" ";
    double totalBill = 0.0;
    
    if(wantsToBuy){
        cout << "Yes, I will buy something." << endl;
        cout<<"each section is devide, and you can choose according to your needs."<<endl;
        string sections[]={"clothes","fruit and vegetable", "daily used grocery"};
        int sizesections=3;
        int sectionchoice;
        int itemchoice;
        while(true) {
           //show section
            cout<<"\n section available:"<<endl;
            for(int i=0;i<sizesections    ;i++){
               cout<<i+1<<". "<<sections[i]<<endl;
            }
            cout<<"0.Finish shoping "<<endl;
            cout<<"choose a section number(0 or finish):";
            cin>>sectionchoice;
        
            if(sectionchoice==0){
               break;
            }
        
            if(sectionchoice<1|| sectionchoice > sizesections){
               cout<<"Invalid section choice, please try again."<<endl;
               continue;
            }
            if(sectionchoice==1){
                cout<<"!! Clothes section !!"<<endl;
                for(int i=0;i<sizeclothes;i++){
                   cout<<i+1<<". "<<clothes[i]<<"_Rs."<<clothesprice[i]<<endl;
                }
                while(true){
                   cout<<"choose Items number from clothes(0 to stop choose)";
                   cin>>itemchoice;
                   if(itemchoice==0){
                       break;
                   } else{
                       chosenItems +=clothes[itemchoice-1];
                    totalBill+=clothesprizce[itemchoice-1] ;
                    cout<<clothes[itemchoice-1]<<" added to cart. "<<endl;
                   }
                }
            }
        
        
            if(sectionchoice==2){
                cout<<"!! fruit_and_vegetable!!"<<endl;
                for(int i=0;i<sizefruit_and_vegetable;i++){
                   cout<<i+1<<". "   <<fruit_and_vegetable[i]<<"_Rs."   <<fruit_and_vegetableprice[i]<<endl;
                }
                while(true){
                    cout<<"choose item  number from  fruit_and_vegetable(0 to stop choosen)";
                   cin>>itemchoice;
                   if(itemchoice==0){
                       break;
                    } else{
                       chosenItems += fruit_and_vegetable[itemchoice-1];
                       totalBill+=fruit_and_vegetableprice[itemchoice-1];
                    cout<<fruit_and_vegetable[itemchoice-1]<<" added to cart. "<<endl;
                   }
                }
            }
        
            if(sectionchoice==3){
                cout<<"!!daily_used_grocery!!"<<endl;
                for(int i=0;i<sizedaily_used_grocery;i++){
                   cout<<i+1<<". "<<daily_used_grocery[i]<<"_Rs."<<daily_used_groceryprize[i]<<endl;
                }
                while(true){
                   cout<<"choose item number from daily_used_grocery(0 to stop choosen)";
                   cin>>itemchoice;
                   if(itemchoice==0){
                       break;
                   } else{
                       chosenItems+=daily_used_grocery[itemchoice-1];
                         totalBill+=daily_used_groceryprize[itemchoice-1];
                    cout<<daily_used_grocery[itemchoice-1]<<" added to cart. "<<endl;
                   }
                }
            }
        }    
        if(chosenItems.empty()){
               cout<<"\n you did not select any items."<<endl;
        } else{
            //remove traveling comma and space
            chosenItems = chosenItems.substr(0,chosenItems.length());
            cout<<"\n you have chosen: "<<chosenItems<<endl;
            cout<<"your total bill is: Rs."<<totalBill<<endl;
            
        
        }   
    } 
    
    else{
       cout << "I don't wish to buy anything; I just came to the mall to look around." << endl;
    }
    return 0;
}