void test_cpuid_up(void);
void test_cpuid_down(void);


void test_cpuid_up(void){

	aunit_printf("\n##FUNCTION_START_cpuid\n");
 }

void test_cpuid_down(void){
	aunit_printf("\n##FUNCTION_END_cpuid\n");
 }



void abnormal_cpuid_case(int index);

void abnormal_cpuid_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_cpuid_1(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明返回值局部变量，若为基本类型赋默认值
	int returnValue = 0;

	//调用初始化函数

	//为case_count全局变量赋值
	case_id=1;
	//初始化各桩函数调用计数器
	r_tp_call_counter = 0;

	aunit_printf("###TEST_TREE_test_cpuid_1,false,0\n");
	aunit_printf("#CASE_START_test_cpuid_1\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		returnValue = cpuid();
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("cpuid","returnValue",0,returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("r_tp","r_tp_call_counter",r_tp_call_counter)

	aunit_printf("#CASE_END_test_cpuid_1\n");
}

void test_cpuid_2(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明返回值局部变量，若为基本类型赋默认值
	int returnValue = 0;

	//调用初始化函数

	//为case_count全局变量赋值
	case_id=2;
	//初始化各桩函数调用计数器
	r_tp_call_counter = 0;

	aunit_printf("###TEST_TREE_test_cpuid_2,false,0\n");
	aunit_printf("#CASE_START_test_cpuid_2\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		returnValue = cpuid();
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("cpuid","returnValue",42,returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("r_tp","r_tp_call_counter",r_tp_call_counter)

	aunit_printf("#CASE_END_test_cpuid_2\n");
}

void test_cpuid_3(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明返回值局部变量，若为基本类型赋默认值
	int returnValue = 0;

	//调用初始化函数

	//为case_count全局变量赋值
	case_id=3;
	//初始化各桩函数调用计数器
	r_tp_call_counter = 0;

	aunit_printf("###TEST_TREE_test_cpuid_3,false,0\n");
	aunit_printf("#CASE_START_test_cpuid_3\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		returnValue = cpuid();
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("cpuid","returnValue",4294967295,returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("r_tp","r_tp_call_counter",r_tp_call_counter)

	aunit_printf("#CASE_END_test_cpuid_3\n");
}

void test_cpuid_4(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明返回值局部变量，若为基本类型赋默认值
	int returnValue = 0;

	//调用初始化函数

	//为case_count全局变量赋值
	case_id=4;
	//初始化各桩函数调用计数器
	r_tp_call_counter = 0;

	aunit_printf("###TEST_TREE_test_cpuid_4,false,0\n");
	aunit_printf("#CASE_START_test_cpuid_4\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		returnValue = cpuid();
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("cpuid","returnValue",4294967286,returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("r_tp","r_tp_call_counter",r_tp_call_counter)

	aunit_printf("#CASE_END_test_cpuid_4\n");
}

void test_cpuid_5(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明返回值局部变量，若为基本类型赋默认值
	int returnValue = 0;

	//调用初始化函数

	//为case_count全局变量赋值
	case_id=5;
	//初始化各桩函数调用计数器
	r_tp_call_counter = 0;

	aunit_printf("###TEST_TREE_test_cpuid_5,false,0\n");
	aunit_printf("#CASE_START_test_cpuid_5\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		returnValue = cpuid();
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("cpuid","returnValue",1,returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("r_tp","r_tp_call_counter",r_tp_call_counter)

	aunit_printf("#CASE_END_test_cpuid_5\n");
}

void test_cpuid_6(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明返回值局部变量，若为基本类型赋默认值
	int returnValue = 0;

	//调用初始化函数

	//为case_count全局变量赋值
	case_id=6;
	//初始化各桩函数调用计数器
	r_tp_call_counter = 0;

	aunit_printf("###TEST_TREE_test_cpuid_6,false,0\n");
	aunit_printf("#CASE_START_test_cpuid_6\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		returnValue = cpuid();
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("cpuid","returnValue",123456789,returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("r_tp","r_tp_call_counter",r_tp_call_counter)

	aunit_printf("#CASE_END_test_cpuid_6\n");
}

void test_cpuid_7(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明返回值局部变量，若为基本类型赋默认值
	int returnValue = 0;

	//调用初始化函数

	//为case_count全局变量赋值
	case_id=7;
	//初始化各桩函数调用计数器
	r_tp_call_counter = 0;

	aunit_printf("###TEST_TREE_test_cpuid_7,false,0\n");
	aunit_printf("#CASE_START_test_cpuid_7\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		returnValue = cpuid();
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("cpuid","returnValue",0,returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("r_tp","r_tp_call_counter",r_tp_call_counter)

	aunit_printf("#CASE_END_test_cpuid_7\n");
}

void aunit_test_func_run(int caseIndex){

	test_cpuid_up();

	switch(caseIndex){
	case 1:
		test_cpuid_1();
		break;
	case 2:
		test_cpuid_2();
		break;
	case 3:
		test_cpuid_3();
		break;
	case 4:
		test_cpuid_4();
		break;
	case 5:
		test_cpuid_5();
		break;
	case 6:
		test_cpuid_6();
		break;
	case 7:
		test_cpuid_7();
		break;
	default:
		abnormal_cpuid_case(caseIndex);
		break;
	}

	test_cpuid_down();
}

