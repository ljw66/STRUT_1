void test_max_up(void);
void test_max_down(void);


void test_max_up(void){

	aunit_printf("\n##FUNCTION_START_max\n");
 }

void test_max_down(void){
	aunit_printf("\n##FUNCTION_END_max\n");
 }



void abnormal_max_case(int index);

void abnormal_max_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_max_1(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	int a;
	int b;

	//声明返回值局部变量，若为基本类型赋默认值
	int returnValue = 0;

	//值序列相关
	int valueList_0[]={5};
	unsigned int listLength_0=1;
	int valueList_1[]={5};
	unsigned int listLength_1=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=1;
	//初始化各桩函数调用计数器

	aunit_printf("###TEST_TREE_test_max_1,false,0\n");
	aunit_printf("#CASE_START_test_max_1\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			a=(int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			b=(int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		returnValue = max(a,b);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("max","returnValue",5,returnValue)

	//预期用例中各桩函数调用次数

	aunit_printf("#CASE_END_test_max_1\n");
}

void test_max_2(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	int a;
	int b;

	//声明返回值局部变量，若为基本类型赋默认值
	int returnValue = 0;

	//值序列相关
	int valueList_0[]={10};
	unsigned int listLength_0=1;
	int valueList_1[]={3};
	unsigned int listLength_1=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=2;
	//初始化各桩函数调用计数器

	aunit_printf("###TEST_TREE_test_max_2,false,0\n");
	aunit_printf("#CASE_START_test_max_2\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			a=(int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			b=(int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		returnValue = max(a,b);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("max","returnValue",10,returnValue)

	//预期用例中各桩函数调用次数

	aunit_printf("#CASE_END_test_max_2\n");
}

void test_max_3(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	int a;
	int b;

	//声明返回值局部变量，若为基本类型赋默认值
	int returnValue = 0;

	//值序列相关
	int valueList_0[]={2};
	unsigned int listLength_0=1;
	int valueList_1[]={7};
	unsigned int listLength_1=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=3;
	//初始化各桩函数调用计数器

	aunit_printf("###TEST_TREE_test_max_3,false,0\n");
	aunit_printf("#CASE_START_test_max_3\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			a=(int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			b=(int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		returnValue = max(a,b);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("max","returnValue",7,returnValue)

	//预期用例中各桩函数调用次数

	aunit_printf("#CASE_END_test_max_3\n");
}

void test_max_4(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	int a;
	int b;

	//声明返回值局部变量，若为基本类型赋默认值
	int returnValue = 0;

	//值序列相关
	int valueList_0[]={0};
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

	aunit_printf("###TEST_TREE_test_max_4,false,0\n");
	aunit_printf("#CASE_START_test_max_4\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			a=(int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			b=(int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		returnValue = max(a,b);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("max","returnValue",0,returnValue)

	//预期用例中各桩函数调用次数

	aunit_printf("#CASE_END_test_max_4\n");
}

void test_max_5(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	int a;
	int b;

	//声明返回值局部变量，若为基本类型赋默认值
	int returnValue = 0;

	//值序列相关
	int valueList_0[]={-5};
	unsigned int listLength_0=1;
	int valueList_1[]={3};
	unsigned int listLength_1=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=5;
	//初始化各桩函数调用计数器

	aunit_printf("###TEST_TREE_test_max_5,false,0\n");
	aunit_printf("#CASE_START_test_max_5\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			a=(int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			b=(int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		returnValue = max(a,b);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("max","returnValue",3,returnValue)

	//预期用例中各桩函数调用次数

	aunit_printf("#CASE_END_test_max_5\n");
}

void test_max_6(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	int a;
	int b;

	//声明返回值局部变量，若为基本类型赋默认值
	int returnValue = 0;

	//值序列相关
	int valueList_0[]={4};
	unsigned int listLength_0=1;
	int valueList_1[]={-2};
	unsigned int listLength_1=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=6;
	//初始化各桩函数调用计数器

	aunit_printf("###TEST_TREE_test_max_6,false,0\n");
	aunit_printf("#CASE_START_test_max_6\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			a=(int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			b=(int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		returnValue = max(a,b);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("max","returnValue",4,returnValue)

	//预期用例中各桩函数调用次数

	aunit_printf("#CASE_END_test_max_6\n");
}

void test_max_7(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	int a;
	int b;

	//声明返回值局部变量，若为基本类型赋默认值
	int returnValue = 0;

	//值序列相关
	int valueList_0[]={-3};
	unsigned int listLength_0=1;
	int valueList_1[]={-7};
	unsigned int listLength_1=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=7;
	//初始化各桩函数调用计数器

	aunit_printf("###TEST_TREE_test_max_7,false,0\n");
	aunit_printf("#CASE_START_test_max_7\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			a=(int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			b=(int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		returnValue = max(a,b);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("max","returnValue",-3,returnValue)

	//预期用例中各桩函数调用次数

	aunit_printf("#CASE_END_test_max_7\n");
}

void test_max_8(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	int a;
	int b;

	//声明返回值局部变量，若为基本类型赋默认值
	int returnValue = 0;

	//值序列相关
	int valueList_0[]={-8};
	unsigned int listLength_0=1;
	int valueList_1[]={-4};
	unsigned int listLength_1=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=8;
	//初始化各桩函数调用计数器

	aunit_printf("###TEST_TREE_test_max_8,false,0\n");
	aunit_printf("#CASE_START_test_max_8\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			a=(int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			b=(int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		returnValue = max(a,b);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("max","returnValue",-4,returnValue)

	//预期用例中各桩函数调用次数

	aunit_printf("#CASE_END_test_max_8\n");
}

void test_max_9(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	int a;
	int b;

	//声明返回值局部变量，若为基本类型赋默认值
	int returnValue = 0;

	//值序列相关
	int valueList_0[]={1000000};
	unsigned int listLength_0=1;
	int valueList_1[]={10};
	unsigned int listLength_1=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=9;
	//初始化各桩函数调用计数器

	aunit_printf("###TEST_TREE_test_max_9,false,0\n");
	aunit_printf("#CASE_START_test_max_9\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			a=(int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			b=(int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		returnValue = max(a,b);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("max","returnValue",1000000,returnValue)

	//预期用例中各桩函数调用次数

	aunit_printf("#CASE_END_test_max_9\n");
}

void test_max_10(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	int a;
	int b;

	//声明返回值局部变量，若为基本类型赋默认值
	int returnValue = 0;

	//值序列相关
	int valueList_0[]={15};
	unsigned int listLength_0=1;
	int valueList_1[]={1000000};
	unsigned int listLength_1=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=10;
	//初始化各桩函数调用计数器

	aunit_printf("###TEST_TREE_test_max_10,false,0\n");
	aunit_printf("#CASE_START_test_max_10\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			a=(int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			b=(int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		returnValue = max(a,b);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("max","returnValue",1000000,returnValue)

	//预期用例中各桩函数调用次数

	aunit_printf("#CASE_END_test_max_10\n");
}

void test_max_11(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	int a;
	int b;

	//声明返回值局部变量，若为基本类型赋默认值
	int returnValue = 0;

	//值序列相关
	int valueList_0[]={-1000000};
	unsigned int listLength_0=1;
	int valueList_1[]={-10};
	unsigned int listLength_1=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=11;
	//初始化各桩函数调用计数器

	aunit_printf("###TEST_TREE_test_max_11,false,0\n");
	aunit_printf("#CASE_START_test_max_11\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			a=(int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			b=(int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		returnValue = max(a,b);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("max","returnValue",-10,returnValue)

	//预期用例中各桩函数调用次数

	aunit_printf("#CASE_END_test_max_11\n");
}

void test_max_12(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	int a;
	int b;

	//声明返回值局部变量，若为基本类型赋默认值
	int returnValue = 0;

	//值序列相关
	int valueList_0[]={-15};
	unsigned int listLength_0=1;
	int valueList_1[]={-1000000};
	unsigned int listLength_1=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=12;
	//初始化各桩函数调用计数器

	aunit_printf("###TEST_TREE_test_max_12,false,0\n");
	aunit_printf("#CASE_START_test_max_12\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			a=(int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			b=(int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		returnValue = max(a,b);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("max","returnValue",-15,returnValue)

	//预期用例中各桩函数调用次数

	aunit_printf("#CASE_END_test_max_12\n");
}

void aunit_test_func_run(int caseIndex){

	test_max_up();

	switch(caseIndex){
	case 1:
		test_max_1();
		break;
	case 2:
		test_max_2();
		break;
	case 3:
		test_max_3();
		break;
	case 4:
		test_max_4();
		break;
	case 5:
		test_max_5();
		break;
	case 6:
		test_max_6();
		break;
	case 7:
		test_max_7();
		break;
	case 8:
		test_max_8();
		break;
	case 9:
		test_max_9();
		break;
	case 10:
		test_max_10();
		break;
	case 11:
		test_max_11();
		break;
	case 12:
		test_max_12();
		break;
	default:
		abnormal_max_case(caseIndex);
		break;
	}

	test_max_down();
}

