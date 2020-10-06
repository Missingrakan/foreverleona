#define _CRT_SECURE_NO_WARNINGS 1

//#include "Bintree.h"
//#include "slist.h"
#include "sclist.h"
//#include "seqlist.h"

int main()
{
	SCList mylist;
	SCListInit(&mylist);

	int pos;
	int select = -1;
	DataType item, key;
	DataType ret;
	bool flag;
	while (select)
	{
		printf("*****************************************\n");
		printf("* [1] push_back         [2] push_front  *\n");
		printf("* [3] show_list         [0] quit_system *\n");
		printf("* [4] pop_back          [5] pop_front   *\n");
		printf("* [6] insert_pos        [7] insert_val  *\n");
		printf("* [8] delete_pos        [9] delete_val  *\n");
		printf("* [10] find_pos         [11] find_val   *\n");
		printf("* [12] sort             [13] reverse    *\n");
		printf("* [14] length           [15] clear      *\n");
		printf("* [16] modify_pos       [17] modify_val *\n");
		printf("* [18] capacity                         *\n");
		printf("*****************************************\n");
		printf("��ѡ��:>");
		scanf("%d", &select);
		if (select == 0)
			break;
		switch (select)
		{
		case 1:
			printf("������Ҫ���������<-1����>:>");
			while (scanf("%d", &item), item != -1)
			{
				SCListPushBack(&mylist, item);
			}
			SCListShow(&mylist);
			break;
			case 2:
			printf("������Ҫ���������<-1����>:>");
			while (scanf("%d", &item), item != -1)
			{
				SCListPushFront(&mylist, item);
			}
			SCListShow(&mylist);
			break;
		case 3:
			SCListShow(&mylist);
			break;
		case 4:
			SCListPopBack(&mylist);
			break;
		case 5:
			SCListPopFront(&mylist);
			break;
		case 6:
			printf("������Ҫ�����λ��:>");
			scanf("%d", &pos);
			printf("������Ҫ���������:>");
			scanf("%d", &item);
			//SListInsertByPos(&mylist, pos, item);
			SCListShow(&mylist);
			break;
		case 7:
			printf("������Ҫ���������:>");
			scanf("%d", &item);
			//SCListInsertByVal(&mylist, item);
			SCListShow(&mylist);
			break;
		case 8:
			printf("������Ҫɾ����λ��:>");
			scanf("%d", &pos);
			//SListDeleteByPos(&mylist, pos);
			SCListShow(&mylist);
			break;
		case 9:
			printf("������Ҫɾ��������:>");
			scanf("%d", &key);
			SCListDeleteByVal(&mylist, key);
			SCListShow(&mylist);
			break;
		case 10:
			printf("������Ҫ���ҵ�λ��:>");
			scanf("%d", &pos);
			//flag = SListFindByPos(&mylist, pos, &ret); //true false
			if (flag)
				printf("���ҵ�����Ϊ:> %d\n", ret);
			else
				printf("���ҵ����ݲ�����.\n");
			break;
		case 11:
			printf("������Ҫ���ҵ�ֵ:>");
			scanf("%d", &key);
			pos = SCListFindByVal(&mylist, key);
			if (pos == -1)
				printf("���ҵ����ݲ�����.\n");
			else
				printf("�������ڵ��±�Ϊ:> %d\n", pos);
			break;
		case 12:
			//SCListSort(&mylist);
			break;
		case 13:
			SCListReverse(&mylist);
			break;
		case 14:
			printf("SeqList Length = %d\n", SCListLength(&mylist));
			break;
		case 15:
			SCListClear(&mylist);
			break;
		case 18:
			//printf("capacity = %d\n", SeqListCapacity(&mylist));
			break;
		default:
			printf("�����������������......\n");
			break;
		}
		system("pause");
		system("cls");
	}

	SCListDestroy(&mylist);
	return 0;
}

//int main()
//{
//	char *str = "ABC##DE##F##G#H##";
//	char *str1 = "ABC##D#F##GE##H##";
//	int n = 0;
//	int i = 0, j = 0;
//	BinTree bt,bt1;
//	BinTreeInit(&bt);
//	BinTreeInit(&bt1);
//	//BinTreeCreate(&bt);
//	BinTreeCreateByStr(&bt, str, &i);
//	BinTreeCreateByStr(&bt1, str1, &j);
//	
//	printf("VLR    :");
//	PreOrder(&bt);
//	printf("\n");
//	printf("LVR    :");
//	InOrder(&bt);
//	printf("\n"); 
//	printf("LRV    :");
//	PostOrder(&bt);
//	printf("\n");
//
//	printf("Size = %d\n", Size(&bt));
//	printf("Height = %d\n", Height(&bt));
//
//	BinTreeNode *p = Find(&bt, 'B');
//	p = Parent(&bt, 'H');
//
//	bool flag = Equal(&bt, &bt1);
//
//	return 0;
//}