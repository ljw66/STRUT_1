void test_swap2_up(void);
void test_swap2_down(void);


void test_swap2_up(void){

	aunit_printf("\n##FUNCTION_START_swap2\n");
 }

void test_swap2_down(void){
	aunit_printf("\n##FUNCTION_END_swap2\n");
 }



void abnormal_swap2_case(int index);

void abnormal_swap2_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_swap2_1(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	unsigned short int sv;

	//声明返回值局部变量，若为基本类型赋默认值
	uint16_t returnValue = 0;

	//值序列相关
	unsigned short int valueList_0[]={0x1234};
	unsigned int listLength_0=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=1;
	//初始化各桩函数调用计数器
	parse_apple_call_counter = 0;
	parse_strength_call_counter = 0;
	parse_ext_call_counter = 0;
	parse_mime_call_counter = 0;

	aunit_printf("###TEST_TREE_test_swap2_1,false,0\n");
	aunit_printf("#CASE_START_test_swap2_1\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			sv=(unsigned short int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		returnValue = swap2(sv);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_UNSIGNED_SHORT("swap2","returnValue",0x3412,returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("parse_apple","parse_apple_call_counter",parse_apple_call_counter)
	OB_INT_EXPR("parse_strength","parse_strength_call_counter",parse_strength_call_counter)
	OB_INT_EXPR("parse_ext","parse_ext_call_counter",parse_ext_call_counter)
	OB_INT_EXPR("parse_mime","parse_mime_call_counter",parse_mime_call_counter)

	aunit_printf("#CASE_END_test_swap2_1\n");
}

void test_swap2_2(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	unsigned short int sv;

	//声明返回值局部变量，若为基本类型赋默认值
	uint16_t returnValue = 0;

	//值序列相关
	unsigned short int valueList_0[]={0x0000};
	unsigned int listLength_0=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=2;
	//初始化各桩函数调用计数器
	parse_apple_call_counter = 0;
	parse_strength_call_counter = 0;
	parse_ext_call_counter = 0;
	parse_mime_call_counter = 0;

	aunit_printf("###TEST_TREE_test_swap2_2,false,0\n");
	aunit_printf("#CASE_START_test_swap2_2\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			sv=(unsigned short int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		returnValue = swap2(sv);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_UNSIGNED_SHORT("swap2","returnValue",0x0000,returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("parse_apple","parse_apple_call_counter",parse_apple_call_counter)
	OB_INT_EXPR("parse_strength","parse_strength_call_counter",parse_strength_call_counter)
	OB_INT_EXPR("parse_ext","parse_ext_call_counter",parse_ext_call_counter)
	OB_INT_EXPR("parse_mime","parse_mime_call_counter",parse_mime_call_counter)

	aunit_printf("#CASE_END_test_swap2_2\n");
}

void test_swap2_3(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	unsigned short int sv;

	//声明返回值局部变量，若为基本类型赋默认值
	uint16_t returnValue = 0;

	//值序列相关
	unsigned short int valueList_0[]={0xFFFF};
	unsigned int listLength_0=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=3;
	//初始化各桩函数调用计数器
	parse_apple_call_counter = 0;
	parse_strength_call_counter = 0;
	parse_ext_call_counter = 0;
	parse_mime_call_counter = 0;

	aunit_printf("###TEST_TREE_test_swap2_3,false,0\n");
	aunit_printf("#CASE_START_test_swap2_3\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			sv=(unsigned short int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		returnValue = swap2(sv);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_UNSIGNED_SHORT("swap2","returnValue",0xFFFF,returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("parse_apple","parse_apple_call_counter",parse_apple_call_counter)
	OB_INT_EXPR("parse_strength","parse_strength_call_counter",parse_strength_call_counter)
	OB_INT_EXPR("parse_ext","parse_ext_call_counter",parse_ext_call_counter)
	OB_INT_EXPR("parse_mime","parse_mime_call_counter",parse_mime_call_counter)

	aunit_printf("#CASE_END_test_swap2_3\n");
}

void test_swap2_4(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	unsigned short int sv;

	//声明返回值局部变量，若为基本类型赋默认值
	uint16_t returnValue = 0;

	//值序列相关
	unsigned short int valueList_0[]={0x1234};
	unsigned int listLength_0=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=4;
	//初始化各桩函数调用计数器
	parse_apple_call_counter = 0;
	parse_strength_call_counter = 0;
	parse_ext_call_counter = 0;
	parse_mime_call_counter = 0;

	aunit_printf("###TEST_TREE_test_swap2_4,false,0\n");
	aunit_printf("#CASE_START_test_swap2_4\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			sv=(unsigned short int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		returnValue = swap2(sv);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_UNSIGNED_SHORT("swap2","returnValue",0x3412,returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("parse_apple","parse_apple_call_counter",parse_apple_call_counter)
	OB_INT_EXPR("parse_strength","parse_strength_call_counter",parse_strength_call_counter)
	OB_INT_EXPR("parse_ext","parse_ext_call_counter",parse_ext_call_counter)
	OB_INT_EXPR("parse_mime","parse_mime_call_counter",parse_mime_call_counter)

	aunit_printf("#CASE_END_test_swap2_4\n");
}

void test_swap2_5(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	unsigned short int sv;

	//声明返回值局部变量，若为基本类型赋默认值
	uint16_t returnValue = 0;

	//值序列相关
	unsigned short int valueList_0[]={0x5678};
	unsigned int listLength_0=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=5;
	//初始化各桩函数调用计数器
	parse_apple_call_counter = 0;
	parse_strength_call_counter = 0;
	parse_ext_call_counter = 0;
	parse_mime_call_counter = 0;

	aunit_printf("###TEST_TREE_test_swap2_5,false,0\n");
	aunit_printf("#CASE_START_test_swap2_5\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			sv=(unsigned short int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		returnValue = swap2(sv);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_UNSIGNED_SHORT("swap2","returnValue",0x7856,returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("parse_apple","parse_apple_call_counter",parse_apple_call_counter)
	OB_INT_EXPR("parse_strength","parse_strength_call_counter",parse_strength_call_counter)
	OB_INT_EXPR("parse_ext","parse_ext_call_counter",parse_ext_call_counter)
	OB_INT_EXPR("parse_mime","parse_mime_call_counter",parse_mime_call_counter)

	aunit_printf("#CASE_END_test_swap2_5\n");
}

void test_swap2_6(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	unsigned short int sv;

	//声明返回值局部变量，若为基本类型赋默认值
	uint16_t returnValue = 0;

	//值序列相关
	unsigned short int valueList_0[]={0x9ABC};
	unsigned int listLength_0=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=6;
	//初始化各桩函数调用计数器
	parse_apple_call_counter = 0;
	parse_strength_call_counter = 0;
	parse_ext_call_counter = 0;
	parse_mime_call_counter = 0;

	aunit_printf("###TEST_TREE_test_swap2_6,false,0\n");
	aunit_printf("#CASE_START_test_swap2_6\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			sv=(unsigned short int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		returnValue = swap2(sv);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_UNSIGNED_SHORT("swap2","returnValue",0xBC9A,returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("parse_apple","parse_apple_call_counter",parse_apple_call_counter)
	OB_INT_EXPR("parse_strength","parse_strength_call_counter",parse_strength_call_counter)
	OB_INT_EXPR("parse_ext","parse_ext_call_counter",parse_ext_call_counter)
	OB_INT_EXPR("parse_mime","parse_mime_call_counter",parse_mime_call_counter)

	aunit_printf("#CASE_END_test_swap2_6\n");
}

void test_swap2_7(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	unsigned short int sv;

	//声明返回值局部变量，若为基本类型赋默认值
	uint16_t returnValue = 0;

	//值序列相关
	unsigned short int valueList_0[]={0xDEAD};
	unsigned int listLength_0=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=7;
	//初始化各桩函数调用计数器
	parse_apple_call_counter = 0;
	parse_strength_call_counter = 0;
	parse_ext_call_counter = 0;
	parse_mime_call_counter = 0;

	aunit_printf("###TEST_TREE_test_swap2_7,false,0\n");
	aunit_printf("#CASE_START_test_swap2_7\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			sv=(unsigned short int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		returnValue = swap2(sv);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_UNSIGNED_SHORT("swap2","returnValue",0xADDE,returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("parse_apple","parse_apple_call_counter",parse_apple_call_counter)
	OB_INT_EXPR("parse_strength","parse_strength_call_counter",parse_strength_call_counter)
	OB_INT_EXPR("parse_ext","parse_ext_call_counter",parse_ext_call_counter)
	OB_INT_EXPR("parse_mime","parse_mime_call_counter",parse_mime_call_counter)

	aunit_printf("#CASE_END_test_swap2_7\n");
}

void aunit_test_func_run(int caseIndex){

	test_swap2_up();

	switch(caseIndex){
	case 1:
		test_swap2_1();
		break;
	case 2:
		test_swap2_2();
		break;
	case 3:
		test_swap2_3();
		break;
	case 4:
		test_swap2_4();
		break;
	case 5:
		test_swap2_5();
		break;
	case 6:
		test_swap2_6();
		break;
	case 7:
		test_swap2_7();
		break;
	default:
		abnormal_swap2_case(caseIndex);
		break;
	}

	test_swap2_down();
}

