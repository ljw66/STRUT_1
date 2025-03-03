void test_cdf_tole8_up(void);
void test_cdf_tole8_down(void);


void test_cdf_tole8_up(void){

	aunit_printf("\n##FUNCTION_START_cdf_tole8\n");
 }

void test_cdf_tole8_down(void){
	aunit_printf("\n##FUNCTION_END_cdf_tole8\n");
 }



void abnormal_cdf_tole8_case(int index);

void abnormal_cdf_tole8_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_cdf_tole8_1(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	unsigned long long int sv;

	//声明返回值局部变量，若为基本类型赋默认值
	uint64_t returnValue = 0;

	//值序列相关
	unsigned long long int valueList_0[]={42};
	unsigned int listLength_0=1;
	unsigned int valueList_1[]={16909060};
	unsigned int listLength_1=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=1;
	//初始化各桩函数调用计数器
	_cdf_tole8_call_counter = 0;

	aunit_printf("###TEST_TREE_test_cdf_tole8_1,false,0\n");
	aunit_printf("#CASE_START_test_cdf_tole8_1\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			sv=(unsigned long long int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			cdf_bo.u=(unsigned int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		returnValue = cdf_tole8(sv);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_UNSIGNED_LONGLONG("cdf_tole8","returnValue",84,returnValue)
	TEST_ASSERT_EQUAL_UNSIGNED_INT("cdf_tole8","cdf_bo.u",16909060,cdf_bo.u)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("_cdf_tole8","_cdf_tole8_call_counter",_cdf_tole8_call_counter)

	aunit_printf("#CASE_END_test_cdf_tole8_1\n");
}

void test_cdf_tole8_2(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	unsigned long long int sv;

	//声明返回值局部变量，若为基本类型赋默认值
	uint64_t returnValue = 0;

	//值序列相关
	unsigned long long int valueList_0[]={42};
	unsigned int listLength_0=1;
	unsigned int valueList_1[]={0};
	unsigned int listLength_1=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=2;
	//初始化各桩函数调用计数器
	_cdf_tole8_call_counter = 0;

	aunit_printf("###TEST_TREE_test_cdf_tole8_2,false,0\n");
	aunit_printf("#CASE_START_test_cdf_tole8_2\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			sv=(unsigned long long int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			cdf_bo.u=(unsigned int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		returnValue = cdf_tole8(sv);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_UNSIGNED_LONGLONG("cdf_tole8","returnValue",42,returnValue)
	TEST_ASSERT_EQUAL_UNSIGNED_INT("cdf_tole8","cdf_bo.u",0,cdf_bo.u)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("_cdf_tole8","_cdf_tole8_call_counter",_cdf_tole8_call_counter)

	aunit_printf("#CASE_END_test_cdf_tole8_2\n");
}

void test_cdf_tole8_3(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	unsigned long long int sv;

	//声明返回值局部变量，若为基本类型赋默认值
	uint64_t returnValue = 0;

	//值序列相关
	unsigned long long int valueList_0[]={0};
	unsigned int listLength_0=1;
	unsigned int valueList_1[]={16909060};
	unsigned int listLength_1=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=3;
	//初始化各桩函数调用计数器
	_cdf_tole8_call_counter = 0;

	aunit_printf("###TEST_TREE_test_cdf_tole8_3,false,0\n");
	aunit_printf("#CASE_START_test_cdf_tole8_3\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			sv=(unsigned long long int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			cdf_bo.u=(unsigned int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		returnValue = cdf_tole8(sv);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_UNSIGNED_LONGLONG("cdf_tole8","returnValue",0,returnValue)
	TEST_ASSERT_EQUAL_UNSIGNED_INT("cdf_tole8","cdf_bo.u",16909060,cdf_bo.u)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("_cdf_tole8","_cdf_tole8_call_counter",_cdf_tole8_call_counter)

	aunit_printf("#CASE_END_test_cdf_tole8_3\n");
}

void test_cdf_tole8_4(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	unsigned long long int sv;

	//声明返回值局部变量，若为基本类型赋默认值
	uint64_t returnValue = 0;

	//值序列相关
	unsigned long long int valueList_0[]={18446744073709551615};
	unsigned int listLength_0=1;
	unsigned int valueList_1[]={305419896};
	unsigned int listLength_1=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=4;
	//初始化各桩函数调用计数器
	_cdf_tole8_call_counter = 0;

	aunit_printf("###TEST_TREE_test_cdf_tole8_4,false,0\n");
	aunit_printf("#CASE_START_test_cdf_tole8_4\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			sv=(unsigned long long int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			cdf_bo.u=(unsigned int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		returnValue = cdf_tole8(sv);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_UNSIGNED_LONGLONG("cdf_tole8","returnValue",18446744073709551615,returnValue)
	TEST_ASSERT_EQUAL_UNSIGNED_INT("cdf_tole8","cdf_bo.u",305419896,cdf_bo.u)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("_cdf_tole8","_cdf_tole8_call_counter",_cdf_tole8_call_counter)

	aunit_printf("#CASE_END_test_cdf_tole8_4\n");
}

void test_cdf_tole8_5(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	unsigned long long int sv;

	//声明返回值局部变量，若为基本类型赋默认值
	uint64_t returnValue = 0;

	//值序列相关
	unsigned long long int valueList_0[]={12345};
	unsigned int listLength_0=1;
	unsigned int valueList_1[]={16909060};
	unsigned int listLength_1=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=5;
	//初始化各桩函数调用计数器
	_cdf_tole8_call_counter = 0;

	aunit_printf("###TEST_TREE_test_cdf_tole8_5,false,0\n");
	aunit_printf("#CASE_START_test_cdf_tole8_5\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			sv=(unsigned long long int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			cdf_bo.u=(unsigned int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		returnValue = cdf_tole8(sv);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_UNSIGNED_LONGLONG("cdf_tole8","returnValue",9876543210,returnValue)
	TEST_ASSERT_EQUAL_UNSIGNED_INT("cdf_tole8","cdf_bo.u",16909060,cdf_bo.u)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("_cdf_tole8","_cdf_tole8_call_counter",_cdf_tole8_call_counter)

	aunit_printf("#CASE_END_test_cdf_tole8_5\n");
}

void test_cdf_tole8_6(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	unsigned long long int sv;

	//声明返回值局部变量，若为基本类型赋默认值
	uint64_t returnValue = 0;

	//值序列相关
	unsigned long long int valueList_0[]={0};
	unsigned int listLength_0=1;
	unsigned int valueList_1[]={0};
	unsigned int listLength_1=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=6;
	//初始化各桩函数调用计数器
	_cdf_tole8_call_counter = 0;

	aunit_printf("###TEST_TREE_test_cdf_tole8_6,false,0\n");
	aunit_printf("#CASE_START_test_cdf_tole8_6\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			sv=(unsigned long long int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			cdf_bo.u=(unsigned int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		returnValue = cdf_tole8(sv);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_UNSIGNED_LONGLONG("cdf_tole8","returnValue",0,returnValue)
	TEST_ASSERT_EQUAL_UNSIGNED_INT("cdf_tole8","cdf_bo.u",0,cdf_bo.u)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("_cdf_tole8","_cdf_tole8_call_counter",_cdf_tole8_call_counter)

	aunit_printf("#CASE_END_test_cdf_tole8_6\n");
}

void aunit_test_func_run(int caseIndex){

	test_cdf_tole8_up();

	switch(caseIndex){
	case 1:
		test_cdf_tole8_1();
		break;
	case 2:
		test_cdf_tole8_2();
		break;
	case 3:
		test_cdf_tole8_3();
		break;
	case 4:
		test_cdf_tole8_4();
		break;
	case 5:
		test_cdf_tole8_5();
		break;
	case 6:
		test_cdf_tole8_6();
		break;
	default:
		abnormal_cdf_tole8_case(caseIndex);
		break;
	}

	test_cdf_tole8_down();
}

