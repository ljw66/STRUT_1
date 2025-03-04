void test_recover_from_log_up(void);
void test_recover_from_log_down(void);


void test_recover_from_log_up(void){

	aunit_printf("\n##FUNCTION_START_recover_from_log\n");
 }

void test_recover_from_log_down(void){
	aunit_printf("\n##FUNCTION_END_recover_from_log\n");
 }



void abnormal_recover_from_log_case(int index);

void abnormal_recover_from_log_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_recover_from_log_5(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;

	//调用初始化函数

	//为case_count全局变量赋值
	case_id=5;
	//初始化各桩函数调用计数器
	write_head_call_counter = 0;
	read_head_call_counter = 0;
	install_trans_call_counter = 0;

	aunit_printf("###TEST_TREE_test_recover_from_log_5,false,0\n");
	aunit_printf("#CASE_START_test_recover_from_log_5\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		recover_from_log();
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("write_head","write_head_call_counter",write_head_call_counter)
	OB_INT_EXPR("read_head","read_head_call_counter",read_head_call_counter)
	OB_INT_EXPR("install_trans","install_trans_call_counter",install_trans_call_counter)

	aunit_printf("#CASE_END_test_recover_from_log_5\n");
}

void aunit_test_func_run(int caseIndex){

	test_recover_from_log_up();

	switch(caseIndex){
	case 5:
		test_recover_from_log_5();
		break;
	default:
		abnormal_recover_from_log_case(caseIndex);
		break;
	}

	test_recover_from_log_down();
}

