void test_parseblock_up(void);
void test_parseblock_down(void);


void test_parseblock_up(void){

	aunit_printf("\n##FUNCTION_START_parseblock\n");
 }

void test_parseblock_down(void){
	aunit_printf("\n##FUNCTION_END_parseblock\n");
 }



void abnormal_parseblock_case(int index);

void abnormal_parseblock_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_parseblock_1(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	char **ps;
	char *es;

	//声明返回值局部变量，若为基本类型赋默认值
	struct cmd *returnValue = 0;

	//值序列相关
	//*ps is an invalid expression 
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=1;
	//初始化各桩函数调用计数器
	parseredirs_call_counter = 0;
	gettoken_call_counter = 0;
	parseline_call_counter = 0;
	panic_call_counter = 0;
	peek_call_counter = 0;

	aunit_printf("###TEST_TREE_test_parseblock_1,false,0\n");
	aunit_printf("#CASE_START_test_parseblock_1\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		returnValue = parseblock(ps,es);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	OB_INT_EXPR("parseblock","returnValue",returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("parseredirs","parseredirs_call_counter",parseredirs_call_counter)
	OB_INT_EXPR("gettoken","gettoken_call_counter",gettoken_call_counter)
	OB_INT_EXPR("parseline","parseline_call_counter",parseline_call_counter)
	OB_INT_EXPR("panic","panic_call_counter",panic_call_counter)
	OB_INT_EXPR("peek","peek_call_counter",peek_call_counter)

	aunit_printf("#CASE_END_test_parseblock_1\n");
}

void test_parseblock_2(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	char **ps;
	char *es;

	//声明返回值局部变量，若为基本类型赋默认值
	struct cmd *returnValue = 0;

	//值序列相关
	//*ps is an invalid expression 
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=2;
	//初始化各桩函数调用计数器
	parseredirs_call_counter = 0;
	gettoken_call_counter = 0;
	parseline_call_counter = 0;
	panic_call_counter = 0;
	peek_call_counter = 0;

	aunit_printf("###TEST_TREE_test_parseblock_2,false,0\n");
	aunit_printf("#CASE_START_test_parseblock_2\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		returnValue = parseblock(ps,es);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	OB_INT_EXPR("parseblock","returnValue",returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("parseredirs","parseredirs_call_counter",parseredirs_call_counter)
	OB_INT_EXPR("gettoken","gettoken_call_counter",gettoken_call_counter)
	OB_INT_EXPR("parseline","parseline_call_counter",parseline_call_counter)
	OB_INT_EXPR("panic","panic_call_counter",panic_call_counter)
	OB_INT_EXPR("peek","peek_call_counter",peek_call_counter)

	aunit_printf("#CASE_END_test_parseblock_2\n");
}

void test_parseblock_3(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	char **ps;
	char *es;

	//声明返回值局部变量，若为基本类型赋默认值
	struct cmd *returnValue = 0;

	//值序列相关
	//*ps is an invalid expression 
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=3;
	//初始化各桩函数调用计数器
	parseredirs_call_counter = 0;
	gettoken_call_counter = 0;
	parseline_call_counter = 0;
	panic_call_counter = 0;
	peek_call_counter = 0;

	aunit_printf("###TEST_TREE_test_parseblock_3,false,0\n");
	aunit_printf("#CASE_START_test_parseblock_3\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		returnValue = parseblock(ps,es);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	OB_INT_EXPR("parseblock","returnValue",returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("parseredirs","parseredirs_call_counter",parseredirs_call_counter)
	OB_INT_EXPR("gettoken","gettoken_call_counter",gettoken_call_counter)
	OB_INT_EXPR("parseline","parseline_call_counter",parseline_call_counter)
	OB_INT_EXPR("panic","panic_call_counter",panic_call_counter)
	OB_INT_EXPR("peek","peek_call_counter",peek_call_counter)

	aunit_printf("#CASE_END_test_parseblock_3\n");
}

void test_parseblock_4(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	char **ps;
	char *es;

	//声明返回值局部变量，若为基本类型赋默认值
	struct cmd *returnValue = 0;

	//值序列相关
	//*ps is an invalid expression 
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=4;
	//初始化各桩函数调用计数器
	parseredirs_call_counter = 0;
	gettoken_call_counter = 0;
	parseline_call_counter = 0;
	panic_call_counter = 0;
	peek_call_counter = 0;

	aunit_printf("###TEST_TREE_test_parseblock_4,false,0\n");
	aunit_printf("#CASE_START_test_parseblock_4\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		returnValue = parseblock(ps,es);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	OB_INT_EXPR("parseblock","returnValue",returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("parseredirs","parseredirs_call_counter",parseredirs_call_counter)
	OB_INT_EXPR("gettoken","gettoken_call_counter",gettoken_call_counter)
	OB_INT_EXPR("parseline","parseline_call_counter",parseline_call_counter)
	OB_INT_EXPR("panic","panic_call_counter",panic_call_counter)
	OB_INT_EXPR("peek","peek_call_counter",peek_call_counter)

	aunit_printf("#CASE_END_test_parseblock_4\n");
}

void test_parseblock_5(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	char **ps;
	char *es;

	//声明返回值局部变量，若为基本类型赋默认值
	struct cmd *returnValue = 0;

	//调用初始化函数

	//为case_count全局变量赋值
	case_id=5;
	//初始化各桩函数调用计数器
	parseredirs_call_counter = 0;
	gettoken_call_counter = 0;
	parseline_call_counter = 0;
	panic_call_counter = 0;
	peek_call_counter = 0;

	aunit_printf("###TEST_TREE_test_parseblock_5,false,0\n");
	aunit_printf("#CASE_START_test_parseblock_5\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		returnValue = parseblock(ps,es);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	OB_INT_EXPR("parseblock","returnValue",returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("parseredirs","parseredirs_call_counter",parseredirs_call_counter)
	OB_INT_EXPR("gettoken","gettoken_call_counter",gettoken_call_counter)
	OB_INT_EXPR("parseline","parseline_call_counter",parseline_call_counter)
	OB_INT_EXPR("panic","panic_call_counter",panic_call_counter)
	OB_INT_EXPR("peek","peek_call_counter",peek_call_counter)

	aunit_printf("#CASE_END_test_parseblock_5\n");
}

void aunit_test_func_run(int caseIndex){

	test_parseblock_up();

	switch(caseIndex){
	case 1:
		test_parseblock_1();
		break;
	case 2:
		test_parseblock_2();
		break;
	case 3:
		test_parseblock_3();
		break;
	case 4:
		test_parseblock_4();
		break;
	case 5:
		test_parseblock_5();
		break;
	default:
		abnormal_parseblock_case(caseIndex);
		break;
	}

	test_parseblock_down();
}

