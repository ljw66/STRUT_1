void test_execcmd_up(void);
void test_execcmd_down(void);


void test_execcmd_up(void){

	aunit_printf("\n##FUNCTION_START_execcmd\n");
 }

void test_execcmd_down(void){
	aunit_printf("\n##FUNCTION_END_execcmd\n");
 }



void abnormal_execcmd_case(int index);

void abnormal_execcmd_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_execcmd_1(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明返回值局部变量，若为基本类型赋默认值
	struct cmd *returnValue = 0;

	//调用初始化函数

	//为case_count全局变量赋值
	case_id=1;
	//初始化各桩函数调用计数器
	malloc_call_counter = 0;
	memset_call_counter = 0;

	aunit_printf("###TEST_TREE_test_execcmd_1,false,0\n");
	aunit_printf("#CASE_START_test_execcmd_1\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		returnValue = execcmd();
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	OB_INT_EXPR("execcmd","returnValue",returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("malloc","malloc_call_counter",malloc_call_counter)
	OB_INT_EXPR("memset","memset_call_counter",memset_call_counter)

	aunit_printf("#CASE_END_test_execcmd_1\n");
}

void test_execcmd_2(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明返回值局部变量，若为基本类型赋默认值
	struct cmd *returnValue = 0;

	//调用初始化函数

	//为case_count全局变量赋值
	case_id=2;
	//初始化各桩函数调用计数器
	malloc_call_counter = 0;
	memset_call_counter = 0;

	aunit_printf("###TEST_TREE_test_execcmd_2,false,0\n");
	aunit_printf("#CASE_START_test_execcmd_2\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		returnValue = execcmd();
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_LONG("execcmd","returnValue",0,returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("malloc","malloc_call_counter",malloc_call_counter)
	OB_INT_EXPR("memset","memset_call_counter",memset_call_counter)

	aunit_printf("#CASE_END_test_execcmd_2\n");
}

void test_execcmd_3(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明返回值局部变量，若为基本类型赋默认值
	struct cmd *returnValue = 0;

	//调用初始化函数

	//为case_count全局变量赋值
	case_id=3;
	//初始化各桩函数调用计数器
	malloc_call_counter = 0;
	memset_call_counter = 0;

	aunit_printf("###TEST_TREE_test_execcmd_3,false,0\n");
	aunit_printf("#CASE_START_test_execcmd_3\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		returnValue = execcmd();
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_LONG("execcmd","returnValue",0,returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("malloc","malloc_call_counter",malloc_call_counter)
	OB_INT_EXPR("memset","memset_call_counter",memset_call_counter)

	aunit_printf("#CASE_END_test_execcmd_3\n");
}

void test_execcmd_4(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明返回值局部变量，若为基本类型赋默认值
	struct cmd *returnValue = 0;

	//调用初始化函数

	//为case_count全局变量赋值
	case_id=4;
	//初始化各桩函数调用计数器
	malloc_call_counter = 0;
	memset_call_counter = 0;

	aunit_printf("###TEST_TREE_test_execcmd_4,false,0\n");
	aunit_printf("#CASE_START_test_execcmd_4\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		returnValue = execcmd();
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	OB_INT_EXPR("execcmd","returnValue",returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("malloc","malloc_call_counter",malloc_call_counter)
	OB_INT_EXPR("memset","memset_call_counter",memset_call_counter)

	aunit_printf("#CASE_END_test_execcmd_4\n");
}

void aunit_test_func_run(int caseIndex){

	test_execcmd_up();

	switch(caseIndex){
	case 1:
		test_execcmd_1();
		break;
	case 2:
		test_execcmd_2();
		break;
	case 3:
		test_execcmd_3();
		break;
	case 4:
		test_execcmd_4();
		break;
	default:
		abnormal_execcmd_case(caseIndex);
		break;
	}

	test_execcmd_down();
}

