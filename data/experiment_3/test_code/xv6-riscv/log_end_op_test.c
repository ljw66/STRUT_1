void test_end_op_up(void);
void test_end_op_down(void);


void test_end_op_up(void){

	aunit_printf("\n##FUNCTION_START_end_op\n");
 }

void test_end_op_down(void){
	aunit_printf("\n##FUNCTION_END_end_op\n");
 }



void abnormal_end_op_case(int index);

void abnormal_end_op_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_end_op_1(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;

	//值序列相关
	int valueList_0[]={1};
	unsigned int listLength_0=1;
	int valueList_1[]={0};
	unsigned int listLength_1=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=1;
	//初始化各桩函数调用计数器
	wakeup_call_counter = 0;
	release_call_counter = 0;
	commit_call_counter = 0;
	acquire_call_counter = 0;
	panic_call_counter = 0;

	aunit_printf("###TEST_TREE_test_end_op_1,false,0\n");
	aunit_printf("#CASE_START_test_end_op_1\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			log.outstanding=(int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			log.committing=(int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		end_op();
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("end_op","log.outstanding",0,log.outstanding)
	TEST_ASSERT_EQUAL_INT("end_op","log.committing",0,log.committing)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("wakeup","wakeup_call_counter",wakeup_call_counter)
	OB_INT_EXPR("release","release_call_counter",release_call_counter)
	OB_INT_EXPR("commit","commit_call_counter",commit_call_counter)
	OB_INT_EXPR("acquire","acquire_call_counter",acquire_call_counter)
	OB_INT_EXPR("panic","panic_call_counter",panic_call_counter)

	aunit_printf("#CASE_END_test_end_op_1\n");
}

void test_end_op_2(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;

	//值序列相关
	int valueList_0[]={2};
	unsigned int listLength_0=1;
	int valueList_1[]={0};
	unsigned int listLength_1=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=2;
	//初始化各桩函数调用计数器
	wakeup_call_counter = 0;
	release_call_counter = 0;
	commit_call_counter = 0;
	acquire_call_counter = 0;
	panic_call_counter = 0;

	aunit_printf("###TEST_TREE_test_end_op_2,false,0\n");
	aunit_printf("#CASE_START_test_end_op_2\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			log.outstanding=(int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			log.committing=(int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		end_op();
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("end_op","log.outstanding",1,log.outstanding)
	TEST_ASSERT_EQUAL_INT("end_op","log.committing",0,log.committing)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("wakeup","wakeup_call_counter",wakeup_call_counter)
	OB_INT_EXPR("release","release_call_counter",release_call_counter)
	OB_INT_EXPR("commit","commit_call_counter",commit_call_counter)
	OB_INT_EXPR("acquire","acquire_call_counter",acquire_call_counter)
	OB_INT_EXPR("panic","panic_call_counter",panic_call_counter)

	aunit_printf("#CASE_END_test_end_op_2\n");
}

void test_end_op_3(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;

	//值序列相关
	int valueList_0[]={1};
	unsigned int listLength_0=1;
	int valueList_1[]={1};
	unsigned int listLength_1=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=3;
	//初始化各桩函数调用计数器
	wakeup_call_counter = 0;
	release_call_counter = 0;
	commit_call_counter = 0;
	acquire_call_counter = 0;
	panic_call_counter = 0;

	aunit_printf("###TEST_TREE_test_end_op_3,false,0\n");
	aunit_printf("#CASE_START_test_end_op_3\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			log.outstanding=(int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			log.committing=(int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		end_op();
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("end_op","log.outstanding",0,log.outstanding)
	TEST_ASSERT_EQUAL_INT("end_op","log.committing",1,log.committing)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("wakeup","wakeup_call_counter",wakeup_call_counter)
	OB_INT_EXPR("release","release_call_counter",release_call_counter)
	OB_INT_EXPR("commit","commit_call_counter",commit_call_counter)
	OB_INT_EXPR("acquire","acquire_call_counter",acquire_call_counter)
	OB_INT_EXPR("panic","panic_call_counter",panic_call_counter)

	aunit_printf("#CASE_END_test_end_op_3\n");
}

void test_end_op_4(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;

	//值序列相关
	int valueList_0[]={2};
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
	wakeup_call_counter = 0;
	release_call_counter = 0;
	commit_call_counter = 0;
	acquire_call_counter = 0;
	panic_call_counter = 0;

	aunit_printf("###TEST_TREE_test_end_op_4,false,0\n");
	aunit_printf("#CASE_START_test_end_op_4\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			log.outstanding=(int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			log.committing=(int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		end_op();
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("end_op","log.outstanding",1,log.outstanding)
	TEST_ASSERT_EQUAL_INT("end_op","log.committing",0,log.committing)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("wakeup","wakeup_call_counter",wakeup_call_counter)
	OB_INT_EXPR("release","release_call_counter",release_call_counter)
	OB_INT_EXPR("commit","commit_call_counter",commit_call_counter)
	OB_INT_EXPR("acquire","acquire_call_counter",acquire_call_counter)
	OB_INT_EXPR("panic","panic_call_counter",panic_call_counter)

	aunit_printf("#CASE_END_test_end_op_4\n");
}

void aunit_test_func_run(int caseIndex){

	test_end_op_up();

	switch(caseIndex){
	case 1:
		test_end_op_1();
		break;
	case 2:
		test_end_op_2();
		break;
	case 3:
		test_end_op_3();
		break;
	case 4:
		test_end_op_4();
		break;
	default:
		abnormal_end_op_case(caseIndex);
		break;
	}

	test_end_op_down();
}

