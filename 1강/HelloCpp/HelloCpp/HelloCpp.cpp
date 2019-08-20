// HelloCpp.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include <iostream>

int _tmain(int argc, _TCHAR* argv[])
{
	//C스타일
	printf("Hello, World\n");	
	
	//C++스타일
	std::cout << "Hello, World" << std::endl;	

	//std : 네임스페이스
	//:: : 범위지정연산자

	// dir > result.txt : 리다이렉트
	// dir >> result.txt : Append




	//선언 및 정의
	int a = 10;	//c 스타일

	int b(10);	//c++ 스타일
	auto c(b);	//원본 따라 형처리
	
	/*
		훗날 유용
		void(*pfTest)(int, char*) = TestFunc;
		auto pfTest2(TestFunc);
	*/

	int(10);	//가능함 상수처리됨




	//C언어 메모리 동적할당/해제

	/*
		malloc();	<-	size_t 가 변수로 들어감, 관심분야는 크기, 용도 생각안함
		free();

		포인터 : 주관적, 크기만 지정 사용용도는 유저에게 맡김

		자유도가 높다 == 안전장치가 없다

		OS가 달라졌다 DOS -> 범용OS 보호모드 (인텔 링시스템 : 유저모드, 커널모드가 나뉨)

		메모리 -> 가상메모리 : 없는것이 생기는것이 아니다.
		: 이미 있는 것에서 사용허가를 받는다 '임대'

		OS가 메모리통제, 할당을 실패할 가능성이 줄어듬
	*/


	int *pnData = (int*)malloc(sizeof(int)); //C스타일
	free(pnData);
		
	int *f = new int;// malloc 대신 새로운 연산자 등장(실패를 고려하지 않음)
	/*	
		1. 메모리 동적
		2. 생성자

		자료형안에는 크기가 포함되어 있다.
	*/
	delete f;


	// 배열로 선언하면 지울때도 배열을 지운다고 선언해줘야한다
	int *g = new int[5];
	delete [] g;

	

	//참조자는 별명이다
	int nData(10);
	std::cout << nData << std::endl;
	
	int &rData = nData;

	rData = 5;

	std::cout << nData << std::endl;
	


	//포인터의 문제점 : 변절
	//포인터 자체가 변수기 때문에 변할수 있다
	int nnData = 10;
	int nNewData = 20;

	int *pnnData = &nnData;
	*pnData = 5;
	
	pnnData = &nNewData;
	*pnnData = 5;

	//참조자는 변하지 않는다



	//디버그모드

	int aaa = 1;
	int *pnnnData = &aaa;	
	int &pnnnnData = aaa;	//포인터다
	int bbb = 2;
	int ccc = 3;

	*pnnnData = 5;


	//형한정어 const 를 주로 같이 사용
	int * const pnnnnnData = &aaa;


	//r-value 참조 : 이름없는 임시객체 처리 (성능저하)

	//범위기반 for문

	int aList[5] = { 40, 30, 20, 10, 30 };


	//형식검사 C++은 강력
	for (auto ki : aList){
		printf("%d\n", ki);
	}
	

	return 0;
}

