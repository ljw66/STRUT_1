void test_km_init_up(void);
void test_km_init_down(void);


void test_km_init_up(void){

	aunit_printf("\n##FUNCTION_START_km_init\n");
 }

void test_km_init_down(void){
	aunit_printf("\n##FUNCTION_END_km_init\n");
 }



void abnormal_km_init_case(int index);

void abnormal_km_init_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_km_init_1(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明返回值局部变量，若为基本类型赋默认值
	void *returnValue = 0;

	//调用初始化函数

	//为case_count全局变量赋值
	case_id=1;
	//初始化各桩函数调用计数器
	km_init2_call_counter = 0;

	aunit_printf("###TEST_TREE_test_km_init_1,false,0\n");
	aunit_printf("#CASE_START_test_km_init_1\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		returnValue = km_init();
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_LONG("km_init","returnValue",0,returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("km_init2","km_init2_call_counter",km_init2_call_counter)

	aunit_printf("#CASE_END_test_km_init_1\n");
}

void test_km_init_2(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明返回值局部变量，若为基本类型赋默认值
	void *returnValue = 0;

	//调用初始化函数

	//为case_count全局变量赋值
	case_id=2;
	//初始化各桩函数调用计数器
	km_init2_call_counter = 0;

	aunit_printf("###TEST_TREE_test_km_init_2,false,0\n");
	aunit_printf("#CASE_START_test_km_init_2\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		returnValue = km_init();
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_LONG("km_init","returnValue",123456,returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("km_init2","km_init2_call_counter",km_init2_call_counter)

	aunit_printf("#CASE_END_test_km_init_2\n");
}

void test_km_init_3(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明返回值局部变量，若为基本类型赋默认值
	void *returnValue = 0;

	//调用初始化函数

	//为case_count全局变量赋值
	case_id=3;
	//初始化各桩函数调用计数器
	km_init2_call_counter = 0;

	aunit_printf("###TEST_TREE_test_km_init_3,false,0\n");
	aunit_printf("#CASE_START_test_km_init_3\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		returnValue = km_init();
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_LONG("km_init","returnValue",654321,returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("km_init2","km_init2_call_counter",km_init2_call_counter)

	aunit_printf("#CASE_END_test_km_init_3\n");
}

void aunit_test_func_run(int caseIndex){

	test_km_init_up();

	switch(caseIndex){
	case 1:
		test_km_init_1();
		break;
	case 2:
		test_km_init_2();
		break;
	case 3:
		test_km_init_3();
		break;
	default:
		abnormal_km_init_case(caseIndex);
		break;
	}

	test_km_init_down();
}

