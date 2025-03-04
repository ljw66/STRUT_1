void test_cdf_grow_info_up(void);
void test_cdf_grow_info_down(void);


void test_cdf_grow_info_up(void){

	aunit_printf("\n##FUNCTION_START_cdf_grow_info\n");
 }

void test_cdf_grow_info_down(void){
	aunit_printf("\n##FUNCTION_END_cdf_grow_info\n");
 }



void abnormal_cdf_grow_info_case(int index);

void abnormal_cdf_grow_info_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_cdf_grow_info_1(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	cdf_property_info_t **info;
	size_t *maxcount;
	unsigned int incr;

	//声明返回值局部变量，若为基本类型赋默认值
	cdf_property_info_t *returnValue = 0;

	//值序列相关
	size_t *valueList_0[]={(size_t *)maxcount_PTRTO};
	unsigned int listLength_0=1;
	unsigned int valueList_1[]={5};
	unsigned int listLength_1=1;
	//*info is an invalid expression 
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=1;
	//初始化各桩函数调用计数器
	cdf_realloc_call_counter = 0;

	aunit_printf("###TEST_TREE_test_cdf_grow_info_1,false,0\n");
	aunit_printf("#CASE_START_test_cdf_grow_info_1\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			maxcount=(size_t *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			incr=(unsigned int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		returnValue = cdf_grow_info(info,maxcount,incr);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_LONG("cdf_grow_info","returnValue",1000,returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("cdf_realloc","cdf_realloc_call_counter",cdf_realloc_call_counter)

	aunit_printf("#CASE_END_test_cdf_grow_info_1\n");
}

void test_cdf_grow_info_2(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	cdf_property_info_t **info;
	size_t *maxcount;
	unsigned int incr;

	//声明返回值局部变量，若为基本类型赋默认值
	cdf_property_info_t *returnValue = 0;

	//值序列相关
	size_t *valueList_0[]={(size_t *)maxcount_PTRTO};
	unsigned int listLength_0=1;
	unsigned int valueList_1[]={10};
	unsigned int listLength_1=1;
	//*info is an invalid expression 
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=2;
	//初始化各桩函数调用计数器
	cdf_realloc_call_counter = 0;

	aunit_printf("###TEST_TREE_test_cdf_grow_info_2,false,0\n");
	aunit_printf("#CASE_START_test_cdf_grow_info_2\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			maxcount=(size_t *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			incr=(unsigned int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		returnValue = cdf_grow_info(info,maxcount,incr);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_LONG("cdf_grow_info","returnValue",0,returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("cdf_realloc","cdf_realloc_call_counter",cdf_realloc_call_counter)

	aunit_printf("#CASE_END_test_cdf_grow_info_2\n");
}

void test_cdf_grow_info_3(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	cdf_property_info_t **info;
	size_t *maxcount;
	unsigned int incr;

	//声明返回值局部变量，若为基本类型赋默认值
	cdf_property_info_t *returnValue = 0;

	//值序列相关
	size_t *valueList_0[]={(size_t *)maxcount_PTRTO};
	unsigned int listLength_0=1;
	unsigned int valueList_1[]={5};
	unsigned int listLength_1=1;
	//*info is an invalid expression 
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=3;
	//初始化各桩函数调用计数器
	cdf_realloc_call_counter = 0;

	aunit_printf("###TEST_TREE_test_cdf_grow_info_3,false,0\n");
	aunit_printf("#CASE_START_test_cdf_grow_info_3\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			maxcount=(size_t *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			incr=(unsigned int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		returnValue = cdf_grow_info(info,maxcount,incr);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_LONG("cdf_grow_info","returnValue",0,returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("cdf_realloc","cdf_realloc_call_counter",cdf_realloc_call_counter)

	aunit_printf("#CASE_END_test_cdf_grow_info_3\n");
}

void test_cdf_grow_info_4(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	cdf_property_info_t **info;
	size_t *maxcount;
	unsigned int incr;

	//声明返回值局部变量，若为基本类型赋默认值
	cdf_property_info_t *returnValue = 0;

	//值序列相关
	size_t *valueList_0[]={(size_t *)maxcount_PTRTO};
	unsigned int listLength_0=1;
	unsigned int valueList_1[]={0};
	unsigned int listLength_1=1;
	//*info is an invalid expression 
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=4;
	//初始化各桩函数调用计数器
	cdf_realloc_call_counter = 0;

	aunit_printf("###TEST_TREE_test_cdf_grow_info_4,false,0\n");
	aunit_printf("#CASE_START_test_cdf_grow_info_4\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			maxcount=(size_t *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			incr=(unsigned int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		returnValue = cdf_grow_info(info,maxcount,incr);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_LONG("cdf_grow_info","returnValue",3000,returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("cdf_realloc","cdf_realloc_call_counter",cdf_realloc_call_counter)

	aunit_printf("#CASE_END_test_cdf_grow_info_4\n");
}

void test_cdf_grow_info_5(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	cdf_property_info_t **info;
	size_t *maxcount;
	unsigned int incr;

	//声明返回值局部变量，若为基本类型赋默认值
	cdf_property_info_t *returnValue = 0;

	//值序列相关
	size_t *valueList_0[]={(size_t *)maxcount_PTRTO};
	unsigned int listLength_0=1;
	unsigned int valueList_1[]={5};
	unsigned int listLength_1=1;
	//*info is an invalid expression 
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=5;
	//初始化各桩函数调用计数器
	cdf_realloc_call_counter = 0;

	aunit_printf("###TEST_TREE_test_cdf_grow_info_5,false,0\n");
	aunit_printf("#CASE_START_test_cdf_grow_info_5\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			maxcount=(size_t *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			incr=(unsigned int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		returnValue = cdf_grow_info(info,maxcount,incr);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_LONG("cdf_grow_info","returnValue",0,returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("cdf_realloc","cdf_realloc_call_counter",cdf_realloc_call_counter)

	aunit_printf("#CASE_END_test_cdf_grow_info_5\n");
}

void aunit_test_func_run(int caseIndex){

	test_cdf_grow_info_up();

	switch(caseIndex){
	case 1:
		test_cdf_grow_info_1();
		break;
	case 2:
		test_cdf_grow_info_2();
		break;
	case 3:
		test_cdf_grow_info_3();
		break;
	case 4:
		test_cdf_grow_info_4();
		break;
	case 5:
		test_cdf_grow_info_5();
		break;
	default:
		abnormal_cdf_grow_info_case(caseIndex);
		break;
	}

	test_cdf_grow_info_down();
}

