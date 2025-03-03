void test_freerange_up(void);
void test_freerange_down(void);


void test_freerange_up(void){

	aunit_printf("\n##FUNCTION_START_freerange\n");
 }

void test_freerange_down(void){
	aunit_printf("\n##FUNCTION_END_freerange\n");
 }



void abnormal_freerange_case(int index);

void abnormal_freerange_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_freerange_1(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	void *pa_start;
	void *pa_end;


	//值序列相关
	void *valueList_0[]={(void *)0x1000};
	unsigned int listLength_0=1;
	void *valueList_1[]={(void *)0x5000};
	unsigned int listLength_1=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=1;
	//初始化各桩函数调用计数器
	kfree_call_counter = 0;

	aunit_printf("###TEST_TREE_test_freerange_1,false,0\n");
	aunit_printf("#CASE_START_test_freerange_1\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			pa_start=(void *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			pa_end=(void *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		freerange(pa_start,pa_end);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("kfree","kfree_call_counter",kfree_call_counter)

	aunit_printf("#CASE_END_test_freerange_1\n");
}

void test_freerange_2(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	void *pa_start;
	void *pa_end;


	//值序列相关
	void *valueList_0[]={(void *)0x1234};
	unsigned int listLength_0=1;
	void *valueList_1[]={(void *)0x5000};
	unsigned int listLength_1=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=2;
	//初始化各桩函数调用计数器
	kfree_call_counter = 0;

	aunit_printf("###TEST_TREE_test_freerange_2,false,0\n");
	aunit_printf("#CASE_START_test_freerange_2\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			pa_start=(void *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			pa_end=(void *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		freerange(pa_start,pa_end);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("kfree","kfree_call_counter",kfree_call_counter)

	aunit_printf("#CASE_END_test_freerange_2\n");
}

void test_freerange_3(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	void *pa_start;
	void *pa_end;


	//值序列相关
	void *valueList_0[]={(void *)0x1000};
	unsigned int listLength_0=1;
	void *valueList_1[]={(void *)0x4321};
	unsigned int listLength_1=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=3;
	//初始化各桩函数调用计数器
	kfree_call_counter = 0;

	aunit_printf("###TEST_TREE_test_freerange_3,false,0\n");
	aunit_printf("#CASE_START_test_freerange_3\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			pa_start=(void *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			pa_end=(void *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		freerange(pa_start,pa_end);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("kfree","kfree_call_counter",kfree_call_counter)

	aunit_printf("#CASE_END_test_freerange_3\n");
}

void test_freerange_4(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	void *pa_start;
	void *pa_end;


	//值序列相关
	void *valueList_0[]={(void *)0x3000};
	unsigned int listLength_0=1;
	void *valueList_1[]={(void *)0x3000};
	unsigned int listLength_1=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=4;
	//初始化各桩函数调用计数器
	kfree_call_counter = 0;

	aunit_printf("###TEST_TREE_test_freerange_4,false,0\n");
	aunit_printf("#CASE_START_test_freerange_4\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			pa_start=(void *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			pa_end=(void *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		freerange(pa_start,pa_end);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("kfree","kfree_call_counter",kfree_call_counter)

	aunit_printf("#CASE_END_test_freerange_4\n");
}

void test_freerange_5(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	void *pa_start;
	void *pa_end;


	//值序列相关
	void *valueList_0[]={(void *)0x5000};
	unsigned int listLength_0=1;
	void *valueList_1[]={(void *)0x3000};
	unsigned int listLength_1=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=5;
	//初始化各桩函数调用计数器
	kfree_call_counter = 0;

	aunit_printf("###TEST_TREE_test_freerange_5,false,0\n");
	aunit_printf("#CASE_START_test_freerange_5\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			pa_start=(void *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			pa_end=(void *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		freerange(pa_start,pa_end);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("kfree","kfree_call_counter",kfree_call_counter)

	aunit_printf("#CASE_END_test_freerange_5\n");
}

void test_freerange_6(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	void *pa_start;
	void *pa_end;


	//值序列相关
	void *valueList_0[]={(void *)0x1000};
	unsigned int listLength_0=1;
	void *valueList_1[]={(void *)0x11000};
	unsigned int listLength_1=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=6;
	//初始化各桩函数调用计数器
	kfree_call_counter = 0;

	aunit_printf("###TEST_TREE_test_freerange_6,false,0\n");
	aunit_printf("#CASE_START_test_freerange_6\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			pa_start=(void *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			pa_end=(void *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		freerange(pa_start,pa_end);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("kfree","kfree_call_counter",kfree_call_counter)

	aunit_printf("#CASE_END_test_freerange_6\n");
}

void aunit_test_func_run(int caseIndex){

	test_freerange_up();

	switch(caseIndex){
	case 1:
		test_freerange_1();
		break;
	case 2:
		test_freerange_2();
		break;
	case 3:
		test_freerange_3();
		break;
	case 4:
		test_freerange_4();
		break;
	case 5:
		test_freerange_5();
		break;
	case 6:
		test_freerange_6();
		break;
	default:
		abnormal_freerange_case(caseIndex);
		break;
	}

	test_freerange_down();
}

