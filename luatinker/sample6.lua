-- lua coroutine 
function ThreadTest()
	print("ThreadTest 开始")
	
	print("TestFunc 开始")
	--  lua_yield() 
	TestFunc()
	TestFunc2(1.2)
	print("TestFunc 结束")
	
	print("g_test::TestFunc() 开始")
	--  lua_yield()
	g_test:TestFunc()
	g_test:TestFunc2(2.3)
	print("g_test::TestFunc() 结束")
	
	print("ThreadTest 结束")
end

temp = TestClass()