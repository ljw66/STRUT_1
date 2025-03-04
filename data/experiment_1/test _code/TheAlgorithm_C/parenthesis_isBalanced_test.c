void test_isBalanced_up(void);
void test_isBalanced_down(void);


void test_isBalanced_up(void){

	aunit_printf("\n##FUNCTION_START_isBalanced\n");
 }

void test_isBalanced_down(void){
	aunit_printf("\n##FUNCTION_END_isBalanced\n");
 }



void abnormal_isBalanced_case(int index);

void abnormal_isBalanced_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_isBalanced_3(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	char *s;

	//声明返回值局部变量，若为基本类型赋默认值
	int returnValue = 0;

	//值序列相关
	int valueList_0[]={0};
	unsigned int listLength_0=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=3;
	//初始化各桩函数调用计数器
	pop_call_counter = 0;
	push_call_counter = 0;

	aunit_printf("###TEST_TREE_test_isBalanced_3,false,0\n");
	aunit_printf("#CASE_START_test_isBalanced_3\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			c=(int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		returnValue = isBalanced(s);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("isBalanced","returnValue",1,returnValue)
	TEST_ASSERT_EQUAL_INT("isBalanced","c",0,c)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("pop","pop_call_counter",pop_call_counter)
	OB_INT_EXPR("push","push_call_counter",push_call_counter)

	aunit_printf("#CASE_END_test_isBalanced_3\n");
}

void test_isBalanced_4(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	char *s;

	//声明返回值局部变量，若为基本类型赋默认值
	int returnValue = 0;

	//值序列相关
	int valueList_0[]={0};
	unsigned int listLength_0=1;
	char *valueList_1[]={(char *)"{"};
	unsigned int listLength_1=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=4;
	//初始化各桩函数调用计数器
	pop_call_counter = 0;
	push_call_counter = 0;

	aunit_printf("###TEST_TREE_test_isBalanced_4,false,0\n");
	aunit_printf("#CASE_START_test_isBalanced_4\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			c=(int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			s=(char *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		returnValue = isBalanced(s);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("isBalanced","returnValue",0,returnValue)
	TEST_ASSERT_EQUAL_INT("isBalanced","c",1,c)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("pop","pop_call_counter",pop_call_counter)
	OB_INT_EXPR("push","push_call_counter",push_call_counter)

	aunit_printf("#CASE_END_test_isBalanced_4\n");
}

void test_isBalanced_5(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	char *s;

	//声明返回值局部变量，若为基本类型赋默认值
	int returnValue = 0;

	//值序列相关
	int valueList_0[]={0};
	unsigned int listLength_0=1;
	char *valueList_1[]={(char *)"}"};
	unsigned int listLength_1=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=5;
	//初始化各桩函数调用计数器
	pop_call_counter = 0;
	push_call_counter = 0;

	aunit_printf("###TEST_TREE_test_isBalanced_5,false,0\n");
	aunit_printf("#CASE_START_test_isBalanced_5\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			c=(int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			s=(char *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		returnValue = isBalanced(s);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("isBalanced","returnValue",0,returnValue)
	TEST_ASSERT_EQUAL_INT("isBalanced","c",0,c)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("pop","pop_call_counter",pop_call_counter)
	OB_INT_EXPR("push","push_call_counter",push_call_counter)

	aunit_printf("#CASE_END_test_isBalanced_5\n");
}

void aunit_test_func_run(int caseIndex){

	test_isBalanced_up();

	switch(caseIndex){
	case 3:
		test_isBalanced_3();
		break;
	case 4:
		test_isBalanced_4();
		break;
	case 5:
		test_isBalanced_5();
		break;
	default:
		abnormal_isBalanced_case(caseIndex);
		break;
	}

	test_isBalanced_down();
}

