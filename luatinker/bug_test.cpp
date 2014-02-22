// sample1.cpp : C++ 와 Lua 상호간의 함수 실행을 알아본다.
//

#include <iostream>

#include <lua.hpp>
#include "lua_tinker.h"

int cpp_func(int arg1, int arg2)
{
	return arg1 + arg2;
}

#define DEF_CPP_FUNC(name)	lua_tinker::def(L, #name, name)


int cpp_func1(int arg1, int arg2)
{
	return arg1 + arg2;
}

int cpp_func2(int arg1, int arg2)
{
	return arg1 + arg2;
}

int cpp_func3(int arg1, int arg2)
{
	return arg1 + arg2;
}

int cpp_func4(int arg1, int arg2)
{
	return arg1 + arg2;
}

int cpp_func5(int arg1, int arg2)
{
	return arg1 + arg2;
}

int cpp_func6(int arg1, int arg2)
{
	return arg1 + arg2;
}

int cpp_func7(int arg1, int arg2)
{
	return arg1 + arg2;
}

int cpp_func8(int arg1, int arg2)
{
	return arg1 + arg2;
}

int cpp_func9(int arg1, int arg2)
{
	return arg1 + arg2;
}

int cpp_func10(int arg1, int arg2)
{
	return arg1 + arg2;
}

int cpp_func11(int arg1, int arg2)
{
	return arg1 + arg2;
}

int cpp_func12(int arg1, int arg2)
{
	return arg1 + arg2;
}

int cpp_func13(int arg1, int arg2)
{
	return arg1 + arg2;
}

int cpp_func14(int arg1, int arg2)
{
	return arg1 + arg2;
}

int cpp_func15(int arg1, int arg2)
{
	return arg1 + arg2;
}

int cpp_func16(int arg1, int arg2)
{
	return arg1 + arg2;
}

int cpp_func17(int arg1, int arg2)
{
	return arg1 + arg2;
}

int cpp_func18(int arg1, int arg2)
{
	return arg1 + arg2;
}

int cpp_func19(int arg1, int arg2)
{
	return arg1 + arg2;
}

int cpp_func20(int arg1, int arg2)
{
	return arg1 + arg2;
}

//////////////////////////////////////////////////////////////////////////

int cpp_func21(int arg1, int arg2)
{
	return arg1 + arg2;
}

int cpp_func22(int arg1, int arg2)
{
	return arg1 + arg2;
}

int cpp_func23(int arg1, int arg2)
{
	return arg1 + arg2;
}

int cpp_func24(int arg1, int arg2)
{
	return arg1 + arg2;
}

int cpp_func25(int arg1, int arg2)
{
	return arg1 + arg2;
}

int cpp_func26(int arg1, int arg2)
{
	return arg1 + arg2;
}

int cpp_func27(int arg1, int arg2)
{
	return arg1 + arg2;
}

int cpp_func28(int arg1, int arg2)
{
	return arg1 + arg2;
}

int cpp_func29(int arg1, int arg2)
{
	return arg1 + arg2;
}

int cpp_func30(int arg1, int arg2)
{
	return arg1 + arg2;
}

int cpp_func31(int arg1, int arg2)
{
	return arg1 + arg2;
}

int cpp_func32(int arg1, int arg2)
{
	return arg1 + arg2;
}

int cpp_func33(int arg1, int arg2)
{
	return arg1 + arg2;
}

int cpp_func34(int arg1, int arg2)
{
	return arg1 + arg2;
}

int cpp_func35(int arg1, int arg2)
{
	return arg1 + arg2;
}

int cpp_func36(int arg1, int arg2)
{
	return arg1 + arg2;
}

int cpp_func37(int arg1, int arg2)
{
	return arg1 + arg2;
}

int cpp_func38(int arg1, int arg2)
{
	return arg1 + arg2;
}

int cpp_func39(int arg1, int arg2)
{
	return arg1 + arg2;
}

int cpp_func40(int arg1, int arg2)
{
	return arg1 + arg2;
}

//////////////////////////////////////////////////////////////////////////

int main()
{
	// Lua 를 초기화 한다.
	lua_State* L = luaL_newstate();

	// Lua 기본 함수들을 로드한다.- print() 사용
	luaopen_base(L);

	DEF_CPP_FUNC(cpp_func);
	DEF_CPP_FUNC(cpp_func1);
	DEF_CPP_FUNC(cpp_func2);
	DEF_CPP_FUNC(cpp_func3);
	DEF_CPP_FUNC(cpp_func4);
	DEF_CPP_FUNC(cpp_func5);
	DEF_CPP_FUNC(cpp_func6);
	DEF_CPP_FUNC(cpp_func7);
	DEF_CPP_FUNC(cpp_func8);
	DEF_CPP_FUNC(cpp_func9);
	DEF_CPP_FUNC(cpp_func10);
	DEF_CPP_FUNC(cpp_func11);
	DEF_CPP_FUNC(cpp_func12);
	DEF_CPP_FUNC(cpp_func13);
	DEF_CPP_FUNC(cpp_func14);
	DEF_CPP_FUNC(cpp_func15);
	DEF_CPP_FUNC(cpp_func16);
	DEF_CPP_FUNC(cpp_func17);
	DEF_CPP_FUNC(cpp_func18);
	DEF_CPP_FUNC(cpp_func19);
	DEF_CPP_FUNC(cpp_func20);

	DEF_CPP_FUNC(cpp_func21);
	DEF_CPP_FUNC(cpp_func22);
	DEF_CPP_FUNC(cpp_func23);
	DEF_CPP_FUNC(cpp_func24);
	DEF_CPP_FUNC(cpp_func25);
	DEF_CPP_FUNC(cpp_func26);
	DEF_CPP_FUNC(cpp_func27);
	DEF_CPP_FUNC(cpp_func28);
	DEF_CPP_FUNC(cpp_func29);
	DEF_CPP_FUNC(cpp_func30);
	DEF_CPP_FUNC(cpp_func31);
	DEF_CPP_FUNC(cpp_func32);
	DEF_CPP_FUNC(cpp_func33);
	DEF_CPP_FUNC(cpp_func34);
	DEF_CPP_FUNC(cpp_func35);
	DEF_CPP_FUNC(cpp_func36);
	DEF_CPP_FUNC(cpp_func37);
	DEF_CPP_FUNC(cpp_func38);
	DEF_CPP_FUNC(cpp_func39);
	DEF_CPP_FUNC(cpp_func40);

	// LuaTinker 를 이용해서 함수를 등록한다.
	//lua_tinker::def(L, "cpp_func", cpp_func);

	// sample1.lua 파일을 로드/실행한다.
	lua_tinker::dofile(L, "sample1.lua");

	// sample1.lua 의 함수를 호출한다.
	int result = lua_tinker::call<int>(L, "lua_func", 3, 4);

	// lua_func(3,4) 의 결과물 출력
	printf("lua_func(3,4) = %d\n", result);

	// 프로그램 종료
	lua_close(L);

	system("pause");

	return 0;
}
