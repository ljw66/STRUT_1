void test_kvsprintf_up(void);
void test_kvsprintf_down(void);


void test_kvsprintf_up(void){

	aunit_printf("\n##FUNCTION_START_kvsprintf\n");
 }

void test_kvsprintf_down(void){
	aunit_printf("\n##FUNCTION_END_kvsprintf\n");
 }



void abnormal_kvsprintf_case(int index);

void abnormal_kvsprintf_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_kvsprintf_1(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	kstring_t *s;
	char *fmt;
	void *ap;

	//声明返回值局部变量，若为基本类型赋默认值
	int returnValue = 0;

	//值序列相关
	char *valueList_0[]={(char *)"abc"};
	unsigned int listLength_0=1;
	unsigned int valueList_1[]={0};
	unsigned int listLength_1=1;
	unsigned int valueList_2[]={0};
	unsigned int listLength_2=1;
	char *valueList_3[]={(char *)0};
	unsigned int listLength_3=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=1;
	//初始化各桩函数调用计数器
	va_copy_call_counter = 0;
	realloc_call_counter = 0;
	vsnprintf_call_counter = 0;

	aunit_printf("###TEST_TREE_test_kvsprintf_1,false,0\n");
	aunit_printf("#CASE_START_test_kvsprintf_1\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			fmt=(char *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			(s_PTRTO[0]).m=(unsigned int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			(s_PTRTO[0]).l=(unsigned int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			(s_PTRTO[0]).s=(char *)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		returnValue = kvsprintf(s,fmt,ap);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("kvsprintf","returnValue",0,returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("va_copy","va_copy_call_counter",va_copy_call_counter)
	OB_INT_EXPR("realloc","realloc_call_counter",realloc_call_counter)
	OB_INT_EXPR("vsnprintf","vsnprintf_call_counter",vsnprintf_call_counter)

	aunit_printf("#CASE_END_test_kvsprintf_1\n");
}

void test_kvsprintf_2(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	kstring_t *s;
	char *fmt;
	void *ap;

	//声明返回值局部变量，若为基本类型赋默认值
	int returnValue = 0;

	//值序列相关
	char *valueList_0[]={(char *)"test"};
	unsigned int listLength_0=1;
	unsigned int valueList_1[]={10};
	unsigned int listLength_1=1;
	unsigned int valueList_2[]={5};
	unsigned int listLength_2=1;
	char *valueList_3[]={(char *)"hello"};
	unsigned int listLength_3=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=2;
	//初始化各桩函数调用计数器
	va_copy_call_counter = 0;
	realloc_call_counter = 0;
	vsnprintf_call_counter = 0;

	aunit_printf("###TEST_TREE_test_kvsprintf_2,false,0\n");
	aunit_printf("#CASE_START_test_kvsprintf_2\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			fmt=(char *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			(s_PTRTO[0]).m=(unsigned int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			(s_PTRTO[0]).l=(unsigned int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			(s_PTRTO[0]).s=(char *)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		returnValue = kvsprintf(s,fmt,ap);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("kvsprintf","returnValue",4,returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("va_copy","va_copy_call_counter",va_copy_call_counter)
	OB_INT_EXPR("realloc","realloc_call_counter",realloc_call_counter)
	OB_INT_EXPR("vsnprintf","vsnprintf_call_counter",vsnprintf_call_counter)

	aunit_printf("#CASE_END_test_kvsprintf_2\n");
}

void test_kvsprintf_3(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	kstring_t *s;
	char *fmt;
	void *ap;

	//声明返回值局部变量，若为基本类型赋默认值
	int returnValue = 0;

	//值序列相关
	char *valueList_0[]={(char *)"overflow"};
	unsigned int listLength_0=1;
	unsigned int valueList_1[]={10};
	unsigned int listLength_1=1;
	unsigned int valueList_2[]={5};
	unsigned int listLength_2=1;
	char *valueList_3[]={(char *)"hello"};
	unsigned int listLength_3=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=3;
	//初始化各桩函数调用计数器
	va_copy_call_counter = 0;
	realloc_call_counter = 0;
	vsnprintf_call_counter = 0;

	aunit_printf("###TEST_TREE_test_kvsprintf_3,false,0\n");
	aunit_printf("#CASE_START_test_kvsprintf_3\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			fmt=(char *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			(s_PTRTO[0]).m=(unsigned int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			(s_PTRTO[0]).l=(unsigned int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			(s_PTRTO[0]).s=(char *)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		returnValue = kvsprintf(s,fmt,ap);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("kvsprintf","returnValue",15,returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("va_copy","va_copy_call_counter",va_copy_call_counter)
	OB_INT_EXPR("realloc","realloc_call_counter",realloc_call_counter)
	OB_INT_EXPR("vsnprintf","vsnprintf_call_counter",vsnprintf_call_counter)

	aunit_printf("#CASE_END_test_kvsprintf_3\n");
}

void test_kvsprintf_4(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	kstring_t *s;
	char *fmt;
	void *ap;

	//声明返回值局部变量，若为基本类型赋默认值
	int returnValue = 0;

	//值序列相关
	char *valueList_0[]={(char *)"equal"};
	unsigned int listLength_0=1;
	unsigned int valueList_1[]={10};
	unsigned int listLength_1=1;
	unsigned int valueList_2[]={5};
	unsigned int listLength_2=1;
	char *valueList_3[]={(char *)"hello"};
	unsigned int listLength_3=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=4;
	//初始化各桩函数调用计数器
	va_copy_call_counter = 0;
	realloc_call_counter = 0;
	vsnprintf_call_counter = 0;

	aunit_printf("###TEST_TREE_test_kvsprintf_4,false,0\n");
	aunit_printf("#CASE_START_test_kvsprintf_4\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			fmt=(char *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			(s_PTRTO[0]).m=(unsigned int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			(s_PTRTO[0]).l=(unsigned int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			(s_PTRTO[0]).s=(char *)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		returnValue = kvsprintf(s,fmt,ap);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("kvsprintf","returnValue",5,returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("va_copy","va_copy_call_counter",va_copy_call_counter)
	OB_INT_EXPR("realloc","realloc_call_counter",realloc_call_counter)
	OB_INT_EXPR("vsnprintf","vsnprintf_call_counter",vsnprintf_call_counter)

	aunit_printf("#CASE_END_test_kvsprintf_4\n");
}

void test_kvsprintf_5(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	kstring_t *s;
	char *fmt;
	void *ap;

	//声明返回值局部变量，若为基本类型赋默认值
	int returnValue = 0;

	//值序列相关
	char *valueList_0[]={(char *)"zero"};
	unsigned int listLength_0=1;
	unsigned int valueList_1[]={10};
	unsigned int listLength_1=1;
	unsigned int valueList_2[]={0};
	unsigned int listLength_2=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=5;
	//初始化各桩函数调用计数器
	va_copy_call_counter = 0;
	realloc_call_counter = 0;
	vsnprintf_call_counter = 0;

	aunit_printf("###TEST_TREE_test_kvsprintf_5,false,0\n");
	aunit_printf("#CASE_START_test_kvsprintf_5\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			fmt=(char *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			(s_PTRTO[0]).m=(unsigned int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			(s_PTRTO[0]).l=(unsigned int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		returnValue = kvsprintf(s,fmt,ap);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("kvsprintf","returnValue",4,returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("va_copy","va_copy_call_counter",va_copy_call_counter)
	OB_INT_EXPR("realloc","realloc_call_counter",realloc_call_counter)
	OB_INT_EXPR("vsnprintf","vsnprintf_call_counter",vsnprintf_call_counter)

	aunit_printf("#CASE_END_test_kvsprintf_5\n");
}

void test_kvsprintf_6(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	kstring_t *s;
	char *fmt;
	void *ap;

	//声明返回值局部变量，若为基本类型赋默认值
	int returnValue = 0;

	//值序列相关
	char *valueList_0[]={(char *)"non-zero"};
	unsigned int listLength_0=1;
	unsigned int valueList_1[]={0};
	unsigned int listLength_1=1;
	unsigned int valueList_2[]={5};
	unsigned int listLength_2=1;
	char *valueList_3[]={(char *)"hello"};
	unsigned int listLength_3=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=6;
	//初始化各桩函数调用计数器
	va_copy_call_counter = 0;
	realloc_call_counter = 0;
	vsnprintf_call_counter = 0;

	aunit_printf("###TEST_TREE_test_kvsprintf_6,false,0\n");
	aunit_printf("#CASE_START_test_kvsprintf_6\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			fmt=(char *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			(s_PTRTO[0]).m=(unsigned int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			(s_PTRTO[0]).l=(unsigned int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			(s_PTRTO[0]).s=(char *)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		returnValue = kvsprintf(s,fmt,ap);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("kvsprintf","returnValue",9,returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("va_copy","va_copy_call_counter",va_copy_call_counter)
	OB_INT_EXPR("realloc","realloc_call_counter",realloc_call_counter)
	OB_INT_EXPR("vsnprintf","vsnprintf_call_counter",vsnprintf_call_counter)

	aunit_printf("#CASE_END_test_kvsprintf_6\n");
}

void aunit_test_func_run(int caseIndex){

	test_kvsprintf_up();

	switch(caseIndex){
	case 1:
		test_kvsprintf_1();
		break;
	case 2:
		test_kvsprintf_2();
		break;
	case 3:
		test_kvsprintf_3();
		break;
	case 4:
		test_kvsprintf_4();
		break;
	case 5:
		test_kvsprintf_5();
		break;
	case 6:
		test_kvsprintf_6();
		break;
	default:
		abnormal_kvsprintf_case(caseIndex);
		break;
	}

	test_kvsprintf_down();
}

