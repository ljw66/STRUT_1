void test_magic_open_up(void);
void test_magic_open_down(void);


void test_magic_open_up(void){

	aunit_printf("\n##FUNCTION_START_magic_open\n");
 }

void test_magic_open_down(void){
	aunit_printf("\n##FUNCTION_END_magic_open\n");
 }



void abnormal_magic_open_case(int index);

void abnormal_magic_open_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_magic_open_1(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	int flags;

	//声明返回值局部变量，若为基本类型赋默认值
	struct magic_set *returnValue = 0;

	//值序列相关
	int valueList_0[]={0};
	unsigned int listLength_0=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=1;
	//初始化各桩函数调用计数器
	file_ms_alloc_call_counter = 0;

	aunit_printf("###TEST_TREE_test_magic_open_1,false,0\n");
	aunit_printf("#CASE_START_test_magic_open_1\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			flags=(int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		returnValue = magic_open(flags);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	OB_INT_EXPR("magic_open","returnValue",returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("file_ms_alloc","file_ms_alloc_call_counter",file_ms_alloc_call_counter)

	aunit_printf("#CASE_END_test_magic_open_1\n");
}

void test_magic_open_2(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	int flags;

	//声明返回值局部变量，若为基本类型赋默认值
	struct magic_set *returnValue = 0;

	//值序列相关
	int valueList_0[]={1};
	unsigned int listLength_0=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=2;
	//初始化各桩函数调用计数器
	file_ms_alloc_call_counter = 0;

	aunit_printf("###TEST_TREE_test_magic_open_2,false,0\n");
	aunit_printf("#CASE_START_test_magic_open_2\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			flags=(int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		returnValue = magic_open(flags);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	OB_INT_EXPR("magic_open","returnValue",returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("file_ms_alloc","file_ms_alloc_call_counter",file_ms_alloc_call_counter)

	aunit_printf("#CASE_END_test_magic_open_2\n");
}

void test_magic_open_3(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	int flags;

	//声明返回值局部变量，若为基本类型赋默认值
	struct magic_set *returnValue = 0;

	//值序列相关
	int valueList_0[]={42};
	unsigned int listLength_0=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=3;
	//初始化各桩函数调用计数器
	file_ms_alloc_call_counter = 0;

	aunit_printf("###TEST_TREE_test_magic_open_3,false,0\n");
	aunit_printf("#CASE_START_test_magic_open_3\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			flags=(int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		returnValue = magic_open(flags);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	OB_INT_EXPR("magic_open","returnValue",returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("file_ms_alloc","file_ms_alloc_call_counter",file_ms_alloc_call_counter)

	aunit_printf("#CASE_END_test_magic_open_3\n");
}

void test_magic_open_4(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	int flags;

	//声明返回值局部变量，若为基本类型赋默认值
	struct magic_set *returnValue = 0;

	//值序列相关
	int valueList_0[]={1000};
	unsigned int listLength_0=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=4;
	//初始化各桩函数调用计数器
	file_ms_alloc_call_counter = 0;

	aunit_printf("###TEST_TREE_test_magic_open_4,false,0\n");
	aunit_printf("#CASE_START_test_magic_open_4\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			flags=(int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		returnValue = magic_open(flags);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	OB_INT_EXPR("magic_open","returnValue",returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("file_ms_alloc","file_ms_alloc_call_counter",file_ms_alloc_call_counter)

	aunit_printf("#CASE_END_test_magic_open_4\n");
}

void test_magic_open_5(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	int flags;

	//声明返回值局部变量，若为基本类型赋默认值
	struct magic_set *returnValue = 0;

	//值序列相关
	int valueList_0[]={-1};
	unsigned int listLength_0=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=5;
	//初始化各桩函数调用计数器
	file_ms_alloc_call_counter = 0;

	aunit_printf("###TEST_TREE_test_magic_open_5,false,0\n");
	aunit_printf("#CASE_START_test_magic_open_5\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			flags=(int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		returnValue = magic_open(flags);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	OB_INT_EXPR("magic_open","returnValue",returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("file_ms_alloc","file_ms_alloc_call_counter",file_ms_alloc_call_counter)

	aunit_printf("#CASE_END_test_magic_open_5\n");
}

void test_magic_open_6(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	int flags;

	//声明返回值局部变量，若为基本类型赋默认值
	struct magic_set *returnValue = 0;

	//值序列相关
	int valueList_0[]={5};
	unsigned int listLength_0=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=6;
	//初始化各桩函数调用计数器
	file_ms_alloc_call_counter = 0;

	aunit_printf("###TEST_TREE_test_magic_open_6,false,0\n");
	aunit_printf("#CASE_START_test_magic_open_6\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			flags=(int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		returnValue = magic_open(flags);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	OB_INT_EXPR("magic_open","returnValue",returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("file_ms_alloc","file_ms_alloc_call_counter",file_ms_alloc_call_counter)

	aunit_printf("#CASE_END_test_magic_open_6\n");
}

void test_magic_open_7(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	int flags;

	//声明返回值局部变量，若为基本类型赋默认值
	struct magic_set *returnValue = 0;

	//值序列相关
	int valueList_0[]={15};
	unsigned int listLength_0=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=7;
	//初始化各桩函数调用计数器
	file_ms_alloc_call_counter = 0;

	aunit_printf("###TEST_TREE_test_magic_open_7,false,0\n");
	aunit_printf("#CASE_START_test_magic_open_7\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			flags=(int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		returnValue = magic_open(flags);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	OB_INT_EXPR("magic_open","returnValue",returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("file_ms_alloc","file_ms_alloc_call_counter",file_ms_alloc_call_counter)

	aunit_printf("#CASE_END_test_magic_open_7\n");
}

void test_magic_open_8(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	int flags;

	//声明返回值局部变量，若为基本类型赋默认值
	struct magic_set *returnValue = 0;

	//值序列相关
	int valueList_0[]={123};
	unsigned int listLength_0=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=8;
	//初始化各桩函数调用计数器
	file_ms_alloc_call_counter = 0;

	aunit_printf("###TEST_TREE_test_magic_open_8,false,0\n");
	aunit_printf("#CASE_START_test_magic_open_8\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			flags=(int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		returnValue = magic_open(flags);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	OB_INT_EXPR("magic_open","returnValue",returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("file_ms_alloc","file_ms_alloc_call_counter",file_ms_alloc_call_counter)

	aunit_printf("#CASE_END_test_magic_open_8\n");
}

void aunit_test_func_run(int caseIndex){

	test_magic_open_up();

	switch(caseIndex){
	case 1:
		test_magic_open_1();
		break;
	case 2:
		test_magic_open_2();
		break;
	case 3:
		test_magic_open_3();
		break;
	case 4:
		test_magic_open_4();
		break;
	case 5:
		test_magic_open_5();
		break;
	case 6:
		test_magic_open_6();
		break;
	case 7:
		test_magic_open_7();
		break;
	case 8:
		test_magic_open_8();
		break;
	default:
		abnormal_magic_open_case(caseIndex);
		break;
	}

	test_magic_open_down();
}

