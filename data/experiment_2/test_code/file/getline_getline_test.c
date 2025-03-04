void test_getline_up(void);
void test_getline_down(void);


void test_getline_up(void){

	aunit_printf("\n##FUNCTION_START_getline\n");
 }

void test_getline_down(void){
	aunit_printf("\n##FUNCTION_END_getline\n");
 }



void abnormal_getline_case(int index);

void abnormal_getline_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_getline_1(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	char **buf;
	size_t *bufsiz;
	FILE *fp;

	//声明返回值局部变量，若为基本类型赋默认值
	ssize_t returnValue = 0;

	//值序列相关
	size_t *valueList_0[]={(size_t *)bufsiz_PTRTO};
	unsigned int listLength_0=1;
	FILE *valueList_1[]={(FILE *)fp_PTRTO};
	unsigned int listLength_1=1;
	//*buf is an invalid expression 
	unsigned int valueList_3[]={0};
	unsigned int listLength_3=1;
	unsigned int valueList_4[]={0};
	unsigned int listLength_4=1;
	unsigned int valueList_5[]={1};
	unsigned int listLength_5=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_3=0;
	unsigned char useLast_4=0;
	unsigned char useLast_5=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=1;
	//初始化各桩函数调用计数器
	getdelim_call_counter = 0;

	aunit_printf("###TEST_TREE_test_getline_1,false,0\n");
	aunit_printf("#CASE_START_test_getline_1\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			bufsiz=(size_t *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			fp=(FILE *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			bufsiz_PTRTO[0]=(unsigned int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			bufsiz_PTRTO[1]=(unsigned int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			(fp_PTRTO[0]).__the_contents_of_FILE_are_not_defined=(unsigned int)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		returnValue = getline(buf,bufsiz,fp);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("getline","returnValue",15,returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("getdelim","getdelim_call_counter",getdelim_call_counter)

	aunit_printf("#CASE_END_test_getline_1\n");
}

void test_getline_2(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	char **buf;
	size_t *bufsiz;
	FILE *fp;

	//声明返回值局部变量，若为基本类型赋默认值
	ssize_t returnValue = 0;

	//值序列相关
	size_t *valueList_0[]={(size_t *)bufsiz_PTRTO};
	unsigned int listLength_0=1;
	FILE *valueList_1[]={(FILE *)fp_PTRTO};
	unsigned int listLength_1=1;
	//*buf is an invalid expression 
	unsigned int valueList_3[]={0};
	unsigned int listLength_3=1;
	unsigned int valueList_4[]={0};
	unsigned int listLength_4=1;
	unsigned int valueList_5[]={2};
	unsigned int listLength_5=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_3=0;
	unsigned char useLast_4=0;
	unsigned char useLast_5=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=2;
	//初始化各桩函数调用计数器
	getdelim_call_counter = 0;

	aunit_printf("###TEST_TREE_test_getline_2,false,0\n");
	aunit_printf("#CASE_START_test_getline_2\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			bufsiz=(size_t *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			fp=(FILE *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			bufsiz_PTRTO[0]=(unsigned int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			bufsiz_PTRTO[1]=(unsigned int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			(fp_PTRTO[0]).__the_contents_of_FILE_are_not_defined=(unsigned int)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		returnValue = getline(buf,bufsiz,fp);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("getline","returnValue",-1,returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("getdelim","getdelim_call_counter",getdelim_call_counter)

	aunit_printf("#CASE_END_test_getline_2\n");
}

void test_getline_3(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	char **buf;
	size_t *bufsiz;
	FILE *fp;

	//声明返回值局部变量，若为基本类型赋默认值
	ssize_t returnValue = 0;

	//值序列相关
	size_t *valueList_0[]={(size_t *)bufsiz_PTRTO};
	unsigned int listLength_0=1;
	FILE *valueList_1[]={(FILE *)fp_PTRTO};
	unsigned int listLength_1=1;
	//*buf is an invalid expression 
	unsigned int valueList_3[]={0};
	unsigned int listLength_3=1;
	unsigned int valueList_4[]={0};
	unsigned int listLength_4=1;
	unsigned int valueList_5[]={3};
	unsigned int listLength_5=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_3=0;
	unsigned char useLast_4=0;
	unsigned char useLast_5=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=3;
	//初始化各桩函数调用计数器
	getdelim_call_counter = 0;

	aunit_printf("###TEST_TREE_test_getline_3,false,0\n");
	aunit_printf("#CASE_START_test_getline_3\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			bufsiz=(size_t *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			fp=(FILE *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			bufsiz_PTRTO[0]=(unsigned int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			bufsiz_PTRTO[1]=(unsigned int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			(fp_PTRTO[0]).__the_contents_of_FILE_are_not_defined=(unsigned int)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		returnValue = getline(buf,bufsiz,fp);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("getline","returnValue",-1,returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("getdelim","getdelim_call_counter",getdelim_call_counter)

	aunit_printf("#CASE_END_test_getline_3\n");
}

void test_getline_4(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	char **buf;
	size_t *bufsiz;
	FILE *fp;

	//声明返回值局部变量，若为基本类型赋默认值
	ssize_t returnValue = 0;

	//值序列相关
	size_t *valueList_0[]={(size_t *)bufsiz_PTRTO};
	unsigned int listLength_0=1;
	FILE *valueList_1[]={(FILE *)fp_PTRTO};
	unsigned int listLength_1=1;
	//*buf is an invalid expression 
	unsigned int valueList_3[]={0};
	unsigned int listLength_3=1;
	unsigned int valueList_4[]={0};
	unsigned int listLength_4=1;
	unsigned int valueList_5[]={4};
	unsigned int listLength_5=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_3=0;
	unsigned char useLast_4=0;
	unsigned char useLast_5=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=4;
	//初始化各桩函数调用计数器
	getdelim_call_counter = 0;

	aunit_printf("###TEST_TREE_test_getline_4,false,0\n");
	aunit_printf("#CASE_START_test_getline_4\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			bufsiz=(size_t *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			fp=(FILE *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			bufsiz_PTRTO[0]=(unsigned int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			bufsiz_PTRTO[1]=(unsigned int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			(fp_PTRTO[0]).__the_contents_of_FILE_are_not_defined=(unsigned int)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		returnValue = getline(buf,bufsiz,fp);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("getline","returnValue",1,returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("getdelim","getdelim_call_counter",getdelim_call_counter)

	aunit_printf("#CASE_END_test_getline_4\n");
}

void test_getline_5(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	char **buf;
	size_t *bufsiz;
	FILE *fp;

	//声明返回值局部变量，若为基本类型赋默认值
	ssize_t returnValue = 0;

	//值序列相关
	size_t *valueList_0[]={(size_t *)bufsiz_PTRTO};
	unsigned int listLength_0=1;
	FILE *valueList_1[]={(FILE *)fp_PTRTO};
	unsigned int listLength_1=1;
	//*buf is an invalid expression 
	unsigned int valueList_3[]={20};
	unsigned int listLength_3=1;
	unsigned int valueList_4[]={0};
	unsigned int listLength_4=1;
	unsigned int valueList_5[]={5};
	unsigned int listLength_5=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_3=0;
	unsigned char useLast_4=0;
	unsigned char useLast_5=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=5;
	//初始化各桩函数调用计数器
	getdelim_call_counter = 0;

	aunit_printf("###TEST_TREE_test_getline_5,false,0\n");
	aunit_printf("#CASE_START_test_getline_5\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			bufsiz=(size_t *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			fp=(FILE *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			bufsiz_PTRTO[0]=(unsigned int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			bufsiz_PTRTO[1]=(unsigned int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			(fp_PTRTO[0]).__the_contents_of_FILE_are_not_defined=(unsigned int)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		returnValue = getline(buf,bufsiz,fp);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("getline","returnValue",10,returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("getdelim","getdelim_call_counter",getdelim_call_counter)

	aunit_printf("#CASE_END_test_getline_5\n");
}

void aunit_test_func_run(int caseIndex){

	test_getline_up();

	switch(caseIndex){
	case 1:
		test_getline_1();
		break;
	case 2:
		test_getline_2();
		break;
	case 3:
		test_getline_3();
		break;
	case 4:
		test_getline_4();
		break;
	case 5:
		test_getline_5();
		break;
	default:
		abnormal_getline_case(caseIndex);
		break;
	}

	test_getline_down();
}

