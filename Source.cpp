
//required for using cout to display output
#include <iostream>
#include <sstream>

//lets us use cout intead of having to do std::cout
using namespace std;

string isPrivate(int num) {
	if (num == 0) {
		return "private";
	}
	else if (num == 1) {
		return "public";
	}
	else {
		return "undefined";
	}
}

int main() {


	//declare an empty 2-d array, save them as a string that has three columns and 5 rows
	string posts[3][1];
	//filling in posts

	//first row first column
	//first column is for post content
	posts[0][0] = "Going to the gym today";
	//second column first row
	//second column is poster (uid)
	posts[1][0] = "1";
	//third column first row
	//third column is feed, feed one (public) or feed two (private)
	posts[2][0] = "0";
	
	cout << "The post for userID " << posts[1][0] << " is " << "\"" << posts[0][0] << "\"" << " and the post is type is " << isPrivate(stoi(posts[2][0])) << "\n";

	//learning nested arrays
	string users[] = { "1","2","3" };
	//create a pointer equal to the users array (NOT using & operator)
	string* users_ptr = users;
	//create a pointer equal to the address of the first element of the array
	string* first_user_ptr = &users[0];
	//print out each variable, demonstrating that they all point to the same memory location --- should have same result
	cout << "Printing users array: " << users << "\n";
	cout << "Printing users pointer: " << users_ptr << "\n";
	cout << "Printing first_user_ptr: " << first_user_ptr << "\n";

	//dereference pointers
	cout << "Dereference users array: " << *users << "\n";
	cout << "Dereference users pointer: " << *users_ptr << "\n";
	cout << "Dereference first_user_ptr: " << *first_user_ptr << "\n";

	//use each  of the variables as an array
	cout << "Printing 1st users array element: " << users[1] << "\n";
	cout << "Using users_ptr as array: " << users_ptr[1] << "\n";
	cout << "Using first_user_ptr as array: " << first_user_ptr[1] << "\n";
	//memory location would be increased
	cout << "first_user_ptr addding one: " << first_user_ptr << "\n";
	cout << "first_user_ptr addding one: " << first_user_ptr + 1 << "\n";
	cout << "first_user_ptr addding one: " << *(first_user_ptr + 1) << "\n";
}

