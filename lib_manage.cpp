#include <iostream>
#include <string>
#define max 100
int arr[max];
class Library{
public:
 int choice;
 std::string reg_id, password;
 std::vector<std::string>book_name;
 std::vector<std::string>author;
 std::vector<std::string>date_of_issue;



 Library(int choice, std::string reg_id, std::string password) {
    this->choice = choice;
    this->reg_id = reg_id;
    this->password = password;
	//intitial sample for book list
	book_name={"harry potter","Pride and Prejudice ","Moby-Dick ","	To Kill a Mockingbird "};
	author={"jk rolling","Jane Austen","Herman Melville","Harper Lee"};
	
 }

 void login() {
    std::cout << "---------- Welcome to Library ---------" << std::endl;

    while (true) {
        std::cout << "Enter the registration ID: ";
        std::cin >> reg_id;
        std::cout << "Enter the password: ";
        std::cin >> password;

        if (!reg_id.empty() && !password.empty()) {
            std::cout << "Login successful!" << std::endl;
            break;
        } else {
            std::cout << "Invalid credentials. Please try again." << std::endl;
        }}
    }
	void choices(){
		do{
		std::cout<<"1.Enter the book name :";
		std::cout<<"2.:Enter the author :";
		std::cout<<"3.Enter the  date of issue:";
		std::cout<<"4.exit";
		std::cout<<"Enter your choices :";
		std::cin>>choice;
		switch (choice)
		{
		case 1:
		std::cout<<"enter the book name :";
		search_book();
		break;
		case 2:
		std::cout<<"enter the author :";
		author_name();
		break;
		case 4:
		std::cout<<"enter the date of issue :";
		date_of_book();
		break;

		
		default:
		std::cout<<"enter the proper choice :";
			break;
		}}while(choice=!4);

		

	}
	void search_book(){
		std::string search_book;
		std::cout<<"enter the book name :";
		std::cin.ignore();
		std::getline(std::cin,search_book);
		bool found=false;
		for (int i = 0; i < book_name.size(); i++)
		{
			if(book_name[i]==search_book){
				found=true;
				std::cout<<"book found "<<std::endl;
			}
		}
		if(!found){
		std::cout<<"book not found !"<<std::endl;}
		

	}
	void author_name(){
		std::string search_author;
		std::cout<<"enter author name :";
		std::getline(std::cin,author_name);
		bool found=false;
        for(int i=0;i<author.size();i++){
            if(author[i]==search_author){
				found=true;
				std::cout<<"The book of author"<<search_author<<"is found"<<std::endl;
			}
		}
		if (!found)
		{
			std::cout<<"the book of author "<<search_author<<"is not found"<<std::endl;
		}
		

	}
	void date_of_book(){};
 
};
class librarian: public Library{
	public:
	int add_book;
	int book_given;
	int modify_the_book;
	void option(){

	}
};

int main() {
    Library lib(0, "demo", "1234");
    lib.login();
    return 0;
}
