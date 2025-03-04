void test_mdebug_up(void);
void test_mdebug_down(void);


void test_mdebug_up(void){

	aunit_printf("\n##FUNCTION_START_mdebug\n");
 }

void test_mdebug_down(void){
	aunit_printf("\n##FUNCTION_END_mdebug\n");
 }



void abnormal_mdebug_case(int index);

void abnormal_mdebug_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_mdebug_1(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	unsigned int offset;
	char *str;
	unsigned int len;


	//值序列相关
	char *valueList_0[]={(char *)"Hello, World!"};
	unsigned int listLength_0=1;
	unsigned int valueList_1[]={100};
	unsigned int listLength_1=1;
	unsigned int valueList_2[]={13};
	unsigned int listLength_2=1;
	FILE *valueList_3[]={(FILE *)stderr_PTRTO};
	unsigned int listLength_3=1;
	unsigned int valueList_4[]={0};
	unsigned int listLength_4=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	unsigned char useLast_4=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=1;
	//初始化各桩函数调用计数器
	file_showstr_call_counter = 0;
	fputc_call_counter = 0;
	fprintf_call_counter = 0;

	aunit_printf("###TEST_TREE_test_mdebug_1,false,0\n");
	aunit_printf("#CASE_START_test_mdebug_1\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			str=(char *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			offset=(unsigned int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			len=(unsigned int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			stderr=(FILE *)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(stderr_PTRTO[0]).__the_contents_of_FILE_are_not_defined=(unsigned int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		mdebug(offset,str,len);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("file_showstr","file_showstr_call_counter",file_showstr_call_counter)
	OB_INT_EXPR("fputc","fputc_call_counter",fputc_call_counter)
	OB_INT_EXPR("fprintf","fprintf_call_counter",fprintf_call_counter)

	aunit_printf("#CASE_END_test_mdebug_1\n");
}

void test_mdebug_2(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	unsigned int offset;
	char *str;
	unsigned int len;


	//值序列相关
	unsigned int valueList_0[]={50};
	unsigned int listLength_0=1;
	unsigned int valueList_1[]={0};
	unsigned int listLength_1=1;
	FILE *valueList_2[]={(FILE *)stderr_PTRTO};
	unsigned int listLength_2=1;
	unsigned int valueList_3[]={0};
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
	file_showstr_call_counter = 0;
	fputc_call_counter = 0;
	fprintf_call_counter = 0;

	aunit_printf("###TEST_TREE_test_mdebug_2,false,0\n");
	aunit_printf("#CASE_START_test_mdebug_2\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			offset=(unsigned int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			len=(unsigned int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			stderr=(FILE *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			(stderr_PTRTO[0]).__the_contents_of_FILE_are_not_defined=(unsigned int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		mdebug(offset,str,len);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("file_showstr","file_showstr_call_counter",file_showstr_call_counter)
	OB_INT_EXPR("fputc","fputc_call_counter",fputc_call_counter)
	OB_INT_EXPR("fprintf","fprintf_call_counter",fprintf_call_counter)

	aunit_printf("#CASE_END_test_mdebug_2\n");
}

void test_mdebug_3(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	unsigned int offset;
	char *str;
	unsigned int len;


	//值序列相关
	char *valueList_0[]={(char *)"This is a long string for testing purposes."};
	unsigned int listLength_0=1;
	unsigned int valueList_1[]={4294967295};
	unsigned int listLength_1=1;
	unsigned int valueList_2[]={40};
	unsigned int listLength_2=1;
	FILE *valueList_3[]={(FILE *)stderr_PTRTO};
	unsigned int listLength_3=1;
	unsigned int valueList_4[]={0};
	unsigned int listLength_4=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	unsigned char useLast_4=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=3;
	//初始化各桩函数调用计数器
	file_showstr_call_counter = 0;
	fputc_call_counter = 0;
	fprintf_call_counter = 0;

	aunit_printf("###TEST_TREE_test_mdebug_3,false,0\n");
	aunit_printf("#CASE_START_test_mdebug_3\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			str=(char *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			offset=(unsigned int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			len=(unsigned int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			stderr=(FILE *)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(stderr_PTRTO[0]).__the_contents_of_FILE_are_not_defined=(unsigned int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		mdebug(offset,str,len);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("file_showstr","file_showstr_call_counter",file_showstr_call_counter)
	OB_INT_EXPR("fputc","fputc_call_counter",fputc_call_counter)
	OB_INT_EXPR("fprintf","fprintf_call_counter",fprintf_call_counter)

	aunit_printf("#CASE_END_test_mdebug_3\n");
}

void test_mdebug_4(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	unsigned int offset;
	char *str;
	unsigned int len;


	//值序列相关
	unsigned int valueList_0[]={0};
	unsigned int listLength_0=1;
	unsigned int valueList_1[]={10};
	unsigned int listLength_1=1;
	FILE *valueList_2[]={(FILE *)stderr_PTRTO};
	unsigned int listLength_2=1;
	unsigned int valueList_3[]={0};
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
	file_showstr_call_counter = 0;
	fputc_call_counter = 0;
	fprintf_call_counter = 0;

	aunit_printf("###TEST_TREE_test_mdebug_4,false,0\n");
	aunit_printf("#CASE_START_test_mdebug_4\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			offset=(unsigned int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			len=(unsigned int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			stderr=(FILE *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			(stderr_PTRTO[0]).__the_contents_of_FILE_are_not_defined=(unsigned int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		mdebug(offset,str,len);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("file_showstr","file_showstr_call_counter",file_showstr_call_counter)
	OB_INT_EXPR("fputc","fputc_call_counter",fputc_call_counter)
	OB_INT_EXPR("fprintf","fprintf_call_counter",fprintf_call_counter)

	aunit_printf("#CASE_END_test_mdebug_4\n");
}

void aunit_test_func_run(int caseIndex){

	test_mdebug_up();

	switch(caseIndex){
	case 1:
		test_mdebug_1();
		break;
	case 2:
		test_mdebug_2();
		break;
	case 3:
		test_mdebug_3();
		break;
	case 4:
		test_mdebug_4();
		break;
	default:
		abnormal_mdebug_case(caseIndex);
		break;
	}

	test_mdebug_down();
}

