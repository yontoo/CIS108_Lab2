#include "pch.h"
#include <iostream>
#include <string>


using namespace std;

int main()
{
	string title, author;
	int publish_year, page_numbers;
	constexpr int current_year = 2019;

	cout << "Please enter the name of your favorite book: " << endl;
	getline (cin, title);

	cout << "Please enter the name of the author: " << endl;	
	getline (cin, author);

	cout << "Please enter the year it was published: " << endl;
	cin >> publish_year;

	cout << "Please enter the amount of pages this book contains: " << endl;
	cin >> page_numbers;

	int book_age = current_year - publish_year;

	if (book_age < 10)
		cout << "This book is younger than 10 years old!" << endl;
	else
		cout << "This book is at least 10 years old!" << endl;

	if (page_numbers < 100)
		cout << "This book is a short book." << endl;
	else if (page_numbers >= 100 && page_numbers <= 300)
		cout << "This book is an average book." << endl;
	else
		cout << "This book is a long book.";




	return 0;
}
