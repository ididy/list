#include<iostream>
#include "my_list.h"
using namespace std;


void print_list( List<int> &list )
{
	List<int>::iterator it = list.begin(  );
	for( ; it != list.end(  );it++ )
		cout<<( *it )<<' ';
}

int main(  )
{
	List<int> hello;
	hello.push_front( 1 );
	hello.push_back( 2 );
	hello.push_back( 3 );
	List<int>::iterator it = hello.begin(  );
//	it = hello.erase(++it);
	hello.insert( it, 4 );
	it++;
	hello.insert( it, 5 );
//	( *it ) = 99;  如果在class List<T>::iterator中的T opeator *(  )的T后面加&，
	//编译器会好不客气的修改私有数据;
	cout<<( *it )<<endl;
	cout<<hello.size(  )<<endl;

	print_list( hello );
	cout<<endl;

	List<int> hehe( hello );
	print_list( hehe );
	cout<<endl;
	List<int> haha = hehe;
	print_list( haha );
	return 0;
}

//好吧，每个函数都可以用了


