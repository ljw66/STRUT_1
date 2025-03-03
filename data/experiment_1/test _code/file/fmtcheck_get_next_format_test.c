void test_get_next_format_up(void);
void test_get_next_format_down(void);


void test_get_next_format_up(void){

	aunit_printf("\n##FUNCTION_START_get_next_format\n");
 }

void test_get_next_format_down(void){
	aunit_printf("\n##FUNCTION_END_get_next_format\n");
 }



void abnormal_get_next_format_case(int index);

void abnormal_get_next_format_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_get_next_format_9(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	char **pf;
	enum __e_fmtcheck_types eft;

	//声明返回值局部变量，若为基本类型赋默认值
	EFT returnValue = 0;

	//调用初始化函数

	//为case_count全局变量赋值
	case_id=9;
	//初始化各桩函数调用计数器
	get_next_format_from_width_call_counter = 0;
	strchr_call_counter = 0;
	get_next_format_from_precision_call_counter = 0;
	isdigit_call_counter = 0;

	aunit_printf("###TEST_TREE_test_get_next_format_9,false,0\n");
	aunit_printf("#CASE_START_test_get_next_format_9\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		returnValue = get_next_format(pf,eft);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	OB_ENUM_EXPR("get_next_format","returnValue",returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("get_next_format_from_width","get_next_format_from_width_call_counter",get_next_format_from_width_call_counter)
	OB_INT_EXPR("strchr","strchr_call_counter",strchr_call_counter)
	OB_INT_EXPR("get_next_format_from_precision","get_next_format_from_precision_call_counter",get_next_format_from_precision_call_counter)
	OB_INT_EXPR("isdigit","isdigit_call_counter",isdigit_call_counter)

	aunit_printf("#CASE_END_test_get_next_format_9\n");
}

void aunit_test_func_run(int caseIndex){

	test_get_next_format_up();

	switch(caseIndex){
	case 9:
		test_get_next_format_9();
		break;
	default:
		abnormal_get_next_format_case(caseIndex);
		break;
	}

	test_get_next_format_down();
}

