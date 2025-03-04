void test_uartputc_sync_up(void);
void test_uartputc_sync_down(void);


void test_uartputc_sync_up(void){

	aunit_printf("\n##FUNCTION_START_uartputc_sync\n");
 }

void test_uartputc_sync_down(void){
	aunit_printf("\n##FUNCTION_END_uartputc_sync\n");
 }



void abnormal_uartputc_sync_case(int index);

void abnormal_uartputc_sync_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_uartputc_sync_1(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	int c;


	//值序列相关
	int valueList_0[]={65};
	unsigned int listLength_0=1;
	int valueList_1[]={0};
	unsigned int listLength_1=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=1;
	//初始化各桩函数调用计数器
	push_off_call_counter = 0;
	pop_off_call_counter = 0;

	aunit_printf("###TEST_TREE_test_uartputc_sync_1,false,0\n");
	aunit_printf("#CASE_START_test_uartputc_sync_1\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			c=(int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			panicked=(int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		uartputc_sync(c);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("uartputc_sync","panicked",0,panicked)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("push_off","push_off_call_counter",push_off_call_counter)
	OB_INT_EXPR("pop_off","pop_off_call_counter",pop_off_call_counter)

	aunit_printf("#CASE_END_test_uartputc_sync_1\n");
}

void test_uartputc_sync_2(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	int c;


	//值序列相关
	int valueList_0[]={66};
	unsigned int listLength_0=1;
	int valueList_1[]={1};
	unsigned int listLength_1=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=2;
	//初始化各桩函数调用计数器
	push_off_call_counter = 0;
	pop_off_call_counter = 0;

	aunit_printf("###TEST_TREE_test_uartputc_sync_2,false,0\n");
	aunit_printf("#CASE_START_test_uartputc_sync_2\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			c=(int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			panicked=(int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		uartputc_sync(c);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("uartputc_sync","panicked",1,panicked)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("push_off","push_off_call_counter",push_off_call_counter)
	OB_INT_EXPR("pop_off","pop_off_call_counter",pop_off_call_counter)

	aunit_printf("#CASE_END_test_uartputc_sync_2\n");
}

void test_uartputc_sync_3(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	int c;


	//值序列相关
	int valueList_0[]={67};
	unsigned int listLength_0=1;
	int valueList_1[]={0};
	unsigned int listLength_1=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=3;
	//初始化各桩函数调用计数器
	push_off_call_counter = 0;
	pop_off_call_counter = 0;

	aunit_printf("###TEST_TREE_test_uartputc_sync_3,false,0\n");
	aunit_printf("#CASE_START_test_uartputc_sync_3\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			c=(int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			panicked=(int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		uartputc_sync(c);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("uartputc_sync","panicked",0,panicked)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("push_off","push_off_call_counter",push_off_call_counter)
	OB_INT_EXPR("pop_off","pop_off_call_counter",pop_off_call_counter)

	aunit_printf("#CASE_END_test_uartputc_sync_3\n");
}

void test_uartputc_sync_4(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	int c;


	//值序列相关
	int valueList_0[]={0};
	unsigned int listLength_0=1;
	int valueList_1[]={0};
	unsigned int listLength_1=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=4;
	//初始化各桩函数调用计数器
	push_off_call_counter = 0;
	pop_off_call_counter = 0;

	aunit_printf("###TEST_TREE_test_uartputc_sync_4,false,0\n");
	aunit_printf("#CASE_START_test_uartputc_sync_4\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			c=(int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			panicked=(int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		uartputc_sync(c);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("uartputc_sync","panicked",0,panicked)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("push_off","push_off_call_counter",push_off_call_counter)
	OB_INT_EXPR("pop_off","pop_off_call_counter",pop_off_call_counter)

	aunit_printf("#CASE_END_test_uartputc_sync_4\n");
}

void aunit_test_func_run(int caseIndex){

	test_uartputc_sync_up();

	switch(caseIndex){
	case 1:
		test_uartputc_sync_1();
		break;
	case 2:
		test_uartputc_sync_2();
		break;
	case 3:
		test_uartputc_sync_3();
		break;
	case 4:
		test_uartputc_sync_4();
		break;
	default:
		abnormal_uartputc_sync_case(caseIndex);
		break;
	}

	test_uartputc_sync_down();
}

