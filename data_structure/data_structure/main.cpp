#include <iostream>
#include "sorted.h"
#include "ItemType.h"

using namespace std;
int main()

{
	SortedType list1;
	int N;
	cout << "Input N: ";
	cin >> N;

	cout << "Input list Item: ";


	for (int i = 0; i < N; i++)
	{
		ItemType item;
		int value;

		cin >> value;
		item.Initialize(value);

		list1.InsertItem(item);
		//list1에 Item 삽입
	}
	cout << endl;

	while (1)
	{
		int X;
		cout << "Input X: ";
		cin >> X;
		if (X == 0)

		{
			//list1의 모든 요소 출력
			list1.ResetList();
			for (int i = 0; i < list1.LengthIs(); i++) {
				ItemType temp;
				list1.GetNextItem(temp);
				cout << temp.value << " ";
			}
			break;
		}

		int Y;
		cout << "Input Y: ";
		cin >> Y;

	   //list1에 X가 존재하는지 찾고 존재하면 Y로 바꾸기
	   
		bool search;
		ItemType search_X;
		search_X.Initialize(-1);

		list1.RetrieveItem(search_X, search);

		if (search_X.value == -1) {
			break;
		}
		else {

		}

	   //위 연산이 실행된 뒤 list1은 정렬된 상태여야 함
		cout << "Operation completed." << endl << endl;
	}
	return 0;
}