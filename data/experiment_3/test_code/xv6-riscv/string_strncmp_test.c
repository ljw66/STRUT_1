void test_strncmp_up(void);
void test_strncmp_down(void);


void test_strncmp_up(void){

	aunit_printf("\n##FUNCTION_START_strncmp\n");
 }

void test_strncmp_down(void){
	aunit_printf("\n##FUNCTION_END_strncmp\n");
 }



void abnormal_strncmp_case(int index);

void abnormal_strncmp_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_strncmp_1(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	char *p;
	char *q;
	unsigned int n;

	//声明返回值局部变量，若为基本类型赋默认值
	int returnValue = 0;

	//值序列相关
	char *valueList_0[]={(char *)"hello"};
	unsigned int listLength_0=1;
	char *valueList_1[]={(char *)"hello"};
	unsigned int listLength_1=1;
	unsigned int valueList_2[]={3};
	unsigned int listLength_2=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=1;
	//初始化各桩函数调用计数器

	aunit_printf("###TEST_TREE_test_strncmp_1,false,0\n");
	aunit_printf("#CASE_START_test_strncmp_1\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			p=(char *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			q=(char *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			n=(unsigned int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		returnValue = strncmp(p,q,n);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("strncmp","returnValue",0,returnValue)

	//预期用例中各桩函数调用次数

	aunit_printf("#CASE_END_test_strncmp_1\n");
}

void test_strncmp_2(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	char *p;
	char *q;
	unsigned int n;

	//声明返回值局部变量，若为基本类型赋默认值
	int returnValue = 0;

	//值序列相关
	char *valueList_0[]={(char *)"world"};
	unsigned int listLength_0=1;
	char *valueList_1[]={(char *)"world"};
	unsigned int listLength_1=1;
	unsigned int valueList_2[]={5};
	unsigned int listLength_2=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=2;
	//初始化各桩函数调用计数器

	aunit_printf("###TEST_TREE_test_strncmp_2,false,0\n");
	aunit_printf("#CASE_START_test_strncmp_2\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			p=(char *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			q=(char *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			n=(unsigned int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		returnValue = strncmp(p,q,n);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("strncmp","returnValue",0,returnValue)

	//预期用例中各桩函数调用次数

	aunit_printf("#CASE_END_test_strncmp_2\n");
}

void test_strncmp_3(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	char *p;
	char *q;
	unsigned int n;

	//声明返回值局部变量，若为基本类型赋默认值
	int returnValue = 0;

	//值序列相关
	char *valueList_0[]={(char *)"abc"};
	unsigned int listLength_0=1;
	char *valueList_1[]={(char *)"def"};
	unsigned int listLength_1=1;
	unsigned int valueList_2[]={3};
	unsigned int listLength_2=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=3;
	//初始化各桩函数调用计数器

	aunit_printf("###TEST_TREE_test_strncmp_3,false,0\n");
	aunit_printf("#CASE_START_test_strncmp_3\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			p=(char *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			q=(char *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			n=(unsigned int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		returnValue = strncmp(p,q,n);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("strncmp","returnValue",-3,returnValue)

	//预期用例中各桩函数调用次数

	aunit_printf("#CASE_END_test_strncmp_3\n");
}

void test_strncmp_4(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	char *p;
	char *q;
	unsigned int n;

	//声明返回值局部变量，若为基本类型赋默认值
	int returnValue = 0;

	//值序列相关
	char *valueList_0[]={(char *)"apple"};
	unsigned int listLength_0=1;
	char *valueList_1[]={(char *)"apricot"};
	unsigned int listLength_1=1;
	unsigned int valueList_2[]={5};
	unsigned int listLength_2=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=4;
	//初始化各桩函数调用计数器

	aunit_printf("###TEST_TREE_test_strncmp_4,false,0\n");
	aunit_printf("#CASE_START_test_strncmp_4\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			p=(char *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			q=(char *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			n=(unsigned int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		returnValue = strncmp(p,q,n);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("strncmp","returnValue",-11,returnValue)

	//预期用例中各桩函数调用次数

	aunit_printf("#CASE_END_test_strncmp_4\n");
}

void test_strncmp_5(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	char *p;
	char *q;
	unsigned int n;

	//声明返回值局部变量，若为基本类型赋默认值
	int returnValue = 0;

	//值序列相关
	char *valueList_0[]={(char *)"hello"};
	unsigned int listLength_0=1;
	char *valueList_1[]={(char *)"hell"};
	unsigned int listLength_1=1;
	unsigned int valueList_2[]={5};
	unsigned int listLength_2=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=5;
	//初始化各桩函数调用计数器

	aunit_printf("###TEST_TREE_test_strncmp_5,false,0\n");
	aunit_printf("#CASE_START_test_strncmp_5\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			p=(char *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			q=(char *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			n=(unsigned int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		returnValue = strncmp(p,q,n);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("strncmp","returnValue",111,returnValue)

	//预期用例中各桩函数调用次数

	aunit_printf("#CASE_END_test_strncmp_5\n");
}

void test_strncmp_6(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	char *p;
	char *q;
	unsigned int n;

	//声明返回值局部变量，若为基本类型赋默认值
	int returnValue = 0;

	//值序列相关
	char *valueList_0[]={(char *)"nonempty"};
	unsigned int listLength_0=1;
	unsigned int valueList_1[]={5};
	unsigned int listLength_1=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=6;
	//初始化各桩函数调用计数器

	aunit_printf("###TEST_TREE_test_strncmp_6,false,0\n");
	aunit_printf("#CASE_START_test_strncmp_6\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			q=(char *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			n=(unsigned int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		returnValue = strncmp(p,q,n);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("strncmp","returnValue",-110,returnValue)

	//预期用例中各桩函数调用次数

	aunit_printf("#CASE_END_test_strncmp_6\n");
}

void test_strncmp_7(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	char *p;
	char *q;
	unsigned int n;

	//声明返回值局部变量，若为基本类型赋默认值
	int returnValue = 0;

	//值序列相关
	unsigned int valueList_0[]={5};
	unsigned int listLength_0=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=7;
	//初始化各桩函数调用计数器

	aunit_printf("###TEST_TREE_test_strncmp_7,false,0\n");
	aunit_printf("#CASE_START_test_strncmp_7\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			n=(unsigned int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		returnValue = strncmp(p,q,n);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("strncmp","returnValue",0,returnValue)

	//预期用例中各桩函数调用次数

	aunit_printf("#CASE_END_test_strncmp_7\n");
}

void test_strncmp_8(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	char *p;
	char *q;
	unsigned int n;

	//声明返回值局部变量，若为基本类型赋默认值
	int returnValue = 0;

	//值序列相关
	char *valueList_0[]={(char *)"foo"};
	unsigned int listLength_0=1;
	char *valueList_1[]={(char *)"bar"};
	unsigned int listLength_1=1;
	unsigned int valueList_2[]={0};
	unsigned int listLength_2=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=8;
	//初始化各桩函数调用计数器

	aunit_printf("###TEST_TREE_test_strncmp_8,false,0\n");
	aunit_printf("#CASE_START_test_strncmp_8\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			p=(char *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			q=(char *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			n=(unsigned int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		returnValue = strncmp(p,q,n);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("strncmp","returnValue",0,returnValue)

	//预期用例中各桩函数调用次数

	aunit_printf("#CASE_END_test_strncmp_8\n");
}

void test_strncmp_9(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	char *p;
	char *q;
	unsigned int n;

	//声明返回值局部变量，若为基本类型赋默认值
	int returnValue = 0;

	//值序列相关
	char *valueList_0[]={(char *)"baz"};
	unsigned int listLength_0=1;
	char *valueList_1[]={(char *)"baz"};
	unsigned int listLength_1=1;
	unsigned int valueList_2[]={0};
	unsigned int listLength_2=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=9;
	//初始化各桩函数调用计数器

	aunit_printf("###TEST_TREE_test_strncmp_9,false,0\n");
	aunit_printf("#CASE_START_test_strncmp_9\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			p=(char *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			q=(char *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			n=(unsigned int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		returnValue = strncmp(p,q,n);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("strncmp","returnValue",0,returnValue)

	//预期用例中各桩函数调用次数

	aunit_printf("#CASE_END_test_strncmp_9\n");
}

void test_strncmp_10(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	char *p;
	char *q;
	unsigned int n;

	//声明返回值局部变量，若为基本类型赋默认值
	int returnValue = 0;

	//值序列相关
	char *valueList_0[]={(char *)"abcdef"};
	unsigned int listLength_0=1;
	char *valueList_1[]={(char *)"abcxyz"};
	unsigned int listLength_1=1;
	unsigned int valueList_2[]={3};
	unsigned int listLength_2=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=10;
	//初始化各桩函数调用计数器

	aunit_printf("###TEST_TREE_test_strncmp_10,false,0\n");
	aunit_printf("#CASE_START_test_strncmp_10\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			p=(char *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			q=(char *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			n=(unsigned int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		returnValue = strncmp(p,q,n);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("strncmp","returnValue",0,returnValue)

	//预期用例中各桩函数调用次数

	aunit_printf("#CASE_END_test_strncmp_10\n");
}

void aunit_test_func_run(int caseIndex){

	test_strncmp_up();

	switch(caseIndex){
	case 1:
		test_strncmp_1();
		break;
	case 2:
		test_strncmp_2();
		break;
	case 3:
		test_strncmp_3();
		break;
	case 4:
		test_strncmp_4();
		break;
	case 5:
		test_strncmp_5();
		break;
	case 6:
		test_strncmp_6();
		break;
	case 7:
		test_strncmp_7();
		break;
	case 8:
		test_strncmp_8();
		break;
	case 9:
		test_strncmp_9();
		break;
	case 10:
		test_strncmp_10();
		break;
	default:
		abnormal_strncmp_case(caseIndex);
		break;
	}

	test_strncmp_down();
}

