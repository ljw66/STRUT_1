void test_file_fmtcheck_up(void);
void test_file_fmtcheck_down(void);


void test_file_fmtcheck_up(void){

	aunit_printf("\n##FUNCTION_START_file_fmtcheck\n");
 }

void test_file_fmtcheck_down(void){
	aunit_printf("\n##FUNCTION_END_file_fmtcheck\n");
 }



void abnormal_file_fmtcheck_case(int index);

void abnormal_file_fmtcheck_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_file_fmtcheck_1(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	struct magic_set *ms;
	char *desc;
	char *def;
	char *file;
	unsigned int line;

	//声明返回值局部变量，若为基本类型赋默认值
	const char *returnValue = 0;

	//值序列相关
	char *valueList_0[]={(char *)"default"};
	unsigned int listLength_0=1;
	unsigned int valueList_1[]={42};
	unsigned int listLength_1=1;
	struct magic_set *valueList_2[]={(struct magic_set *)ms_PTRTO};
	unsigned int listLength_2=1;
	char *valueList_3[]={(char *)"test_file"};
	unsigned int listLength_3=1;
	char *valueList_4[]={(char *)"abc"};
	unsigned int listLength_4=1;
	unsigned int valueList_5[]={0};
	unsigned int listLength_5=1;
	int valueList_6[]={0};
	unsigned int listLength_6=1;
	unsigned int valueList_7[]={0};
	unsigned int listLength_7=1;
	char *valueList_8[]={(char *)0};
	unsigned int listLength_8=1;
	int valueList_9[]={0};
	unsigned int listLength_9=1;
	char *valueList_10[]={(char *)0};
	unsigned int listLength_10=1;
	unsigned int valueList_11[]={0};
	unsigned int listLength_11=1;
	int valueList_12[]={0};
	unsigned int listLength_12=1;
	unsigned short int valueList_13[]={0};
	unsigned int listLength_13=1;
	unsigned int valueList_14[]={0};
	unsigned int listLength_14=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	unsigned char useLast_4=0;
	unsigned char useLast_5=0;
	unsigned char useLast_6=0;
	unsigned char useLast_7=0;
	unsigned char useLast_8=0;
	unsigned char useLast_9=0;
	unsigned char useLast_10=0;
	unsigned char useLast_11=0;
	unsigned char useLast_12=0;
	unsigned char useLast_13=0;
	unsigned char useLast_14=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=1;
	//初始化各桩函数调用计数器
	file_magerror_call_counter = 0;
	strchr_call_counter = 0;
	fmtcheck_call_counter = 0;

	aunit_printf("###TEST_TREE_test_file_fmtcheck_1,false,0\n");
	aunit_printf("#CASE_START_test_file_fmtcheck_1\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			def=(char *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			line=(unsigned int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			ms=(struct magic_set *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			file=(char *)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			desc=(char *)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			(ms_PTRTO[0]).offset=(unsigned int)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			(ms_PTRTO[0]).event_flags=(int)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			(ms_PTRTO[0]).mode=(unsigned int)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		if(aUnItCoUnTeR<listLength_8 || useLast_8){
			(ms_PTRTO[0]).fnamebuf=(char *)valueList_8[aUnItCoUnTeR<listLength_8?aUnItCoUnTeR:listLength_8-1];

		}
		if(aUnItCoUnTeR<listLength_9 || useLast_9){
			(ms_PTRTO[0]).error=(int)valueList_9[aUnItCoUnTeR<listLength_9?aUnItCoUnTeR:listLength_9-1];

		}
		if(aUnItCoUnTeR<listLength_10 || useLast_10){
			(ms_PTRTO[0]).file=(char *)valueList_10[aUnItCoUnTeR<listLength_10?aUnItCoUnTeR:listLength_10-1];

		}
		if(aUnItCoUnTeR<listLength_11 || useLast_11){
			(ms_PTRTO[0]).line=(unsigned int)valueList_11[aUnItCoUnTeR<listLength_11?aUnItCoUnTeR:listLength_11-1];

		}
		if(aUnItCoUnTeR<listLength_12 || useLast_12){
			(ms_PTRTO[0]).flags=(int)valueList_12[aUnItCoUnTeR<listLength_12?aUnItCoUnTeR:listLength_12-1];

		}
		if(aUnItCoUnTeR<listLength_13 || useLast_13){
			(ms_PTRTO[0]).magwarn=(unsigned short int)valueList_13[aUnItCoUnTeR<listLength_13?aUnItCoUnTeR:listLength_13-1];

		}
		if(aUnItCoUnTeR<listLength_14 || useLast_14){
			(ms_PTRTO[0]).eoffset=(unsigned int)valueList_14[aUnItCoUnTeR<listLength_14?aUnItCoUnTeR:listLength_14-1];

		}
		returnValue = file_fmtcheck(ms,desc,def,file,line);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_STRING("file_fmtcheck","returnValue","abc",returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("file_magerror","file_magerror_call_counter",file_magerror_call_counter)
	OB_INT_EXPR("strchr","strchr_call_counter",strchr_call_counter)
	OB_INT_EXPR("fmtcheck","fmtcheck_call_counter",fmtcheck_call_counter)

	aunit_printf("#CASE_END_test_file_fmtcheck_1\n");
}

void test_file_fmtcheck_2(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	struct magic_set *ms;
	char *desc;
	char *def;
	char *file;
	unsigned int line;

	//声明返回值局部变量，若为基本类型赋默认值
	const char *returnValue = 0;

	//值序列相关
	char *valueList_0[]={(char *)"test_file"};
	unsigned int listLength_0=1;
	char *valueList_1[]={(char *)"default"};
	unsigned int listLength_1=1;
	unsigned int valueList_2[]={42};
	unsigned int listLength_2=1;
	struct magic_set *valueList_3[]={(struct magic_set *)ms_PTRTO};
	unsigned int listLength_3=1;
	char *valueList_4[]={(char *)"abc%d"};
	unsigned int listLength_4=1;
	unsigned int valueList_5[]={0};
	unsigned int listLength_5=1;
	int valueList_6[]={0};
	unsigned int listLength_6=1;
	int valueList_7[]={0};
	unsigned int listLength_7=1;
	unsigned int valueList_8[]={0};
	unsigned int listLength_8=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	unsigned char useLast_4=0;
	unsigned char useLast_5=0;
	unsigned char useLast_6=0;
	unsigned char useLast_7=0;
	unsigned char useLast_8=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=2;
	//初始化各桩函数调用计数器
	file_magerror_call_counter = 0;
	strchr_call_counter = 0;
	fmtcheck_call_counter = 0;

	aunit_printf("###TEST_TREE_test_file_fmtcheck_2,false,0\n");
	aunit_printf("#CASE_START_test_file_fmtcheck_2\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			file=(char *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			def=(char *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			line=(unsigned int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			ms=(struct magic_set *)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			desc=(char *)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			(ms_PTRTO[0]).offset=(unsigned int)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			(ms_PTRTO[0]).flags=(int)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			(ms_PTRTO[0]).error=(int)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		if(aUnItCoUnTeR<listLength_8 || useLast_8){
			(ms_PTRTO[0]).eoffset=(unsigned int)valueList_8[aUnItCoUnTeR<listLength_8?aUnItCoUnTeR:listLength_8-1];

		}
		returnValue = file_fmtcheck(ms,desc,def,file,line);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_STRING("file_fmtcheck","returnValue","default",returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("file_magerror","file_magerror_call_counter",file_magerror_call_counter)
	OB_INT_EXPR("strchr","strchr_call_counter",strchr_call_counter)
	OB_INT_EXPR("fmtcheck","fmtcheck_call_counter",fmtcheck_call_counter)

	aunit_printf("#CASE_END_test_file_fmtcheck_2\n");
}

void test_file_fmtcheck_3(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	struct magic_set *ms;
	char *desc;
	char *def;
	char *file;
	unsigned int line;

	//声明返回值局部变量，若为基本类型赋默认值
	const char *returnValue = 0;

	//值序列相关
	char *valueList_0[]={(char *)"test_file"};
	unsigned int listLength_0=1;
	char *valueList_1[]={(char *)"default"};
	unsigned int listLength_1=1;
	unsigned int valueList_2[]={42};
	unsigned int listLength_2=1;
	struct magic_set *valueList_3[]={(struct magic_set *)ms_PTRTO};
	unsigned int listLength_3=1;
	char *valueList_4[]={(char *)"abc%d"};
	unsigned int listLength_4=1;
	unsigned int valueList_5[]={0};
	unsigned int listLength_5=1;
	int valueList_6[]={0};
	unsigned int listLength_6=1;
	int valueList_7[]={0};
	unsigned int listLength_7=1;
	unsigned int valueList_8[]={0};
	unsigned int listLength_8=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	unsigned char useLast_4=0;
	unsigned char useLast_5=0;
	unsigned char useLast_6=0;
	unsigned char useLast_7=0;
	unsigned char useLast_8=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=3;
	//初始化各桩函数调用计数器
	file_magerror_call_counter = 0;
	strchr_call_counter = 0;
	fmtcheck_call_counter = 0;

	aunit_printf("###TEST_TREE_test_file_fmtcheck_3,false,0\n");
	aunit_printf("#CASE_START_test_file_fmtcheck_3\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			file=(char *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			def=(char *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			line=(unsigned int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			ms=(struct magic_set *)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			desc=(char *)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			(ms_PTRTO[0]).offset=(unsigned int)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			(ms_PTRTO[0]).flags=(int)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			(ms_PTRTO[0]).error=(int)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		if(aUnItCoUnTeR<listLength_8 || useLast_8){
			(ms_PTRTO[0]).eoffset=(unsigned int)valueList_8[aUnItCoUnTeR<listLength_8?aUnItCoUnTeR:listLength_8-1];

		}
		returnValue = file_fmtcheck(ms,desc,def,file,line);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_STRING("file_fmtcheck","returnValue","abc%d",returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("file_magerror","file_magerror_call_counter",file_magerror_call_counter)
	OB_INT_EXPR("strchr","strchr_call_counter",strchr_call_counter)
	OB_INT_EXPR("fmtcheck","fmtcheck_call_counter",fmtcheck_call_counter)

	aunit_printf("#CASE_END_test_file_fmtcheck_3\n");
}

void test_file_fmtcheck_4(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	struct magic_set *ms;
	char *desc;
	char *def;
	char *file;
	unsigned int line;

	//声明返回值局部变量，若为基本类型赋默认值
	const char *returnValue = 0;

	//值序列相关
	char *valueList_0[]={(char *)"test_file"};
	unsigned int listLength_0=1;
	char *valueList_1[]={(char *)"default"};
	unsigned int listLength_1=1;
	unsigned int valueList_2[]={42};
	unsigned int listLength_2=1;
	struct magic_set *valueList_3[]={(struct magic_set *)ms_PTRTO};
	unsigned int listLength_3=1;
	char *valueList_4[]={(char *)0};
	unsigned int listLength_4=1;
	unsigned int valueList_5[]={0};
	unsigned int listLength_5=1;
	int valueList_6[]={0};
	unsigned int listLength_6=1;
	int valueList_7[]={0};
	unsigned int listLength_7=1;
	unsigned int valueList_8[]={0};
	unsigned int listLength_8=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	unsigned char useLast_4=0;
	unsigned char useLast_5=0;
	unsigned char useLast_6=0;
	unsigned char useLast_7=0;
	unsigned char useLast_8=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=4;
	//初始化各桩函数调用计数器
	file_magerror_call_counter = 0;
	strchr_call_counter = 0;
	fmtcheck_call_counter = 0;

	aunit_printf("###TEST_TREE_test_file_fmtcheck_4,false,0\n");
	aunit_printf("#CASE_START_test_file_fmtcheck_4\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			file=(char *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			def=(char *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			line=(unsigned int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			ms=(struct magic_set *)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			desc=(char *)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			(ms_PTRTO[0]).offset=(unsigned int)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			(ms_PTRTO[0]).flags=(int)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			(ms_PTRTO[0]).error=(int)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		if(aUnItCoUnTeR<listLength_8 || useLast_8){
			(ms_PTRTO[0]).eoffset=(unsigned int)valueList_8[aUnItCoUnTeR<listLength_8?aUnItCoUnTeR:listLength_8-1];

		}
		returnValue = file_fmtcheck(ms,desc,def,file,line);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_STRING("file_fmtcheck","returnValue",0,returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("file_magerror","file_magerror_call_counter",file_magerror_call_counter)
	OB_INT_EXPR("strchr","strchr_call_counter",strchr_call_counter)
	OB_INT_EXPR("fmtcheck","fmtcheck_call_counter",fmtcheck_call_counter)

	aunit_printf("#CASE_END_test_file_fmtcheck_4\n");
}

void aunit_test_func_run(int caseIndex){

	test_file_fmtcheck_up();

	switch(caseIndex){
	case 1:
		test_file_fmtcheck_1();
		break;
	case 2:
		test_file_fmtcheck_2();
		break;
	case 3:
		test_file_fmtcheck_3();
		break;
	case 4:
		test_file_fmtcheck_4();
		break;
	default:
		abnormal_file_fmtcheck_case(caseIndex);
		break;
	}

	test_file_fmtcheck_down();
}

