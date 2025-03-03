void test_fmtcheck_up(void);
void test_fmtcheck_down(void);


void test_fmtcheck_up(void){

	aunit_printf("\n##FUNCTION_START_fmtcheck\n");
 }

void test_fmtcheck_down(void){
	aunit_printf("\n##FUNCTION_END_fmtcheck\n");
 }



void abnormal_fmtcheck_case(int index);

void abnormal_fmtcheck_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_fmtcheck_1(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	char *f1;
	char *f2;

	//声明返回值局部变量，若为基本类型赋默认值
	const char *returnValue = 0;

	//值序列相关
	char *valueList_0[]={(char *)"default"};
	unsigned int listLength_0=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=1;
	//初始化各桩函数调用计数器
	get_next_format_call_counter = 0;

	aunit_printf("###TEST_TREE_test_fmtcheck_1,false,0\n");
	aunit_printf("#CASE_START_test_fmtcheck_1\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			f2=(char *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		returnValue = fmtcheck(f1,f2);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_STRING("fmtcheck","returnValue","default",returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("get_next_format","get_next_format_call_counter",get_next_format_call_counter)

	aunit_printf("#CASE_END_test_fmtcheck_1\n");
}

void test_fmtcheck_2(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	char *f1;
	char *f2;

	//声明返回值局部变量，若为基本类型赋默认值
	const char *returnValue = 0;

	//值序列相关
	char *valueList_0[]={(char *)"abc"};
	unsigned int listLength_0=1;
	char *valueList_1[]={(char *)"abc"};
	unsigned int listLength_1=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=2;
	//初始化各桩函数调用计数器
	get_next_format_call_counter = 0;

	aunit_printf("###TEST_TREE_test_fmtcheck_2,false,0\n");
	aunit_printf("#CASE_START_test_fmtcheck_2\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			f1=(char *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			f2=(char *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		returnValue = fmtcheck(f1,f2);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_STRING("fmtcheck","returnValue","abc",returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("get_next_format","get_next_format_call_counter",get_next_format_call_counter)

	aunit_printf("#CASE_END_test_fmtcheck_2\n");
}

void test_fmtcheck_3(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	char *f1;
	char *f2;

	//声明返回值局部变量，若为基本类型赋默认值
	const char *returnValue = 0;

	//值序列相关
	char *valueList_0[]={(char *)"%d"};
	unsigned int listLength_0=1;
	char *valueList_1[]={(char *)"abc"};
	unsigned int listLength_1=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=3;
	//初始化各桩函数调用计数器
	get_next_format_call_counter = 0;

	aunit_printf("###TEST_TREE_test_fmtcheck_3,false,0\n");
	aunit_printf("#CASE_START_test_fmtcheck_3\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			f1=(char *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			f2=(char *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		returnValue = fmtcheck(f1,f2);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_STRING("fmtcheck","returnValue","abc",returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("get_next_format","get_next_format_call_counter",get_next_format_call_counter)

	aunit_printf("#CASE_END_test_fmtcheck_3\n");
}

void test_fmtcheck_4(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	char *f1;
	char *f2;

	//声明返回值局部变量，若为基本类型赋默认值
	const char *returnValue = 0;

	//值序列相关
	char *valueList_0[]={(char *)"%d"};
	unsigned int listLength_0=1;
	char *valueList_1[]={(char *)"%s"};
	unsigned int listLength_1=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=4;
	//初始化各桩函数调用计数器
	get_next_format_call_counter = 0;

	aunit_printf("###TEST_TREE_test_fmtcheck_4,false,0\n");
	aunit_printf("#CASE_START_test_fmtcheck_4\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			f1=(char *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			f2=(char *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		returnValue = fmtcheck(f1,f2);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_STRING("fmtcheck","returnValue","%s",returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("get_next_format","get_next_format_call_counter",get_next_format_call_counter)

	aunit_printf("#CASE_END_test_fmtcheck_4\n");
}

void test_fmtcheck_5(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	char *f1;
	char *f2;

	//声明返回值局部变量，若为基本类型赋默认值
	const char *returnValue = 0;

	//值序列相关
	char *valueList_0[]={(char *)"%x"};
	unsigned int listLength_0=1;
	char *valueList_1[]={(char *)"default"};
	unsigned int listLength_1=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=5;
	//初始化各桩函数调用计数器
	get_next_format_call_counter = 0;

	aunit_printf("###TEST_TREE_test_fmtcheck_5,false,0\n");
	aunit_printf("#CASE_START_test_fmtcheck_5\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			f1=(char *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			f2=(char *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		returnValue = fmtcheck(f1,f2);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_STRING("fmtcheck","returnValue","default",returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("get_next_format","get_next_format_call_counter",get_next_format_call_counter)

	aunit_printf("#CASE_END_test_fmtcheck_5\n");
}

void test_fmtcheck_6(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	char *f1;
	char *f2;

	//声明返回值局部变量，若为基本类型赋默认值
	const char *returnValue = 0;

	//值序列相关
	char *valueList_0[]={(char *)"%d"};
	unsigned int listLength_0=1;
	char *valueList_1[]={(char *)"%d"};
	unsigned int listLength_1=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=6;
	//初始化各桩函数调用计数器
	get_next_format_call_counter = 0;

	aunit_printf("###TEST_TREE_test_fmtcheck_6,false,0\n");
	aunit_printf("#CASE_START_test_fmtcheck_6\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			f1=(char *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			f2=(char *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		returnValue = fmtcheck(f1,f2);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_STRING("fmtcheck","returnValue","%d",returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("get_next_format","get_next_format_call_counter",get_next_format_call_counter)

	aunit_printf("#CASE_END_test_fmtcheck_6\n");
}

void test_fmtcheck_7(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	char *f1;
	char *f2;

	//声明返回值局部变量，若为基本类型赋默认值
	const char *returnValue = 0;

	//值序列相关
	char *valueList_0[]={(char *)"default"};
	unsigned int listLength_0=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=7;
	//初始化各桩函数调用计数器
	get_next_format_call_counter = 0;

	aunit_printf("###TEST_TREE_test_fmtcheck_7,false,0\n");
	aunit_printf("#CASE_START_test_fmtcheck_7\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			f2=(char *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		returnValue = fmtcheck(f1,f2);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_STRING("fmtcheck","returnValue","default",returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("get_next_format","get_next_format_call_counter",get_next_format_call_counter)

	aunit_printf("#CASE_END_test_fmtcheck_7\n");
}

void test_fmtcheck_8(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	char *f1;
	char *f2;

	//声明返回值局部变量，若为基本类型赋默认值
	const char *returnValue = 0;

	//调用初始化函数

	//为case_count全局变量赋值
	case_id=8;
	//初始化各桩函数调用计数器
	get_next_format_call_counter = 0;

	aunit_printf("###TEST_TREE_test_fmtcheck_8,false,0\n");
	aunit_printf("#CASE_START_test_fmtcheck_8\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		returnValue = fmtcheck(f1,f2);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	OB_STRING_EXPR("fmtcheck","returnValue",returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("get_next_format","get_next_format_call_counter",get_next_format_call_counter)

	aunit_printf("#CASE_END_test_fmtcheck_8\n");
}

void test_fmtcheck_9(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	char *f1;
	char *f2;

	//声明返回值局部变量，若为基本类型赋默认值
	const char *returnValue = 0;

	//值序列相关
	char *valueList_0[]={(char *)"%d %s"};
	unsigned int listLength_0=1;
	char *valueList_1[]={(char *)"%d %s"};
	unsigned int listLength_1=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=9;
	//初始化各桩函数调用计数器
	get_next_format_call_counter = 0;

	aunit_printf("###TEST_TREE_test_fmtcheck_9,false,0\n");
	aunit_printf("#CASE_START_test_fmtcheck_9\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			f1=(char *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			f2=(char *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		returnValue = fmtcheck(f1,f2);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_STRING("fmtcheck","returnValue","%d %s",returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("get_next_format","get_next_format_call_counter",get_next_format_call_counter)

	aunit_printf("#CASE_END_test_fmtcheck_9\n");
}

void aunit_test_func_run(int caseIndex){

	test_fmtcheck_up();

	switch(caseIndex){
	case 1:
		test_fmtcheck_1();
		break;
	case 2:
		test_fmtcheck_2();
		break;
	case 3:
		test_fmtcheck_3();
		break;
	case 4:
		test_fmtcheck_4();
		break;
	case 5:
		test_fmtcheck_5();
		break;
	case 6:
		test_fmtcheck_6();
		break;
	case 7:
		test_fmtcheck_7();
		break;
	case 8:
		test_fmtcheck_8();
		break;
	case 9:
		test_fmtcheck_9();
		break;
	default:
		abnormal_fmtcheck_case(caseIndex);
		break;
	}

	test_fmtcheck_down();
}

