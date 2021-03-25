#include<iostream>
#include<string>
using namespace std;

int main(){
	//1.a pointer to a character.
	char ch = 'a';
	char *ch1 = &ch;

	//2.an array of 10 integers.
	int a[] = {1,2,3,4,5,6,7,8,9,10};

	//3.a reference to an array of 10 integers.
	int(&a1)[10] = a;

	//4.a reference to an array of character strings.
	string b[10] = {
	"abc",
	"cde",
	"efg"
	};
	string(&b1)[10] = b;

	//5..a pointer to a pointer to a character.
	char **ch2 = &ch1;

	//6.a constant integer.
	const int c = 1;

	//7.a pointer to a constant integer.
	const int *c1 = &c;

	//8.a constant pointer to an integer.
	int d = 2;
	int * const c2 = &d;

	return 0;
}
