void test_bsUuDecode_up(void);
void test_bsUuDecode_down(void);


void test_bsUuDecode_up(void){

	aunit_printf("\n##FUNCTION_START_bsUuDecode\n");
 }

void test_bsUuDecode_down(void){
	aunit_printf("\n##FUNCTION_END_bsUuDecode\n");
 }



void abnormal_bsUuDecode_case(int index);

void abnormal_bsUuDecode_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_bsUuDecode_1(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	struct bStream *sInp;
	int *badlines;

	//声明返回值局部变量，若为基本类型赋默认值
	struct bStream *returnValue = 0;

	//值序列相关
	int *valueList_0[]={(int *)badlines_PTRTO};
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
	malloc_call_counter = 0;
	bfromcstr_call_counter = 0;
	bsopen_call_counter = 0;
	bsUuDecodePart_call_counter = 0;
	free_call_counter = 0;
	bdestroy_call_counter = 0;

	aunit_printf("###TEST_TREE_test_bsUuDecode_1,false,0\n");
	aunit_printf("#CASE_START_test_bsUuDecode_1\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			badlines=(int *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			badlines_PTRTO[0]=(int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		returnValue = bsUuDecode(sInp,badlines);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_LONG("bsUuDecode","returnValue",1,returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("malloc","malloc_call_counter",malloc_call_counter)
	OB_INT_EXPR("bfromcstr","bfromcstr_call_counter",bfromcstr_call_counter)
	OB_INT_EXPR("bsopen","bsopen_call_counter",bsopen_call_counter)
	OB_INT_EXPR("bsUuDecodePart","bsUuDecodePart_call_counter",bsUuDecodePart_call_counter)
	OB_INT_EXPR("free","free_call_counter",free_call_counter)
	OB_INT_EXPR("bdestroy","bdestroy_call_counter",bdestroy_call_counter)

	aunit_printf("#CASE_END_test_bsUuDecode_1\n");
}

void test_bsUuDecode_2(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	struct bStream *sInp;
	int *badlines;

	//声明返回值局部变量，若为基本类型赋默认值
	struct bStream *returnValue = 0;

	//值序列相关
	int *valueList_0[]={(int *)badlines_PTRTO};
	unsigned int listLength_0=1;
	int valueList_1[]={0};
	unsigned int listLength_1=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=2;
	//初始化各桩函数调用计数器
	malloc_call_counter = 0;
	bfromcstr_call_counter = 0;
	bsopen_call_counter = 0;
	bsUuDecodePart_call_counter = 0;
	free_call_counter = 0;
	bdestroy_call_counter = 0;

	aunit_printf("###TEST_TREE_test_bsUuDecode_2,false,0\n");
	aunit_printf("#CASE_START_test_bsUuDecode_2\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			badlines=(int *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			badlines_PTRTO[0]=(int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		returnValue = bsUuDecode(sInp,badlines);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_LONG("bsUuDecode","returnValue",0,returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("malloc","malloc_call_counter",malloc_call_counter)
	OB_INT_EXPR("bfromcstr","bfromcstr_call_counter",bfromcstr_call_counter)
	OB_INT_EXPR("bsopen","bsopen_call_counter",bsopen_call_counter)
	OB_INT_EXPR("bsUuDecodePart","bsUuDecodePart_call_counter",bsUuDecodePart_call_counter)
	OB_INT_EXPR("free","free_call_counter",free_call_counter)
	OB_INT_EXPR("bdestroy","bdestroy_call_counter",bdestroy_call_counter)

	aunit_printf("#CASE_END_test_bsUuDecode_2\n");
}

void test_bsUuDecode_3(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	struct bStream *sInp;
	int *badlines;

	//声明返回值局部变量，若为基本类型赋默认值
	struct bStream *returnValue = 0;

	//值序列相关
	int *valueList_0[]={(int *)badlines_PTRTO};
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
	malloc_call_counter = 0;
	bfromcstr_call_counter = 0;
	bsopen_call_counter = 0;
	bsUuDecodePart_call_counter = 0;
	free_call_counter = 0;
	bdestroy_call_counter = 0;

	aunit_printf("###TEST_TREE_test_bsUuDecode_3,false,0\n");
	aunit_printf("#CASE_START_test_bsUuDecode_3\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			badlines=(int *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			badlines_PTRTO[0]=(int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		returnValue = bsUuDecode(sInp,badlines);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_LONG("bsUuDecode","returnValue",0,returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("malloc","malloc_call_counter",malloc_call_counter)
	OB_INT_EXPR("bfromcstr","bfromcstr_call_counter",bfromcstr_call_counter)
	OB_INT_EXPR("bsopen","bsopen_call_counter",bsopen_call_counter)
	OB_INT_EXPR("bsUuDecodePart","bsUuDecodePart_call_counter",bsUuDecodePart_call_counter)
	OB_INT_EXPR("free","free_call_counter",free_call_counter)
	OB_INT_EXPR("bdestroy","bdestroy_call_counter",bdestroy_call_counter)

	aunit_printf("#CASE_END_test_bsUuDecode_3\n");
}

void test_bsUuDecode_4(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	struct bStream *sInp;
	int *badlines;

	//声明返回值局部变量，若为基本类型赋默认值
	struct bStream *returnValue = 0;

	//值序列相关
	int *valueList_0[]={(int *)badlines_PTRTO};
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
	malloc_call_counter = 0;
	bfromcstr_call_counter = 0;
	bsopen_call_counter = 0;
	bsUuDecodePart_call_counter = 0;
	free_call_counter = 0;
	bdestroy_call_counter = 0;

	aunit_printf("###TEST_TREE_test_bsUuDecode_4,false,0\n");
	aunit_printf("#CASE_START_test_bsUuDecode_4\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			badlines=(int *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			badlines_PTRTO[0]=(int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		returnValue = bsUuDecode(sInp,badlines);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_LONG("bsUuDecode","returnValue",0,returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("malloc","malloc_call_counter",malloc_call_counter)
	OB_INT_EXPR("bfromcstr","bfromcstr_call_counter",bfromcstr_call_counter)
	OB_INT_EXPR("bsopen","bsopen_call_counter",bsopen_call_counter)
	OB_INT_EXPR("bsUuDecodePart","bsUuDecodePart_call_counter",bsUuDecodePart_call_counter)
	OB_INT_EXPR("free","free_call_counter",free_call_counter)
	OB_INT_EXPR("bdestroy","bdestroy_call_counter",bdestroy_call_counter)

	aunit_printf("#CASE_END_test_bsUuDecode_4\n");
}

void test_bsUuDecode_5(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	struct bStream *sInp;
	int *badlines;

	//声明返回值局部变量，若为基本类型赋默认值
	struct bStream *returnValue = 0;

	//值序列相关
	int *valueList_0[]={(int *)badlines_PTRTO};
	unsigned int listLength_0=1;
	int valueList_1[]={0};
	unsigned int listLength_1=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=5;
	//初始化各桩函数调用计数器
	malloc_call_counter = 0;
	bfromcstr_call_counter = 0;
	bsopen_call_counter = 0;
	bsUuDecodePart_call_counter = 0;
	free_call_counter = 0;
	bdestroy_call_counter = 0;

	aunit_printf("###TEST_TREE_test_bsUuDecode_5,false,0\n");
	aunit_printf("#CASE_START_test_bsUuDecode_5\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			badlines=(int *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			badlines_PTRTO[0]=(int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		returnValue = bsUuDecode(sInp,badlines);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_LONG("bsUuDecode","returnValue",0,returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("malloc","malloc_call_counter",malloc_call_counter)
	OB_INT_EXPR("bfromcstr","bfromcstr_call_counter",bfromcstr_call_counter)
	OB_INT_EXPR("bsopen","bsopen_call_counter",bsopen_call_counter)
	OB_INT_EXPR("bsUuDecodePart","bsUuDecodePart_call_counter",bsUuDecodePart_call_counter)
	OB_INT_EXPR("free","free_call_counter",free_call_counter)
	OB_INT_EXPR("bdestroy","bdestroy_call_counter",bdestroy_call_counter)

	aunit_printf("#CASE_END_test_bsUuDecode_5\n");
}

void test_bsUuDecode_6(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	struct bStream *sInp;
	int *badlines;

	//声明返回值局部变量，若为基本类型赋默认值
	struct bStream *returnValue = 0;

	//值序列相关
	int *valueList_0[]={(int *)badlines_PTRTO};
	unsigned int listLength_0=1;
	int valueList_1[]={1};
	unsigned int listLength_1=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=6;
	//初始化各桩函数调用计数器
	malloc_call_counter = 0;
	bfromcstr_call_counter = 0;
	bsopen_call_counter = 0;
	bsUuDecodePart_call_counter = 0;
	free_call_counter = 0;
	bdestroy_call_counter = 0;

	aunit_printf("###TEST_TREE_test_bsUuDecode_6,false,0\n");
	aunit_printf("#CASE_START_test_bsUuDecode_6\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			badlines=(int *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			badlines_PTRTO[0]=(int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		returnValue = bsUuDecode(sInp,badlines);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_LONG("bsUuDecode","returnValue",1,returnValue)
	TEST_ASSERT_EQUAL_INT("bsUuDecode","badlines[0]",0,badlines[0])

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("malloc","malloc_call_counter",malloc_call_counter)
	OB_INT_EXPR("bfromcstr","bfromcstr_call_counter",bfromcstr_call_counter)
	OB_INT_EXPR("bsopen","bsopen_call_counter",bsopen_call_counter)
	OB_INT_EXPR("bsUuDecodePart","bsUuDecodePart_call_counter",bsUuDecodePart_call_counter)
	OB_INT_EXPR("free","free_call_counter",free_call_counter)
	OB_INT_EXPR("bdestroy","bdestroy_call_counter",bdestroy_call_counter)

	aunit_printf("#CASE_END_test_bsUuDecode_6\n");
}

void aunit_test_func_run(int caseIndex){

	test_bsUuDecode_up();

	switch(caseIndex){
	case 1:
		test_bsUuDecode_1();
		break;
	case 2:
		test_bsUuDecode_2();
		break;
	case 3:
		test_bsUuDecode_3();
		break;
	case 4:
		test_bsUuDecode_4();
		break;
	case 5:
		test_bsUuDecode_5();
		break;
	case 6:
		test_bsUuDecode_6();
		break;
	default:
		abnormal_bsUuDecode_case(caseIndex);
		break;
	}

	test_bsUuDecode_down();
}

