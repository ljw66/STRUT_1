void test_goodchar_up(void);
void test_goodchar_down(void);


void test_goodchar_up(void){

	aunit_printf("\n##FUNCTION_START_goodchar\n");
 }

void test_goodchar_down(void){
	aunit_printf("\n##FUNCTION_END_goodchar\n");
 }



void abnormal_goodchar_case(int index);

void abnormal_goodchar_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_goodchar_1(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	unsigned char x;
	char *extra;

	//声明返回值局部变量，若为基本类型赋默认值
	int returnValue = 0;

	//值序列相关
	char *valueList_0[]={(char *)"xyz"};
	unsigned int listLength_0=1;
	unsigned char valueList_1[]={'b'};
	unsigned int listLength_1=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=1;
	//初始化各桩函数调用计数器
	parse_apple_call_counter = 0;
	parse_strength_call_counter = 0;
	isalnum_call_counter = 0;
	parse_ext_call_counter = 0;
	strchr_call_counter = 0;
	parse_mime_call_counter = 0;
	isascii_call_counter = 0;

	aunit_printf("###TEST_TREE_test_goodchar_1,false,0\n");
	aunit_printf("#CASE_START_test_goodchar_1\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			extra=(char *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			x=(unsigned char)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		returnValue = goodchar(x,extra);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("goodchar","returnValue",1,returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("parse_apple","parse_apple_call_counter",parse_apple_call_counter)
	OB_INT_EXPR("parse_strength","parse_strength_call_counter",parse_strength_call_counter)
	OB_INT_EXPR("isalnum","isalnum_call_counter",isalnum_call_counter)
	OB_INT_EXPR("parse_ext","parse_ext_call_counter",parse_ext_call_counter)
	OB_INT_EXPR("strchr","strchr_call_counter",strchr_call_counter)
	OB_INT_EXPR("parse_mime","parse_mime_call_counter",parse_mime_call_counter)
	OB_INT_EXPR("isascii","isascii_call_counter",isascii_call_counter)

	aunit_printf("#CASE_END_test_goodchar_1\n");
}

void test_goodchar_2(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	unsigned char x;
	char *extra;

	//声明返回值局部变量，若为基本类型赋默认值
	int returnValue = 0;

	//值序列相关
	char *valueList_0[]={(char *)"!@#"};
	unsigned int listLength_0=1;
	unsigned char valueList_1[]={'!'};
	unsigned int listLength_1=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=2;
	//初始化各桩函数调用计数器
	parse_apple_call_counter = 0;
	parse_strength_call_counter = 0;
	isalnum_call_counter = 0;
	parse_ext_call_counter = 0;
	strchr_call_counter = 0;
	parse_mime_call_counter = 0;
	isascii_call_counter = 0;

	aunit_printf("###TEST_TREE_test_goodchar_2,false,0\n");
	aunit_printf("#CASE_START_test_goodchar_2\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			extra=(char *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			x=(unsigned char)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		returnValue = goodchar(x,extra);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("goodchar","returnValue",1,returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("parse_apple","parse_apple_call_counter",parse_apple_call_counter)
	OB_INT_EXPR("parse_strength","parse_strength_call_counter",parse_strength_call_counter)
	OB_INT_EXPR("isalnum","isalnum_call_counter",isalnum_call_counter)
	OB_INT_EXPR("parse_ext","parse_ext_call_counter",parse_ext_call_counter)
	OB_INT_EXPR("strchr","strchr_call_counter",strchr_call_counter)
	OB_INT_EXPR("parse_mime","parse_mime_call_counter",parse_mime_call_counter)
	OB_INT_EXPR("isascii","isascii_call_counter",isascii_call_counter)

	aunit_printf("#CASE_END_test_goodchar_2\n");
}

void test_goodchar_3(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	unsigned char x;
	char *extra;

	//声明返回值局部变量，若为基本类型赋默认值
	int returnValue = 0;

	//值序列相关
	char *valueList_0[]={(char *)"abc"};
	unsigned int listLength_0=1;
	unsigned char valueList_1[]={'?'};
	unsigned int listLength_1=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=3;
	//初始化各桩函数调用计数器
	parse_apple_call_counter = 0;
	parse_strength_call_counter = 0;
	isalnum_call_counter = 0;
	parse_ext_call_counter = 0;
	strchr_call_counter = 0;
	parse_mime_call_counter = 0;
	isascii_call_counter = 0;

	aunit_printf("###TEST_TREE_test_goodchar_3,false,0\n");
	aunit_printf("#CASE_START_test_goodchar_3\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			extra=(char *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			x=(unsigned char)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		returnValue = goodchar(x,extra);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("goodchar","returnValue",0,returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("parse_apple","parse_apple_call_counter",parse_apple_call_counter)
	OB_INT_EXPR("parse_strength","parse_strength_call_counter",parse_strength_call_counter)
	OB_INT_EXPR("isalnum","isalnum_call_counter",isalnum_call_counter)
	OB_INT_EXPR("parse_ext","parse_ext_call_counter",parse_ext_call_counter)
	OB_INT_EXPR("strchr","strchr_call_counter",strchr_call_counter)
	OB_INT_EXPR("parse_mime","parse_mime_call_counter",parse_mime_call_counter)
	OB_INT_EXPR("isascii","isascii_call_counter",isascii_call_counter)

	aunit_printf("#CASE_END_test_goodchar_3\n");
}

void test_goodchar_4(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	unsigned char x;
	char *extra;

	//声明返回值局部变量，若为基本类型赋默认值
	int returnValue = 0;

	//值序列相关
	char *valueList_0[]={(char *)"abc"};
	unsigned int listLength_0=1;
	unsigned char valueList_1[]={'$'};
	unsigned int listLength_1=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=4;
	//初始化各桩函数调用计数器
	parse_apple_call_counter = 0;
	parse_strength_call_counter = 0;
	isalnum_call_counter = 0;
	parse_ext_call_counter = 0;
	strchr_call_counter = 0;
	parse_mime_call_counter = 0;
	isascii_call_counter = 0;

	aunit_printf("###TEST_TREE_test_goodchar_4,false,0\n");
	aunit_printf("#CASE_START_test_goodchar_4\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			extra=(char *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			x=(unsigned char)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		returnValue = goodchar(x,extra);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("goodchar","returnValue",0,returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("parse_apple","parse_apple_call_counter",parse_apple_call_counter)
	OB_INT_EXPR("parse_strength","parse_strength_call_counter",parse_strength_call_counter)
	OB_INT_EXPR("isalnum","isalnum_call_counter",isalnum_call_counter)
	OB_INT_EXPR("parse_ext","parse_ext_call_counter",parse_ext_call_counter)
	OB_INT_EXPR("strchr","strchr_call_counter",strchr_call_counter)
	OB_INT_EXPR("parse_mime","parse_mime_call_counter",parse_mime_call_counter)
	OB_INT_EXPR("isascii","isascii_call_counter",isascii_call_counter)

	aunit_printf("#CASE_END_test_goodchar_4\n");
}

void aunit_test_func_run(int caseIndex){

	test_goodchar_up();

	switch(caseIndex){
	case 1:
		test_goodchar_1();
		break;
	case 2:
		test_goodchar_2();
		break;
	case 3:
		test_goodchar_3();
		break;
	case 4:
		test_goodchar_4();
		break;
	default:
		abnormal_goodchar_case(caseIndex);
		break;
	}

	test_goodchar_down();
}

