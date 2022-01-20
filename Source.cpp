
//required for using cout to display output
#include <iostream>
#include <sstream>

//lets us use cout intead of having to do std::cout
using namespace std;

//lets us use string normally instead of having to preface every variable
using std::string;

string isPrivate(int feed) {
	if (feed == 0) {
		return "private";
	}
	else if (feed == 1) {
		return "public";
	}
	else {
		return "undefined";
	}
}

string isVerified(bool verified) {
	if (verified) {
		return "verified";
	}
	else {
		return "unverified";
	}
}

string getUser(int uid) {
	string result;
	switch (uid) {
	case 1: result = "Joe";
		break;
	case 2: result = "Jack";
		break;
	case 3: result = "jill";
		break;
	default: result = "undefined";
	}
	return result;
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
	
	cout << "The post for the user " << getUser(stoi(posts[1][0])) << " is " << "\"" << posts[0][0] << "\"" << " and the post is type is " << isPrivate(stoi(posts[2][0])) << ".\n";

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
	cout << "first_user_ptr: " << first_user_ptr << "\n";
	cout << "first_user_ptr addding one: " << first_user_ptr + 1 << "\n";
	cout << "first_user_ptr addding one while dereferencing: " << *(first_user_ptr + 1) << "\n";

	//demonstrating that strings in c++ are treated like arrays
	string timeline = "Feed";
	string feedone = timeline + " public";
	string feedtwo = timeline + " private";
	
	cout << timeline << "\n";
	cout << "First feed in timeline: " << feedone << "\n";
	cout << "Second feed in timeline: " << feedtwo << "\n";

	//performs string comparison based on ASCII table
	if (feedtwo > feedone) {
		cout << feedtwo << " is greater than " << feedone << " in ASCII\n";
	}

	//declare a structure that represents a single user
	struct User {
		string fname;
		string lname;
		int uid;
		bool verified;
		string email;
	}; // semicolon required
	
	//create an example of a user, where each field has a value
	User user1 = { "Joe", "Mama", 1, false, "joemama@gmail.com" };

	cout << user1.fname << "'s account is " << isVerified(user1.verified) << "\n";
	cout << "\n##########VERIFYING USER###########\n";
	user1.verified = true;
	cout << user1.fname << "'s account is " << isVerified(user1.verified) << "\n";
}

