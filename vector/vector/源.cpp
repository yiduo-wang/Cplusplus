#include<vector>
#include<iostream>

using namespace std;
//template<class T>
//class vector
//{
//
//private:
//	T* _arr;
//	size_t _size;
//	size_t _capacity;
//};

//void test_vector1()
//{
//	std::vector<int> v;
//	v.push_back(1);
//	v.push_back(1);
//	v.push_back(1);
//	for (size_t i = 0; i < v.size(); ++i)
//	{
//		std::cout << v[i] << " ";
//	}
//	std::cout << std::endl;
//
//	std::vector<int>::iterator it1 = v.begin();//vector正向迭代器
//	while (it1 != v.end())
//	{
//		std::cout << *it1 << " ";
//		++it1;
//	}
//	std::cout << std::endl;
//}
//
//void test_vector2()
//{
//	std::vector<int> v;
//	v.push_back(1);
//	v.push_back(2);
//	v.push_back(3);
//	v.insert(v.begin(), 0);
//	for (auto e : v)
//	{
//		std::cout << e << " ";
//	}
//	std::cout << std::endl;
//
//	auto pos = std::find(v.begin(), v.end(), 2);//在2的前面插入20并删除2
//	if (pos != v.end())
//	{
//		v.insert(pos, 20);
//	}
//	pos = std::find(v.begin(), v.end(), 2);
//	v.erase(pos);
//	for (auto e : v)
//	{
//		std::cout << e << " ";
//	}
//	std::cout << std::endl;
//	v.clear();
//	{
//		std::vector<int> tmp;
//		tmp.swap(v);
//	}
//	std::cout << v.size() << std::endl;
//	std::cout << v.capacity() << std::endl;
//}
//
//int main()
//{
//	test_vector2();
//	system("pause");
//}

struct ListNode
{
	int val;
	struct ListNode* next;
	ListNode(int x) :
		val(x), next(NULL)
	{}
};

class Solution
{
public:
	ListNode* ReverseList(ListNode* pHead) {
		if (pHead == NULL || pHead->next == NULL)
			return pHead;
		stack<ListNode*>s;
		ListNode*p = pHead;
		while (p->next)
		{
			s.push(p);
			p = p->next;
		}
		ListNode*head = p;
		while (!s.empty())
		{
			p->next = s.top();
			p = p->next;
			s.pop();
		}
		p->next = NULL;
		return head;
	}
};

public class PalindromeList {
	public boolean chkPalindrome(ListNode A) {
		int size = 0;
		for (ListNode temp = A; temp != NULL; temp = temp.next)
			size++;
		int[] datas = new int[size];
		int i = 0;
		for (ListNode temp = A; temp != NULL; temp = temp.next)
			datas[i++] = temp.val;
		i = i - 1;
		int j = 0;
		for (j = 0, i = size - 1; j < i; j++, i--)
		{
			if (data[i] != datas[j])
				break;
		}
		if (i <= j)
			return true;
		return false;
	}
}