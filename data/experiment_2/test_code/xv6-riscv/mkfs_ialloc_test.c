void test_ialloc_up(void);
void test_ialloc_down(void);


void test_ialloc_up(void){

	aunit_printf("\n##FUNCTION_START_ialloc\n");
 }

void test_ialloc_down(void){
	aunit_printf("\n##FUNCTION_END_ialloc\n");
 }



void abnormal_ialloc_case(int index);

void abnormal_ialloc_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_ialloc_1(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	unsigned short int type;

	//声明返回值局部变量，若为基本类型赋默认值
	uint returnValue = 0;

	//值序列相关
	unsigned int valueList_0[]={0};
	unsigned int listLength_0=1;
	unsigned short int valueList_1[]={0};
	unsigned int listLength_1=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=1;
	//初始化各桩函数调用计数器
	bzero_call_counter = 0;
	winode_call_counter = 0;
	xshort_call_counter = 0;
	xint_call_counter = 0;

	aunit_printf("###TEST_TREE_test_ialloc_1,false,0\n");
	aunit_printf("#CASE_START_test_ialloc_1\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			freeinode=(unsigned int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			type=(unsigned short int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		returnValue = ialloc(type);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_UNSIGNED_INT("ialloc","returnValue",0,returnValue)
	TEST_ASSERT_EQUAL_UNSIGNED_INT("ialloc","freeinode",1,freeinode)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("bzero","bzero_call_counter",bzero_call_counter)
	OB_INT_EXPR("winode","winode_call_counter",winode_call_counter)
	OB_INT_EXPR("xshort","xshort_call_counter",xshort_call_counter)
	OB_INT_EXPR("xint","xint_call_counter",xint_call_counter)

	aunit_printf("#CASE_END_test_ialloc_1\n");
}

void test_ialloc_2(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	unsigned short int type;

	//声明返回值局部变量，若为基本类型赋默认值
	uint returnValue = 0;

	//值序列相关
	unsigned int valueList_0[]={5};
	unsigned int listLength_0=1;
	unsigned short int valueList_1[]={1};
	unsigned int listLength_1=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=2;
	//初始化各桩函数调用计数器
	bzero_call_counter = 0;
	winode_call_counter = 0;
	xshort_call_counter = 0;
	xint_call_counter = 0;

	aunit_printf("###TEST_TREE_test_ialloc_2,false,0\n");
	aunit_printf("#CASE_START_test_ialloc_2\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			freeinode=(unsigned int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			type=(unsigned short int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		returnValue = ialloc(type);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_UNSIGNED_INT("ialloc","returnValue",5,returnValue)
	TEST_ASSERT_EQUAL_UNSIGNED_INT("ialloc","freeinode",6,freeinode)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("bzero","bzero_call_counter",bzero_call_counter)
	OB_INT_EXPR("winode","winode_call_counter",winode_call_counter)
	OB_INT_EXPR("xshort","xshort_call_counter",xshort_call_counter)
	OB_INT_EXPR("xint","xint_call_counter",xint_call_counter)

	aunit_printf("#CASE_END_test_ialloc_2\n");
}

void test_ialloc_3(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	unsigned short int type;

	//声明返回值局部变量，若为基本类型赋默认值
	uint returnValue = 0;

	//值序列相关
	unsigned int valueList_0[]={10};
	unsigned int listLength_0=1;
	unsigned short int valueList_1[]={2};
	unsigned int listLength_1=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=3;
	//初始化各桩函数调用计数器
	bzero_call_counter = 0;
	winode_call_counter = 0;
	xshort_call_counter = 0;
	xint_call_counter = 0;

	aunit_printf("###TEST_TREE_test_ialloc_3,false,0\n");
	aunit_printf("#CASE_START_test_ialloc_3\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			freeinode=(unsigned int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			type=(unsigned short int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		returnValue = ialloc(type);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_UNSIGNED_INT("ialloc","returnValue",10,returnValue)
	TEST_ASSERT_EQUAL_UNSIGNED_INT("ialloc","freeinode",11,freeinode)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("bzero","bzero_call_counter",bzero_call_counter)
	OB_INT_EXPR("winode","winode_call_counter",winode_call_counter)
	OB_INT_EXPR("xshort","xshort_call_counter",xshort_call_counter)
	OB_INT_EXPR("xint","xint_call_counter",xint_call_counter)

	aunit_printf("#CASE_END_test_ialloc_3\n");
}

void test_ialloc_4(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	unsigned short int type;

	//声明返回值局部变量，若为基本类型赋默认值
	uint returnValue = 0;

	//值序列相关
	unsigned int valueList_0[]={100};
	unsigned int listLength_0=1;
	unsigned short int valueList_1[]={65535};
	unsigned int listLength_1=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=4;
	//初始化各桩函数调用计数器
	bzero_call_counter = 0;
	winode_call_counter = 0;
	xshort_call_counter = 0;
	xint_call_counter = 0;

	aunit_printf("###TEST_TREE_test_ialloc_4,false,0\n");
	aunit_printf("#CASE_START_test_ialloc_4\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			freeinode=(unsigned int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			type=(unsigned short int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		returnValue = ialloc(type);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_UNSIGNED_INT("ialloc","returnValue",100,returnValue)
	TEST_ASSERT_EQUAL_UNSIGNED_INT("ialloc","freeinode",101,freeinode)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("bzero","bzero_call_counter",bzero_call_counter)
	OB_INT_EXPR("winode","winode_call_counter",winode_call_counter)
	OB_INT_EXPR("xshort","xshort_call_counter",xshort_call_counter)
	OB_INT_EXPR("xint","xint_call_counter",xint_call_counter)

	aunit_printf("#CASE_END_test_ialloc_4\n");
}

void test_ialloc_5(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	unsigned short int type;

	//声明返回值局部变量，若为基本类型赋默认值
	uint returnValue = 0;

	//值序列相关
	unsigned int valueList_0[]={2147483647};
	unsigned int listLength_0=1;
	unsigned short int valueList_1[]={32767};
	unsigned int listLength_1=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=5;
	//初始化各桩函数调用计数器
	bzero_call_counter = 0;
	winode_call_counter = 0;
	xshort_call_counter = 0;
	xint_call_counter = 0;

	aunit_printf("###TEST_TREE_test_ialloc_5,false,0\n");
	aunit_printf("#CASE_START_test_ialloc_5\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			freeinode=(unsigned int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			type=(unsigned short int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		returnValue = ialloc(type);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_UNSIGNED_INT("ialloc","returnValue",2147483647,returnValue)
	TEST_ASSERT_EQUAL_UNSIGNED_INT("ialloc","freeinode",2147483648,freeinode)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("bzero","bzero_call_counter",bzero_call_counter)
	OB_INT_EXPR("winode","winode_call_counter",winode_call_counter)
	OB_INT_EXPR("xshort","xshort_call_counter",xshort_call_counter)
	OB_INT_EXPR("xint","xint_call_counter",xint_call_counter)

	aunit_printf("#CASE_END_test_ialloc_5\n");
}

void aunit_test_func_run(int caseIndex){

	test_ialloc_up();

	switch(caseIndex){
	case 1:
		test_ialloc_1();
		break;
	case 2:
		test_ialloc_2();
		break;
	case 3:
		test_ialloc_3();
		break;
	case 4:
		test_ialloc_4();
		break;
	case 5:
		test_ialloc_5();
		break;
	default:
		abnormal_ialloc_case(caseIndex);
		break;
	}

	test_ialloc_down();
}

