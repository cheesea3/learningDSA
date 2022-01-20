
//required for using cout to display output
#include <iostream>

//lets us use cout intead of having to do std::cout
using namespace std;

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
	posts[2][0] = "2";


	cout << "The post for userID " << posts[1][0] << " is " << "\"" << posts[0][0] << "\"" << " and the post is type is " << posts[2][0] << "\n";



}