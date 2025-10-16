#include <iostream>
#include <string>
using namespace std;

class book {
	private:
		int book_id;
		string book_name;
		float book_price;
		float total_cost(int n) {
			return book_price *n;
		
		
		}


		public:

		void input_book_details() {

			cout << "enter the id of the book : " << endl;
			cin >> book_id;

			cout << "enter the name of the book : " << endl;
			cin >> book_name;

			cout << "enter price of the book : " << endl;
			cin >> book_price;

                  }

		void display_book_details() {

			cout << "BOOK ID : " << book_id << endl;
			cout << "BOOK NAME : " << book_name  << endl;
			cout << "BOOK PRICE : Rs." << book_price << endl;
		
		}

		void display_cost() {
			int copies;

			cout << "enter no.of copies : " << endl;
			cin >> copies;

			float total = total_cost(copies);
			cout << "Total cost" << total << endl;

		}


  };

int main() {

	book book1,book2,book3;

	cout << " enter details of book 1 : "<< endl;
	book1.input_book_details();
	cout <<"\n";

	cout << "enter details of book 2 : " << endl;
	book2.input_book_details();

	cout << "enter details of book 3 : " << endl;
	book3.input_book_details();

	cout <<"Book 1 : " << endl;
	book1.display_book_details();
	book1.display_cost();

	cout << "Book 2 : " << endl;
	book2.display_book_details();
	book2.display_cost();

	cout << "Book 3 : " << endl;
	book3.display_book_details();
	book3.display_cost();



}
