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
		//list1�� Item ����
	}
	cout << endl;

	while (1)
	{
		int X;
		cout << "Input X: ";
		cin >> X;
		if (X == 0)

		{
			//list1�� ��� ��� ���
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

	   //list1�� X�� �����ϴ��� ã�� �����ϸ� Y�� �ٲٱ�
	   
		bool search;
		ItemType search_X;
		search_X.Initialize(-1);

		list1.RetrieveItem(search_X, search);

		if (search_X.value == -1) {
			break;
		}
		else {

		}

	   //�� ������ ����� �� list1�� ���ĵ� ���¿��� ��
		cout << "Operation completed." << endl << endl;
	}
	return 0;
}