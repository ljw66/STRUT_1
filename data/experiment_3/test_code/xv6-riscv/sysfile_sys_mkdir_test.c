void test_sys_mkdir_up(void);
void test_sys_mkdir_down(void);


void test_sys_mkdir_up(void){

	aunit_printf("\n##FUNCTION_START_sys_mkdir\n");
 }

void test_sys_mkdir_down(void){
	aunit_printf("\n##FUNCTION_END_sys_mkdir\n");
 }



void abnormal_sys_mkdir_case(int index);

void abnormal_sys_mkdir_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_sys_mkdir_1(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明返回值局部变量，若为基本类型赋默认值
	uint64 returnValue = 0;

	//调用初始化函数

	//为case_count全局变量赋值
	case_id=1;
	//初始化各桩函数调用计数器
	begin_op_call_counter = 0;
	end_op_call_counter = 0;
	iunlockput_call_counter = 0;
	argstr_call_counter = 0;
	create_call_counter = 0;

	aunit_printf("###TEST_TREE_test_sys_mkdir_1,false,0\n");
	aunit_printf("#CASE_START_test_sys_mkdir_1\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		returnValue = sys_mkdir();
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_UNSIGNED_LONG("sys_mkdir","returnValue",0,returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("begin_op","begin_op_call_counter",begin_op_call_counter)
	OB_INT_EXPR("end_op","end_op_call_counter",end_op_call_counter)
	OB_INT_EXPR("iunlockput","iunlockput_call_counter",iunlockput_call_counter)
	OB_INT_EXPR("argstr","argstr_call_counter",argstr_call_counter)
	OB_INT_EXPR("create","create_call_counter",create_call_counter)

	aunit_printf("#CASE_END_test_sys_mkdir_1\n");
}

void test_sys_mkdir_2(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明返回值局部变量，若为基本类型赋默认值
	uint64 returnValue = 0;

	//调用初始化函数

	//为case_count全局变量赋值
	case_id=2;
	//初始化各桩函数调用计数器
	begin_op_call_counter = 0;
	end_op_call_counter = 0;
	iunlockput_call_counter = 0;
	argstr_call_counter = 0;
	create_call_counter = 0;

	aunit_printf("###TEST_TREE_test_sys_mkdir_2,false,0\n");
	aunit_printf("#CASE_START_test_sys_mkdir_2\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		returnValue = sys_mkdir();
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_UNSIGNED_LONG("sys_mkdir","returnValue",-1,returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("begin_op","begin_op_call_counter",begin_op_call_counter)
	OB_INT_EXPR("end_op","end_op_call_counter",end_op_call_counter)
	OB_INT_EXPR("iunlockput","iunlockput_call_counter",iunlockput_call_counter)
	OB_INT_EXPR("argstr","argstr_call_counter",argstr_call_counter)
	OB_INT_EXPR("create","create_call_counter",create_call_counter)

	aunit_printf("#CASE_END_test_sys_mkdir_2\n");
}

void test_sys_mkdir_3(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明返回值局部变量，若为基本类型赋默认值
	uint64 returnValue = 0;

	//调用初始化函数

	//为case_count全局变量赋值
	case_id=3;
	//初始化各桩函数调用计数器
	begin_op_call_counter = 0;
	end_op_call_counter = 0;
	iunlockput_call_counter = 0;
	argstr_call_counter = 0;
	create_call_counter = 0;

	aunit_printf("###TEST_TREE_test_sys_mkdir_3,false,0\n");
	aunit_printf("#CASE_START_test_sys_mkdir_3\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		returnValue = sys_mkdir();
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_UNSIGNED_LONG("sys_mkdir","returnValue",-1,returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("begin_op","begin_op_call_counter",begin_op_call_counter)
	OB_INT_EXPR("end_op","end_op_call_counter",end_op_call_counter)
	OB_INT_EXPR("iunlockput","iunlockput_call_counter",iunlockput_call_counter)
	OB_INT_EXPR("argstr","argstr_call_counter",argstr_call_counter)
	OB_INT_EXPR("create","create_call_counter",create_call_counter)

	aunit_printf("#CASE_END_test_sys_mkdir_3\n");
}

void aunit_test_func_run(int caseIndex){

	test_sys_mkdir_up();

	switch(caseIndex){
	case 1:
		test_sys_mkdir_1();
		break;
	case 2:
		test_sys_mkdir_2();
		break;
	case 3:
		test_sys_mkdir_3();
		break;
	default:
		abnormal_sys_mkdir_case(caseIndex);
		break;
	}

	test_sys_mkdir_down();
}

