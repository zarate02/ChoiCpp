// HelloCpp.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"
#include <iostream>

int _tmain(int argc, _TCHAR* argv[])
{
	//C��Ÿ��
	printf("Hello, World\n");	
	
	//C++��Ÿ��
	std::cout << "Hello, World" << std::endl;	

	//std : ���ӽ����̽�
	//:: : ��������������

	// dir > result.txt : �����̷�Ʈ
	// dir >> result.txt : Append




	//���� �� ����
	int a = 10;	//c ��Ÿ��

	int b(10);	//c++ ��Ÿ��
	auto c(b);	//���� ���� ��ó��
	
	/*
		�ʳ� ����
		void(*pfTest)(int, char*) = TestFunc;
		auto pfTest2(TestFunc);
	*/

	int(10);	//������ ���ó����




	//C��� �޸� �����Ҵ�/����

	/*
		malloc();	<-	size_t �� ������ ��, ���ɺоߴ� ũ��, �뵵 ��������
		free();

		������ : �ְ���, ũ�⸸ ���� ���뵵�� �������� �ñ�

		�������� ���� == ������ġ�� ����

		OS�� �޶����� DOS -> ����OS ��ȣ��� (���� ���ý��� : �������, Ŀ�θ�尡 ����)

		�޸� -> ����޸� : ���°��� ����°��� �ƴϴ�.
		: �̹� �ִ� �Ϳ��� ����㰡�� �޴´� '�Ӵ�'

		OS�� �޸�����, �Ҵ��� ������ ���ɼ��� �پ��
	*/


	int *pnData = (int*)malloc(sizeof(int)); //C��Ÿ��
	free(pnData);
		
	int *f = new int;// malloc ��� ���ο� ������ ����(���и� ������� ����)
	/*	
		1. �޸� ����
		2. ������

		�ڷ����ȿ��� ũ�Ⱑ ���ԵǾ� �ִ�.
	*/
	delete f;


	// �迭�� �����ϸ� ���ﶧ�� �迭�� ����ٰ� ����������Ѵ�
	int *g = new int[5];
	delete [] g;

	

	//�����ڴ� �����̴�
	int nData(10);
	std::cout << nData << std::endl;
	
	int &rData = nData;

	rData = 5;

	std::cout << nData << std::endl;
	


	//�������� ������ : ����
	//������ ��ü�� ������ ������ ���Ҽ� �ִ�
	int nnData = 10;
	int nNewData = 20;

	int *pnnData = &nnData;
	*pnData = 5;
	
	pnnData = &nNewData;
	*pnnData = 5;

	//�����ڴ� ������ �ʴ´�



	//����׸��

	int aaa = 1;
	int *pnnnData = &aaa;	
	int &pnnnnData = aaa;	//�����ʹ�
	int bbb = 2;
	int ccc = 3;

	*pnnnData = 5;


	//�������� const �� �ַ� ���� ���
	int * const pnnnnnData = &aaa;


	//r-value ���� : �̸����� �ӽð�ü ó�� (��������)

	//������� for��

	int aList[5] = { 40, 30, 20, 10, 30 };


	//���İ˻� C++�� ����
	for (auto ki : aList){
		printf("%d\n", ki);
	}
	

	return 0;
}

