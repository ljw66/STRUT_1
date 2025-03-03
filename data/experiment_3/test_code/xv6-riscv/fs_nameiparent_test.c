void test_nameiparent_up(void);
void test_nameiparent_down(void);


void test_nameiparent_up(void){

	aunit_printf("\n##FUNCTION_START_nameiparent\n");
 }

void test_nameiparent_down(void){
	aunit_printf("\n##FUNCTION_END_nameiparent\n");
 }



void abnormal_nameiparent_case(int index);

void abnormal_nameiparent_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_nameiparent_1(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	char *path;
	char *name;

	//声明返回值局部变量，若为基本类型赋默认值
	struct inode *returnValue = 0;

	//值序列相关
	char *valueList_0[]={(char *)"/valid/path"};
	unsigned int listLength_0=1;
	char *valueList_1[]={(char *)"file"};
	unsigned int listLength_1=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=1;
	//初始化各桩函数调用计数器
	namex_call_counter = 0;

	aunit_printf("###TEST_TREE_test_nameiparent_1,false,0\n");
	aunit_printf("#CASE_START_test_nameiparent_1\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			path=(char *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			name=(char *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		returnValue = nameiparent(path,name);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	OB_INT_EXPR("nameiparent","returnValue",returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("namex","namex_call_counter",namex_call_counter)

	aunit_printf("#CASE_END_test_nameiparent_1\n");
}

void test_nameiparent_2(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	char *path;
	char *name;

	//声明返回值局部变量，若为基本类型赋默认值
	struct inode *returnValue = 0;

	//值序列相关
	char *valueList_0[]={(char *)"/invalid/path"};
	unsigned int listLength_0=1;
	char *valueList_1[]={(char *)"file"};
	unsigned int listLength_1=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=2;
	//初始化各桩函数调用计数器
	namex_call_counter = 0;

	aunit_printf("###TEST_TREE_test_nameiparent_2,false,0\n");
	aunit_printf("#CASE_START_test_nameiparent_2\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			path=(char *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			name=(char *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		returnValue = nameiparent(path,name);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_LONG("nameiparent","returnValue","NULL",returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("namex","namex_call_counter",namex_call_counter)

	aunit_printf("#CASE_END_test_nameiparent_2\n");
}

void test_nameiparent_3(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	char *path;
	char *name;

	//声明返回值局部变量，若为基本类型赋默认值
	struct inode *returnValue = 0;

	//值序列相关
	char *valueList_0[]={(char *)0};
	unsigned int listLength_0=1;
	char *valueList_1[]={(char *)"file"};
	unsigned int listLength_1=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=3;
	//初始化各桩函数调用计数器
	namex_call_counter = 0;

	aunit_printf("###TEST_TREE_test_nameiparent_3,false,0\n");
	aunit_printf("#CASE_START_test_nameiparent_3\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			path=(char *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			name=(char *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		returnValue = nameiparent(path,name);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_LONG("nameiparent","returnValue","NULL",returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("namex","namex_call_counter",namex_call_counter)

	aunit_printf("#CASE_END_test_nameiparent_3\n");
}

void test_nameiparent_4(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	char *path;
	char *name;

	//声明返回值局部变量，若为基本类型赋默认值
	struct inode *returnValue = 0;

	//值序列相关
	char *valueList_0[]={(char *)"/valid/path"};
	unsigned int listLength_0=1;
	char *valueList_1[]={(char *)0};
	unsigned int listLength_1=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=4;
	//初始化各桩函数调用计数器
	namex_call_counter = 0;

	aunit_printf("###TEST_TREE_test_nameiparent_4,false,0\n");
	aunit_printf("#CASE_START_test_nameiparent_4\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			path=(char *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			name=(char *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		returnValue = nameiparent(path,name);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_LONG("nameiparent","returnValue","NULL",returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("namex","namex_call_counter",namex_call_counter)

	aunit_printf("#CASE_END_test_nameiparent_4\n");
}

void test_nameiparent_5(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	char *path;
	char *name;

	//声明返回值局部变量，若为基本类型赋默认值
	struct inode *returnValue = 0;

	//调用初始化函数

	//为case_count全局变量赋值
	case_id=5;
	//初始化各桩函数调用计数器
	namex_call_counter = 0;

	aunit_printf("###TEST_TREE_test_nameiparent_5,false,0\n");
	aunit_printf("#CASE_START_test_nameiparent_5\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		returnValue = nameiparent(path,name);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_LONG("nameiparent","returnValue","NULL",returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("namex","namex_call_counter",namex_call_counter)

	aunit_printf("#CASE_END_test_nameiparent_5\n");
}

void test_nameiparent_6(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	char *path;
	char *name;

	//声明返回值局部变量，若为基本类型赋默认值
	struct inode *returnValue = 0;

	//值序列相关
	char *valueList_0[]={(char *)"/valid/path"};
	unsigned int listLength_0=1;
	char *valueList_1[]={(char *)"directory"};
	unsigned int listLength_1=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=6;
	//初始化各桩函数调用计数器
	namex_call_counter = 0;

	aunit_printf("###TEST_TREE_test_nameiparent_6,false,0\n");
	aunit_printf("#CASE_START_test_nameiparent_6\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			path=(char *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			name=(char *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		returnValue = nameiparent(path,name);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	OB_INT_EXPR("nameiparent","returnValue",returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("namex","namex_call_counter",namex_call_counter)

	aunit_printf("#CASE_END_test_nameiparent_6\n");
}

void aunit_test_func_run(int caseIndex){

	test_nameiparent_up();

	switch(caseIndex){
	case 1:
		test_nameiparent_1();
		break;
	case 2:
		test_nameiparent_2();
		break;
	case 3:
		test_nameiparent_3();
		break;
	case 4:
		test_nameiparent_4();
		break;
	case 5:
		test_nameiparent_5();
		break;
	case 6:
		test_nameiparent_6();
		break;
	default:
		abnormal_nameiparent_case(caseIndex);
		break;
	}

	test_nameiparent_down();
}

