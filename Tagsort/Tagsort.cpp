#include <iostream>

using namespace std;
// C++ program 
// Perform Tag Sort 
class MySort
{
	public:
		//This function are sorting tag element based on given collection element
		//This is not modify the element of actual collection
		void tag_sort(int collection[], int tag[], int size)
		{
			//Loop controlling variables
			int i = 0;
			int j = 0;
			//used to swap tag value
			int temp = 0;
			for (i = 0; i < size; i++)
			{
				for (j = i + 1; j < size; j++)
				{
					if (collection[tag[i]] > collection[tag[j]])
					{
						//When need to swap the value of tag element
						temp = tag[i];
						tag[i] = tag[j];
						tag[j] = temp;
					}
				}
			}
		}
	//print the collection elements using tag key
	void display(int collection[], int tag[], int size)
	{
		int i = 0;
		for (i = 0; i < size; i++)
		{
			cout << "  " << collection[tag[i]];
		}
	}
};
int main()
{
	MySort obj = MySort();
	int collection[] = {
		3 , 7 , 19 , 2 , 4 , 18 , 1 , 2 , 0 , -2 , 5
	};
	//Get the size of collection
	int size = sizeof(collection) / sizeof(collection[0]);
	int tag[size];
	int i = 0;
	//Set index of tag element
	for (i = 0; i < size; ++i)
	{
		tag[i] = i;
	}
	cout << " Before Sort";
	obj.display(collection, tag, size);
	obj.tag_sort(collection, tag, size);
	cout << "\n Tag Sort";
	obj.display(collection, tag, size);
	return 0;
}