#include<iostream>
#include<math.h>

using namespace std;
float current_ac=100000;
float foreigner_ac=100000;
float freelancer_ac=55000;

//Function_Prototyping
void freelancer_transfer();
void freelancer_check_balance();
void freelancer_deposite();
void freelancer_withdraw();
void freelancer_main_menu();
void foreigner_transfer();
void foreigner_check_balance();
void foreigner_deposite();
void foreigner_withdraw();
void foreigner_main_menu();
void tansfer();
void check_balance();
void deposite();
void withdraw_current();
void current_main_menu();
void account_type();
void pin();

//Main of the program
int main() {
	
	//Welcome Note
	while (true) {
		cout << "\n--------------------------"
		     << "----------------------> "
		     << "WELCOME TO Owais PROJECT <---"
		     << "-----------------------------"
		     << "----------\n\n\n";
		
		//functions Calling
		pin();
		account_type();
	}
}

//TRANFER FROM FREELANCER ACCOUNT
void freelancer_transfer() {
	long int account;
	float per;
	cout<<"\t\t\t If your want to transfer monay from Pak we will charge you 3% :"<<endl;
	cout<<"\t\t\tEnter Account Number :";
	cin>>account;
	float amount;
	cout<<"\t\t\tHow much money do you want to transferr: ";
	cin>>amount;
	cout<<"\t\t\tBalance Transfered !"<<amount<<endl;
	per=amount/foreigner_ac*3;
	cout<<"\t\t\tYour tax amount is "<<per<<endl;
	freelancer_ac=freelancer_ac-amount-per;
	cout<<"\t\t\tNow your new balance in current account is: "<<freelancer_ac<<endl;
	cout<<endl;
	cout<<endl;
}

//CHECK BALANCE FROM FREELANCER ACCOUNT
void freelancer_check_balance() {
	cout<<"\t\t\tYour Available Balance is "<<freelancer_ac<<endl;
	cout<<endl;
	cout<<endl;
}

//DEPOSIT FROM FREELANCER ACCOUNT
void freelancer_deposite() {
	int amount;
	cout<<"\t\t\tEnter The Amount :";
	cin>>amount;
	freelancer_ac=freelancer_ac+amount;
	cout<<"\t\t\tYour New Amount is "<<freelancer_ac<<endl;
	cout<<endl;
	cout<<endl;
}

//WITDRAW FROM FREELANCER ACCOUNT
void freelancer_withdraw() {
	int withdrawl;
	float per;
	cout<<"\t\t\tPlease Enter withdrawl amount if you can withdraw the amount you will pay 3% tax ";
	cin>>withdrawl;
	if(withdrawl<freelancer_ac) {
		per=withdrawl/foreigner_ac*3;
		cout<<"\t\t\tYour tax amount is "<<per<<endl;
		cout<<"\t\t\tThankyour For Withdrawl "<<endl;
		freelancer_ac=freelancer_ac-withdrawl-per;

		cout<<"\t\t\tYour New Balance is Rs/"<<freelancer_ac<<endl;
	} else {
		cout<<"\t\t\tInsuficient Balance"<<endl;
	}
	cout<<endl;
	cout<<endl;
}

//MAIN MENU OF fREELANCER ACCOUNT
void freelancer_main_menu() {
	int choice;
	while(true) {
		cout<<"\t\t\t1) Withdrawl\t\t\t";
		cout<<"\t2) Deposit "<<endl;
		cout<<endl;
		cout<<"\t\t\t3) Check balance ";
		cout<<"\t\t\t4) Transfer "<<endl;
		cout<<endl;
		cout<<"\t\t\t\t\t\t5) Exit "<<endl;
		cin>>choice;
		system("CLS");
		switch(choice) {
			case 1:
				freelancer_withdraw();
				break;
			case 2:
				freelancer_deposite();
				break;
			case 3:
				freelancer_check_balance();
				break;
			case 4:
				freelancer_transfer();
				break;
			case 5:
				pin();
				account_type();
				break;
		}
	}
}

//TRANSFER FROM fOREIGNER ACCOUNT
void foreigner_transfer() {
	long int account;
	float per;
	cout<<"\t\t\t If your want to transfer monay from Pak we will charge you 3% :"<<endl;
	cout<<"\t\t\tEnter Account Number :";
	cin>>account;
	float amount;
	cout<<"\t\t\tHow much money do you want to transferr :";
	cin>>amount;
	cout<<"\t\t\tBalance Transfered !"<<amount<<endl;
	per=amount/foreigner_ac*3;
	cout<<"\t\t\tYour tax amount is "<<per<<endl;
	foreigner_ac=foreigner_ac-amount;
	cout<<"\t\t\tNow your new balance in current account is :"<<foreigner_ac<<endl;
	cout<<endl;
	cout<<endl;
}

//CHECK BALANCE FROM fOREIGNER ACCOUNT
void foreigner_check_balance() {
	cout<<"\t\t\tYour Available Balance is "<<foreigner_ac<<endl;
	cout<<endl;
	cout<<endl;
}
//DEPOSITE FROM fOREIGNER ACCOUNT
void foreigner_deposite() {
	int amount;
	cout<<"\t\t\tEnter The Amount :";
	cin>>amount;
	foreigner_ac=foreigner_ac+amount;
	cout<<"\t\t\tYour New Amount is :"<<foreigner_ac<<endl;
	cout<<endl;
	cout<<endl;
}

//WITDRAW FROM fOREIGNER ACCOUNT
void foreigner_withdraw() {
	float withdrawl;
	float per;
	cout<<"\t\t\tPlease Enter withdrawl amount if you can withdraw the amount you will pay 7% tax ";
	cin>>withdrawl;
	if(withdrawl<current_ac) {
		per=withdrawl/foreigner_ac*7;
		cout<<"\t\t\tYour tax amount is "<<per<<endl;

		cout<<"\t\t\tThankyour For Withdrawl "<<endl;
		foreigner_ac=foreigner_ac-withdrawl-per;

		cout<<"\t\t\tYour New Balance is Rs/"<<foreigner_ac<<endl;
	} else {
		cout<<"\t\t\tInsuficient Balance"<<endl;
	}
	cout<<endl;
	cout<<endl;
}

//MAIN MENU OF fOREIGNER ACCOUNT
void foreigner_main_menu() {
	int choice;
	while(true) {
		cout<<"\t\t\t1) Withdrawl\t\t\t";
		cout<<"\t2) Deposit "<<endl;
		cout<<endl;
		cout<<"\t\t\t3) Check balance ";
		cout<<"\t\t\t4) Transfer "<<endl;
		cout<<endl;
		cout<<"\t\t\t\t\t\t5) Exit "<<endl;
		cin>>choice;
		system("CLS");
		switch(choice) {
			case 1:
				foreigner_withdraw();
				break;
			case 2:
				foreigner_deposite();
				break;
			case 3:
				foreigner_check_balance();
				break;
			case 4:
				foreigner_transfer();
				break;
			case 5:
				pin();
				account_type();
				break;
		}
	}
}

//TRANSFER FROM CURRENT ACCOUNT
void tansfer() {
	long int account;
	cout<<"\t\t\tEnter Account Number :";
	cin>>account;
	int amount;
	cout<<"\t\t\tHow much money do you want to transferr: ";
	cin>>amount;
	cout<<"\t\t\tBalance Transfered !"<<amount<<endl;
	current_ac=current_ac-amount;
	cout<<"\t\t\tNow your new balance in current account is: "<<current_ac<<endl;
	cout<<endl;
	cout<<endl;
}

//CHECKBALANCE FROM CURRENT ACCOUNT
void check_balance() {
	cout<<"\t\t\tYour Available Balance is "<<current_ac<<endl;
	cout<<endl;
	cout<<endl;
}

//DEPOSIT FROM CURRENT ACCOUNT
void deposite() {
	int amount;
	cout<<"\t\t\tEnter The Amount :";
	cin>>amount;
	current_ac=current_ac+amount;
	cout<<"\t\t\tYour New Amount is :"<<current_ac<<endl;
	cout<<endl;
	cout<<endl;
}

// WITHDRAW FROM CURRENT ACCOUNT
void withdraw_current() {
	int withdrawl;
	cout<<"\t\t\tPlease Enter withdrawl amount ";
	cin>>withdrawl;
	if(withdrawl<current_ac) {
		cout<<"\t\t\tThankyour For Withdrawl "<<endl;
		current_ac=current_ac-withdrawl;

		cout<<"\t\t\tYour New Balance is Rs/"<<current_ac<<endl;
	} else {
		cout<<"\t\t\tInsuficient Balance! your account balance is :"<<current_ac<<endl;
	}
	cout<<endl;
	cout<<endl;
}

//CUURENT MAIN MENU
void current_main_menu() {
	int choice;
	while(true) {
		cout<<"\t\t\t1) Withdrawl\t\t\t";
		cout<<"\t2) Deposit "<<endl;
		cout<<endl;
		cout<<"\t\t\t3) Check balance ";
		cout<<"\t\t\t4) Transfer "<<endl;
		cout<<endl;
		cout<<"\t\t\t\t\t\t5) Exit "<<endl;
		cin>>choice;
		system("CLS");
		//SWITCH FOR MENU
		switch(choice) {
			case 1:
				withdraw_current();
				break;
			case 2:
				deposite();
				break;
			case 3:
				check_balance();
				break;
			case 4:
				tansfer();
				break;
			case 5:
				pin();
				account_type();
				break;
		}
	}
}

//ACCOUNT TYPE FUNCTION
void account_type() {
	int choice;
	cout<<"\t\t\t1) Current account ";
	cout<<"\t\t\t2) Foreigner account \n";
	cout<<"\n\t\t\t\t\t3) Freelancer account :";
	cin>>choice;
	system("CLS");
	switch(choice) {
		case 1:
			current_main_menu();
			break;

		case 2:
			foreigner_main_menu();
			break;

		case 3:
			freelancer_main_menu();
			break;
	}
}

//PIN FUNCTION
void pin() {
	back:
	int pin;
	const int correctPin=2556;
	int attempts ;
    int maxAttempts = 3;
	
	while(attempts < maxAttempts)
	{
		cout<<"\t\t\t\t\tEnter your PIN : ";
		cin>>pin;
		
		if(pin==correctPin)
		{
			cout<<"\n\t\t\t\t\tWElcome To Your Account \n";
			cout<<endl;
			cout<<endl;
			
			break;
		}
	else {
            cout << "\n\t\t\t\t\tIncorrect PIN. Attempts left: " << maxAttempts - attempts - 1 << endl;
            attempts++;
            cout<<endl;
			cout<<endl;            
			if(attempts == maxAttempts)
			{
				cout<<"\n\t\t\t\t\tToo many incorrect attempts. Your account is blocked.\n"<<endl;
			}
			goto back;
		}
			
	}
	goto back;
system("CLS");	
}