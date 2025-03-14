#include<iostream>
#include<string>
using namespace std;

int main(){
	//intializing the variables:
	system("color f4");
	int quant;
	int choice;
	string yesreply="yes";
	string noreply="no";
	string userreply;
	//quantity we have  of items:
	int Qrooms=0, Qpasta, Qmomos=0, Qpizza=0, Qchiken, Qaloo, Qchanna, Qsweet;
	
	//quantity of reserved rooms and sold items:
	int Srooms=0, Spasta=0, Smomos=0, Spizza=0, Schicken=0, Saloo=0, Schanna=0, Ssweet=0;
	
	//Total price of each item:
	int Price_rooms=0, Price_pasta=0, Price_momos=0, Price_pizza=0, Price_chiken=0,Price_aloo=0, Price_channa=0, Price_sweet=0;
	
	//FOR MANAGMENT USE HOW MUCH ITEMS THEY HAVE?
	cout<<"\t\t  HOTEL MANAGMENT"<<endl;
	cout<<"\t\t ""welocome to our HOTEL"" "<<endl;
	cout<<"\n\t\t Quantity  of items we have: "<<endl;
	cout<<"\t\t FOR MANAGMENT USE ONLY"<<endl;
	cout<<"===================================================================================================================="<<endl;
	cout<<"\n Availible rooms we have:";
	cin>>Qrooms;
	
	cout<<"\n Quantity of pasta we have:  ";
	cin>>Qpasta;
	
	cout<<"\n Quantity  of momos plates we have: ";
	cin>>Qmomos;
	
	cout<<"\n Quantity of  pizza we have: ";
	cin>>Qpizza;
		
	cout<<"\n Quantity of Chiken-Roll we have:";
	cin>>Qchiken;
	
	cout<<"\n Quantity of Aaloo parathas we have:";
	cin>>Qaloo;
	
	cout<<"\n Quantity of Channa chat plates we have:";
	cin>>Qchanna;
	
	cout<<"\n Quantity of Sweet potato salad plates we have:";
	cin>>Qsweet;

    //MENU OF ITEMS AVAILIBE FOR CUSTMOR:
	cout<<"===================================================================================================================="<<endl;
	m:
	cout<<"\n\t\tPLEASE SELECT WHAT DO YOU WANT ";
	cout<<"\n\t\tHERE IS THE MENU   ";
    cout<<"\n\n1=ROOMS";
    cout<<"\n2=PASTA";
    cout<<"\n3=MOMOS";
    cout<<"\n4=PIZZA";
    cout<<"\n5=CHIKEN-ROLL";
    cout<<"\n6=AALOO PARATHAS";
    cout<<"\n7=CHANNA CHAT ";
    cout<<"\n8=SWEET POTATO SALAD ";
    cout<<"\n9=IF YOU ARE HAVING TROUBLE TO SELECT FROM THE MENU I CAN SUGGEST YOU ";
    cout<<"\n================================================================================================================="<<endl;
    cout<<"\t\tFOR OWNER USE  ONLY"<<endl;
    cout<<"\n10=INFORMATION REGARDING SALES AND COLLECTION";
    cout<<"\n****************************************************************************************************************"<<endl;
    cout<<"\n11= EXIT";
    
    //CHOICE FOR CUSTMOR:
    cout<<"\n\n\t\t PLEASE ENTER YOUR CHOICE ";
	cin>>choice;
	
	
	//USING SWITCH STATEMENT TO SWITCH THE CHOICE
	switch(choice){
		case 1:
			cout<<"\n\n Enter the number of rooms you want: ";
			cin>>quant;
			
			//USING  IF ELSE STATMENT FOR CONDITIONS
			if(Qrooms-Srooms>=quant){
			 	
			Srooms=Srooms+quant;
			Price_rooms=Price_rooms+quant*2000;
			cout<<"\n\n\t\t"<<quant<<" rooms have  been alloted to  you ";
			 }
			 
			else
			cout<<"\n\t Only "<<Qrooms-Srooms<<" Rooms remaining in hotel ";
			break;
			 
			 
			 
		case 2:
			cout<<"\n\n How many pasatas you want: ";
			cin>>quant;
			
			if(Qpasta-Spasta>=quant){
			 	
			Spasta=Spasta+quant;
			Price_pasta=Price_pasta+quant*450;
			cout<<"\n\n\t\t"<<quant<<" Pasta is the order ";
			 }
			 
			else
			cout<<"\n\t Only "<<Qpasta-Spasta<<" Pasta remaining in hotel ";
			break;
			 
			 

         	case 3:
			cout<<"\n\n How many plates of momos you want: ";
			cin>>quant;
			
			if(Qmomos-Smomos>=quant){
			 	
			Smomos=Smomos+quant;
			Price_momos=Price_momos+quant*200;
			cout<<"\n\n\t\t"<<quant<<" plates of momos is the order ";
			 }
			 
			else
			cout<<"\n\t Only "<<Qmomos-Smomos<<" plates of momos remaining in hotel ";
			break;
	 
            case 4:
			cout<<"\n\n How many Pizza  you want: ";
			cin>>quant;
			
			if(Qpizza-Spizza>=quant){
			 	
			Spizza=Spizza+quant;
			Price_pizza=Price_pizza+quant*1000;
			cout<<"\n\n\t\t"<<quant<<" Pizza is the order ";
			 }
			 
			else
			cout<<"\n\t Only "<<Qpizza-Spizza<<" Pizza remaining in hotel ";
			break;


            case 5:
			cout<<"\n\n How Many Chiken-Roll You Want: ";
			cin>>quant;
			
			if(Qchiken- Schicken>=quant){
			 	
			 Schicken= Schicken+quant;
			Price_chiken=Price_chiken+quant*350;
			cout<<"\n\n\t\t"<<quant<<" Chiken-Roll is the order ";
			 }
			 
			else
			cout<<"\n\t Only "<<Qchiken- Schicken<<" Chiken-Roll remaining in hotel ";
			break;
			
		    case 6:
		    cout<<"\n\n How many Aaloo parathas you want: ";
			cin>>quant;
			
			if(Qaloo-Saloo>=quant){
			 	
			Saloo=Saloo+quant;
			Price_aloo=Price_aloo+quant*90;
			cout<<"\n\n\t\t"<<quant<<" Aaloo Parathas is the order ";
			 
		}
			else
			cout<<"\n\t Only "<<Qaloo-Saloo<<" Aaloo Parathas remaining in hotel ";
			break;
				
				
				
			case 7:
			cout<<"\n\n How many channa chat plates  you want: ";
			cin>>quant;
			
			if(Qchanna-Schanna>=quant){
			 	
			Schanna=Schanna+quant;
			Price_channa=Price_channa+quant*220;
			cout<<"\n\n\t\t"<<quant<<" channa chart plates is the order ";
			 }
			 
			else
			cout<<"\n\t Only "<<Qchanna-Schanna<<" CHANNA CHART PLATES remaining in hotel ";
			break;
			
	        case 8:
	        cout<<"How many sweet potato salad you want: ";
			cin>>quant;
			
			if(Qsweet-Ssweet>=quant){
						 	
			Ssweet=Ssweet+quant;
			Price_sweet=Price_sweet+quant*450;
			cout<<"\n\n\t\t"<<quant<<" sweet potato salad plates is the order ";	
			}	
            else
            cout<<"\n\t Only "<<Qsweet- Ssweet<<" Sweet potato salad remaining in hotel ";
            break;
            
            case 9:
            cout<<"IS YOUR FAVORATE FOOD FAST FOOD? ";
			cin>>userreply;
			cout<<"IS YOUR WEIGHT more than 65 KG?  ";
			cin>>userreply;
			
			if(userreply==yesreply){
				cout<<"IN NON-VEG WE HAVE CHIKEN ROLL,PIZZA AND SOME OTHER ITEM TOO"<<endl;
			}
			
			else if(userreply==noreply){
				cout<<"NOW TELL ME ARE YOU A VEGETARIAN?";
				cin>>userreply;
				
				if(userreply==yesreply){
					cout<<"IN VEG FOOD WE HAVE AALOO PARATHAS ,CHANNA CHART AND OTHER ITEMS TOO"<<endl;
					
			}
			
			else if(userreply==noreply) {
			cout<<"OUR CHIKEN ROLL AND PIZZA ARE BEST FOR YOUR HEALTH THEN";
	        }
	    }
			break;	
            
            
            case 10:
            cout<<"\n^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^";	
            cout<<"\n\t\tDetails of sales and collection";
			cout<<"\n\n Number of rooms we had : "<<Qrooms;
			cout<<"\n\n Number of rooms we gave : "<<Srooms;
			cout<<"\n\n Remaining rooms we have : "<<Qrooms-Srooms;
			cout<<"\n\n Total room collection for the day : "<<Price_rooms;
			
			cout<<"\n^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^";		
            cout<<"\n\n Number of pastas we had : "<<Qpasta;
			cout<<"\n\n Number of pastas we sold : "<<Spasta;
			cout<<"\n\n Remaining pastas we have : "<<Qpasta-Spasta;
			cout<<"\n\n Total pasta collection for the day : "<<Price_pasta;
			
			cout<<"\n^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^";	
			 cout<<"\n\n Number of momos plates we had : "<<Qmomos;
			cout<<"\n\n Number of momos plates we sold : "<<Smomos;
			cout<<"\n\n Remaining momos plates we have : "<<Qmomos-Smomos;
			cout<<"\n\n Total momos collection for the day : "<<Price_momos;
			
			cout<<"\n^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^";	
			 cout<<"\n\n Number of pizza we had : "<<Qpizza;
			cout<<"\n\n Number of pizza we sold : "<<Spizza;
			cout<<"\n\n Remaining pizza we have : "<<Qpizza-Spizza;
			cout<<"\n\n Total pizza collection for the day : "<<Price_pizza;
			
			cout<<"\n^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^";	
			 cout<<"\n\n Number of Chiken-Roll we had : "<<Qchiken;
			cout<<"\n\n Number of Chiken-Roll we sold : "<<Schicken;
			cout<<"\n\n Remaining Chiken-Roll we have : "<<Qchiken-Schicken;
			cout<<"\n\n Total Chiken-Roll collection for the day : "<<Price_chiken;	
			
			cout<<"\n^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^";	
			cout<<"\n\n Number of aaloo parathas we had : "<<Qaloo;
			cout<<"\n\n Number of aaloo parathas we sold : "<<Saloo;
			cout<<"\n\n Remaining aaloo parathas we have : "<<Qaloo-Saloo;
			cout<<"\n\n Total aaloo parathas collection for the day : "<<Price_aloo;
			
			cout<<"\n^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^";
			
			
			cout<<"\n^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^";	
			cout<<"\n\n Number of Channa chart plates we had : "<<Qchanna;
			cout<<"\n\n Number of Channa chart plates we sold : "<<Schanna;
			cout<<"\n\n Remaining Channa chart plates we have : "<<Qchanna-Schanna;
			cout<<"\n\n Total Channa chart collection for the day : "<<Price_channa;
			
			cout<<"\n^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^";
				
			cout<<"\n^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^";	
			cout<<"\n\n Number of Sweet potato salad plates we had : "<<Qsweet;
			cout<<"\n\n Number of Sweet potato salad plates we sold : "<<Ssweet;
			cout<<"\n\n Remaining Sweet potato salad plates we have : "<<Qsweet-Ssweet;
			cout<<"\n\n Total Sweet potato salad collection for the day : "<<Price_sweet;
			
			cout<<"\n^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^";
				
			case 11:
				exit(0);
				
				default:
					cout<<"\n Please select the numbers mentioned above !";

}
//USING GOTO STATMENT FOR CUSTMOR IF HE WANTS TO ENTER MULTIPLE CHOICES
goto m;



}
