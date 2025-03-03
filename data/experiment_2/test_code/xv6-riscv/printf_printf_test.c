void test_printf_up(void);
void test_printf_down(void);


void test_printf_up(void){

	aunit_printf("\n##FUNCTION_START_printf\n");
 }

void test_printf_down(void){
	aunit_printf("\n##FUNCTION_END_printf\n");
 }



void abnormal_printf_case(int index);

void abnormal_printf_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_printf_15(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	char *fmt;

	//声明返回值局部变量，若为基本类型赋默认值
	int returnValue = 0;

	//值序列相关
	char *valueList_0[]={(char *)"string: %s"};
	unsigned int listLength_0=1;
	int valueList_1[]={0};
	unsigned int listLength_1=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=15;
	//初始化各桩函数调用计数器
	consputc_call_counter = 0;
	release_call_counter = 0;
	printint_call_counter = 0;
	printptr_call_counter = 0;
	acquire_call_counter = 0;

	aunit_printf("###TEST_TREE_test_printf_15,false,0\n");
	aunit_printf("#CASE_START_test_printf_15\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			fmt=(char *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			pr.locking=(int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		returnValue = printf(fmt);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("printf","returnValue",0,returnValue)
	TEST_ASSERT_EQUAL_INT("printf","pr.locking",0,pr.locking)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("consputc","consputc_call_counter",consputc_call_counter)
	OB_INT_EXPR("release","release_call_counter",release_call_counter)
	OB_INT_EXPR("printint","printint_call_counter",printint_call_counter)
	OB_INT_EXPR("printptr","printptr_call_counter",printptr_call_counter)
	OB_INT_EXPR("acquire","acquire_call_counter",acquire_call_counter)

	aunit_printf("#CASE_END_test_printf_15\n");
}

void aunit_test_func_run(int caseIndex){

	test_printf_up();

	switch(caseIndex){
	case 15:
		test_printf_15();
		break;
	default:
		abnormal_printf_case(caseIndex);
		break;
	}

	test_printf_down();
}

