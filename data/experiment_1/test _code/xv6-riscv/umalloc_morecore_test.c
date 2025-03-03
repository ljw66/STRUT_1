void test_morecore_up(void);
void test_morecore_down(void);


void test_morecore_up(void){

	aunit_printf("\n##FUNCTION_START_morecore\n");
 }

void test_morecore_down(void){
	aunit_printf("\n##FUNCTION_END_morecore\n");
 }



void abnormal_morecore_case(int index);

void abnormal_morecore_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_morecore_1(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	unsigned int nu;

	//声明返回值局部变量，若为基本类型赋默认值
	Header *returnValue = 0;

	//值序列相关
	Header *valueList_0[]={(Header *)freep_PTRTO};
	unsigned int listLength_0=1;
	unsigned int valueList_1[]={2000};
	unsigned int listLength_1=1;
	long int valueList_2[]={0};
	unsigned int listLength_2=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=1;
	//初始化各桩函数调用计数器
	free_call_counter = 0;
	sbrk_call_counter = 0;

	aunit_printf("###TEST_TREE_test_morecore_1,false,0\n");
	aunit_printf("#CASE_START_test_morecore_1\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			freep=(Header *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			nu=(unsigned int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			(freep_PTRTO[0]).x=(long int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		returnValue = morecore(nu);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	OB_INT_EXPR("morecore","returnValue",returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("free","free_call_counter",free_call_counter)
	OB_INT_EXPR("sbrk","sbrk_call_counter",sbrk_call_counter)

	aunit_printf("#CASE_END_test_morecore_1\n");
}

void test_morecore_2(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	unsigned int nu;

	//声明返回值局部变量，若为基本类型赋默认值
	Header *returnValue = 0;

	//值序列相关
	Header *valueList_0[]={(Header *)freep_PTRTO};
	unsigned int listLength_0=1;
	unsigned int valueList_1[]={4096};
	unsigned int listLength_1=1;
	long int valueList_2[]={0};
	unsigned int listLength_2=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=2;
	//初始化各桩函数调用计数器
	free_call_counter = 0;
	sbrk_call_counter = 0;

	aunit_printf("###TEST_TREE_test_morecore_2,false,0\n");
	aunit_printf("#CASE_START_test_morecore_2\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			freep=(Header *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			nu=(unsigned int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			(freep_PTRTO[0]).x=(long int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		returnValue = morecore(nu);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	OB_INT_EXPR("morecore","returnValue",returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("free","free_call_counter",free_call_counter)
	OB_INT_EXPR("sbrk","sbrk_call_counter",sbrk_call_counter)

	aunit_printf("#CASE_END_test_morecore_2\n");
}

void test_morecore_3(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	unsigned int nu;

	//声明返回值局部变量，若为基本类型赋默认值
	Header *returnValue = 0;

	//值序列相关
	Header *valueList_0[]={(Header *)freep_PTRTO};
	unsigned int listLength_0=1;
	unsigned int valueList_1[]={5000};
	unsigned int listLength_1=1;
	long int valueList_2[]={0};
	unsigned int listLength_2=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=3;
	//初始化各桩函数调用计数器
	free_call_counter = 0;
	sbrk_call_counter = 0;

	aunit_printf("###TEST_TREE_test_morecore_3,false,0\n");
	aunit_printf("#CASE_START_test_morecore_3\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			freep=(Header *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			nu=(unsigned int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			(freep_PTRTO[0]).x=(long int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		returnValue = morecore(nu);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	OB_INT_EXPR("morecore","returnValue",returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("free","free_call_counter",free_call_counter)
	OB_INT_EXPR("sbrk","sbrk_call_counter",sbrk_call_counter)

	aunit_printf("#CASE_END_test_morecore_3\n");
}

void test_morecore_4(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	unsigned int nu;

	//声明返回值局部变量，若为基本类型赋默认值
	Header *returnValue = 0;

	//值序列相关
	Header *valueList_0[]={(Header *)freep_PTRTO};
	unsigned int listLength_0=1;
	unsigned int valueList_1[]={1000};
	unsigned int listLength_1=1;
	long int valueList_2[]={0};
	unsigned int listLength_2=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=4;
	//初始化各桩函数调用计数器
	free_call_counter = 0;
	sbrk_call_counter = 0;

	aunit_printf("###TEST_TREE_test_morecore_4,false,0\n");
	aunit_printf("#CASE_START_test_morecore_4\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			freep=(Header *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			nu=(unsigned int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			(freep_PTRTO[0]).x=(long int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		returnValue = morecore(nu);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_LONG("morecore","returnValue",0,returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("free","free_call_counter",free_call_counter)
	OB_INT_EXPR("sbrk","sbrk_call_counter",sbrk_call_counter)

	aunit_printf("#CASE_END_test_morecore_4\n");
}

void aunit_test_func_run(int caseIndex){

	test_morecore_up();

	switch(caseIndex){
	case 1:
		test_morecore_1();
		break;
	case 2:
		test_morecore_2();
		break;
	case 3:
		test_morecore_3();
		break;
	case 4:
		test_morecore_4();
		break;
	default:
		abnormal_morecore_case(caseIndex);
		break;
	}

	test_morecore_down();
}

