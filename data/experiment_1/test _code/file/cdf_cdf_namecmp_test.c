void test_cdf_namecmp_up(void);
void test_cdf_namecmp_down(void);


void test_cdf_namecmp_up(void){

	aunit_printf("\n##FUNCTION_START_cdf_namecmp\n");
 }

void test_cdf_namecmp_down(void){
	aunit_printf("\n##FUNCTION_END_cdf_namecmp\n");
 }



void abnormal_cdf_namecmp_case(int index);

void abnormal_cdf_namecmp_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_cdf_namecmp_1(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	char *d;
	uint16_t *s;
	unsigned int l;

	//声明返回值局部变量，若为基本类型赋默认值
	int returnValue = 0;

	//值序列相关
	uint16_t *valueList_0[]={(uint16_t *)s_PTRTO};
	unsigned int listLength_0=1;
	unsigned int valueList_1[]={0};
	unsigned int listLength_1=1;
	unsigned int valueList_2[]={0x01020304};
	unsigned int listLength_2=1;
	unsigned short int valueList_3[]={0};
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
	_cdf_tole2_call_counter = 0;

	aunit_printf("###TEST_TREE_test_cdf_namecmp_1,false,0\n");
	aunit_printf("#CASE_START_test_cdf_namecmp_1\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			s=(uint16_t *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			l=(unsigned int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			cdf_bo.u=(unsigned int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			s_PTRTO[0]=(unsigned short int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		returnValue = cdf_namecmp(d,s,l);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("cdf_namecmp","returnValue",0,returnValue)
	TEST_ASSERT_EQUAL_UNSIGNED_INT("cdf_namecmp","cdf_bo.u",0x01020304,cdf_bo.u)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("_cdf_tole2","_cdf_tole2_call_counter",_cdf_tole2_call_counter)

	aunit_printf("#CASE_END_test_cdf_namecmp_1\n");
}

void test_cdf_namecmp_2(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	char *d;
	uint16_t *s;
	unsigned int l;

	//声明返回值局部变量，若为基本类型赋默认值
	int returnValue = 0;

	//值序列相关
	uint16_t *valueList_0[]={(uint16_t *)s_PTRTO};
	unsigned int listLength_0=1;
	char *valueList_1[]={(char *)"a"};
	unsigned int listLength_1=1;
	unsigned int valueList_2[]={1};
	unsigned int listLength_2=1;
	unsigned int valueList_3[]={0x01020304};
	unsigned int listLength_3=1;
	unsigned short int valueList_4[]={98};
	unsigned int listLength_4=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	unsigned char useLast_4=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=2;
	//初始化各桩函数调用计数器
	_cdf_tole2_call_counter = 0;

	aunit_printf("###TEST_TREE_test_cdf_namecmp_2,false,0\n");
	aunit_printf("#CASE_START_test_cdf_namecmp_2\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			s=(uint16_t *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			d=(char *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			l=(unsigned int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			cdf_bo.u=(unsigned int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			s_PTRTO[0]=(unsigned short int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		returnValue = cdf_namecmp(d,s,l);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("cdf_namecmp","returnValue",-1,returnValue)
	TEST_ASSERT_EQUAL_UNSIGNED_INT("cdf_namecmp","cdf_bo.u",0x01020304,cdf_bo.u)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("_cdf_tole2","_cdf_tole2_call_counter",_cdf_tole2_call_counter)

	aunit_printf("#CASE_END_test_cdf_namecmp_2\n");
}

void test_cdf_namecmp_3(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	char *d;
	uint16_t *s;
	unsigned int l;

	//声明返回值局部变量，若为基本类型赋默认值
	int returnValue = 0;

	//值序列相关
	uint16_t *valueList_0[]={(uint16_t *)s_PTRTO};
	unsigned int listLength_0=1;
	char *valueList_1[]={(char *)"abc"};
	unsigned int listLength_1=1;
	unsigned int valueList_2[]={3};
	unsigned int listLength_2=1;
	unsigned int valueList_3[]={0x01020304};
	unsigned int listLength_3=1;
	unsigned short int valueList_4[]={98};
	unsigned int listLength_4=1;
	unsigned short int valueList_5[]={97};
	unsigned int listLength_5=1;
	unsigned short int valueList_6[]={99};
	unsigned int listLength_6=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	unsigned char useLast_4=0;
	unsigned char useLast_5=0;
	unsigned char useLast_6=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=3;
	//初始化各桩函数调用计数器
	_cdf_tole2_call_counter = 0;

	aunit_printf("###TEST_TREE_test_cdf_namecmp_3,false,0\n");
	aunit_printf("#CASE_START_test_cdf_namecmp_3\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			s=(uint16_t *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			d=(char *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			l=(unsigned int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			cdf_bo.u=(unsigned int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			s_PTRTO[1]=(unsigned short int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			s_PTRTO[0]=(unsigned short int)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			s_PTRTO[2]=(unsigned short int)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		returnValue = cdf_namecmp(d,s,l);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("cdf_namecmp","returnValue",0,returnValue)
	TEST_ASSERT_EQUAL_UNSIGNED_INT("cdf_namecmp","cdf_bo.u",0x01020304,cdf_bo.u)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("_cdf_tole2","_cdf_tole2_call_counter",_cdf_tole2_call_counter)

	aunit_printf("#CASE_END_test_cdf_namecmp_3\n");
}

void test_cdf_namecmp_4(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	char *d;
	uint16_t *s;
	unsigned int l;

	//声明返回值局部变量，若为基本类型赋默认值
	int returnValue = 0;

	//值序列相关
	uint16_t *valueList_0[]={(uint16_t *)s_PTRTO};
	unsigned int listLength_0=1;
	char *valueList_1[]={(char *)"abcd"};
	unsigned int listLength_1=1;
	unsigned int valueList_2[]={4};
	unsigned int listLength_2=1;
	unsigned int valueList_3[]={0x01020304};
	unsigned int listLength_3=1;
	unsigned short int valueList_4[]={98};
	unsigned int listLength_4=1;
	unsigned short int valueList_5[]={97};
	unsigned int listLength_5=1;
	unsigned short int valueList_6[]={120};
	unsigned int listLength_6=1;
	unsigned short int valueList_7[]={99};
	unsigned int listLength_7=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	unsigned char useLast_4=0;
	unsigned char useLast_5=0;
	unsigned char useLast_6=0;
	unsigned char useLast_7=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=4;
	//初始化各桩函数调用计数器
	_cdf_tole2_call_counter = 0;

	aunit_printf("###TEST_TREE_test_cdf_namecmp_4,false,0\n");
	aunit_printf("#CASE_START_test_cdf_namecmp_4\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			s=(uint16_t *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			d=(char *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			l=(unsigned int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			cdf_bo.u=(unsigned int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			s_PTRTO[1]=(unsigned short int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			s_PTRTO[0]=(unsigned short int)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			s_PTRTO[3]=(unsigned short int)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			s_PTRTO[2]=(unsigned short int)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		returnValue = cdf_namecmp(d,s,l);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("cdf_namecmp","returnValue",-23,returnValue)
	TEST_ASSERT_EQUAL_UNSIGNED_INT("cdf_namecmp","cdf_bo.u",0x01020304,cdf_bo.u)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("_cdf_tole2","_cdf_tole2_call_counter",_cdf_tole2_call_counter)

	aunit_printf("#CASE_END_test_cdf_namecmp_4\n");
}

void test_cdf_namecmp_5(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	char *d;
	uint16_t *s;
	unsigned int l;

	//声明返回值局部变量，若为基本类型赋默认值
	int returnValue = 0;

	//值序列相关
	uint16_t *valueList_0[]={(uint16_t *)s_PTRTO};
	unsigned int listLength_0=1;
	char *valueList_1[]={(char *)"abc"};
	unsigned int listLength_1=1;
	unsigned int valueList_2[]={3};
	unsigned int listLength_2=1;
	unsigned int valueList_3[]={0x04030201};
	unsigned int listLength_3=1;
	unsigned short int valueList_4[]={98};
	unsigned int listLength_4=1;
	unsigned short int valueList_5[]={97};
	unsigned int listLength_5=1;
	unsigned short int valueList_6[]={99};
	unsigned int listLength_6=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	unsigned char useLast_4=0;
	unsigned char useLast_5=0;
	unsigned char useLast_6=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=5;
	//初始化各桩函数调用计数器
	_cdf_tole2_call_counter = 0;

	aunit_printf("###TEST_TREE_test_cdf_namecmp_5,false,0\n");
	aunit_printf("#CASE_START_test_cdf_namecmp_5\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			s=(uint16_t *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			d=(char *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			l=(unsigned int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			cdf_bo.u=(unsigned int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			s_PTRTO[1]=(unsigned short int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			s_PTRTO[0]=(unsigned short int)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			s_PTRTO[2]=(unsigned short int)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		returnValue = cdf_namecmp(d,s,l);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("cdf_namecmp","returnValue",0,returnValue)
	TEST_ASSERT_EQUAL_UNSIGNED_INT("cdf_namecmp","cdf_bo.u",0x04030201,cdf_bo.u)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("_cdf_tole2","_cdf_tole2_call_counter",_cdf_tole2_call_counter)

	aunit_printf("#CASE_END_test_cdf_namecmp_5\n");
}

void aunit_test_func_run(int caseIndex){

	test_cdf_namecmp_up();

	switch(caseIndex){
	case 1:
		test_cdf_namecmp_1();
		break;
	case 2:
		test_cdf_namecmp_2();
		break;
	case 3:
		test_cdf_namecmp_3();
		break;
	case 4:
		test_cdf_namecmp_4();
		break;
	case 5:
		test_cdf_namecmp_5();
		break;
	default:
		abnormal_cdf_namecmp_case(caseIndex);
		break;
	}

	test_cdf_namecmp_down();
}

