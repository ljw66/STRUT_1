void test_clockintr_up(void);
void test_clockintr_down(void);


void test_clockintr_up(void){

	aunit_printf("\n##FUNCTION_START_clockintr\n");
 }

void test_clockintr_down(void){
	aunit_printf("\n##FUNCTION_END_clockintr\n");
 }



void abnormal_clockintr_case(int index);

void abnormal_clockintr_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_clockintr_1(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;

	//值序列相关
	unsigned int valueList_0[]={0};
	unsigned int listLength_0=1;
	unsigned int valueList_1[]={0};
	unsigned int listLength_1=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=1;
	//初始化各桩函数调用计数器
	w_stimecmp_call_counter = 0;
	r_time_call_counter = 0;
	cpuid_call_counter = 0;
	release_call_counter = 0;
	wakeup_call_counter = 0;
	acquire_call_counter = 0;

	aunit_printf("###TEST_TREE_test_clockintr_1,false,0\n");
	aunit_printf("#CASE_START_test_clockintr_1\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			ticks=(unsigned int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			tickslock.locked=(unsigned int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		clockintr();
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_UNSIGNED_INT("clockintr","ticks",1,ticks)
	TEST_ASSERT_EQUAL_UNSIGNED_INT("clockintr","tickslock.locked",0,tickslock.locked)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("w_stimecmp","w_stimecmp_call_counter",w_stimecmp_call_counter)
	OB_INT_EXPR("r_time","r_time_call_counter",r_time_call_counter)
	OB_INT_EXPR("cpuid","cpuid_call_counter",cpuid_call_counter)
	OB_INT_EXPR("release","release_call_counter",release_call_counter)
	OB_INT_EXPR("wakeup","wakeup_call_counter",wakeup_call_counter)
	OB_INT_EXPR("acquire","acquire_call_counter",acquire_call_counter)

	aunit_printf("#CASE_END_test_clockintr_1\n");
}

void test_clockintr_2(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;

	//值序列相关
	unsigned int valueList_0[]={0};
	unsigned int listLength_0=1;
	unsigned int valueList_1[]={0};
	unsigned int listLength_1=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=2;
	//初始化各桩函数调用计数器
	w_stimecmp_call_counter = 0;
	r_time_call_counter = 0;
	cpuid_call_counter = 0;
	release_call_counter = 0;
	wakeup_call_counter = 0;
	acquire_call_counter = 0;

	aunit_printf("###TEST_TREE_test_clockintr_2,false,0\n");
	aunit_printf("#CASE_START_test_clockintr_2\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			ticks=(unsigned int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			tickslock.locked=(unsigned int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		clockintr();
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_UNSIGNED_INT("clockintr","ticks",0,ticks)
	TEST_ASSERT_EQUAL_UNSIGNED_INT("clockintr","tickslock.locked",0,tickslock.locked)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("w_stimecmp","w_stimecmp_call_counter",w_stimecmp_call_counter)
	OB_INT_EXPR("r_time","r_time_call_counter",r_time_call_counter)
	OB_INT_EXPR("cpuid","cpuid_call_counter",cpuid_call_counter)
	OB_INT_EXPR("release","release_call_counter",release_call_counter)
	OB_INT_EXPR("wakeup","wakeup_call_counter",wakeup_call_counter)
	OB_INT_EXPR("acquire","acquire_call_counter",acquire_call_counter)

	aunit_printf("#CASE_END_test_clockintr_2\n");
}

void test_clockintr_3(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;

	//值序列相关
	unsigned int valueList_0[]={0};
	unsigned int listLength_0=1;
	unsigned int valueList_1[]={1};
	unsigned int listLength_1=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=3;
	//初始化各桩函数调用计数器
	w_stimecmp_call_counter = 0;
	r_time_call_counter = 0;
	cpuid_call_counter = 0;
	release_call_counter = 0;
	wakeup_call_counter = 0;
	acquire_call_counter = 0;

	aunit_printf("###TEST_TREE_test_clockintr_3,false,0\n");
	aunit_printf("#CASE_START_test_clockintr_3\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			ticks=(unsigned int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			tickslock.locked=(unsigned int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		clockintr();
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_UNSIGNED_INT("clockintr","ticks",1,ticks)
	TEST_ASSERT_EQUAL_UNSIGNED_INT("clockintr","tickslock.locked",0,tickslock.locked)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("w_stimecmp","w_stimecmp_call_counter",w_stimecmp_call_counter)
	OB_INT_EXPR("r_time","r_time_call_counter",r_time_call_counter)
	OB_INT_EXPR("cpuid","cpuid_call_counter",cpuid_call_counter)
	OB_INT_EXPR("release","release_call_counter",release_call_counter)
	OB_INT_EXPR("wakeup","wakeup_call_counter",wakeup_call_counter)
	OB_INT_EXPR("acquire","acquire_call_counter",acquire_call_counter)

	aunit_printf("#CASE_END_test_clockintr_3\n");
}

void test_clockintr_4(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;

	//值序列相关
	unsigned int valueList_0[]={5};
	unsigned int listLength_0=1;
	unsigned int valueList_1[]={0};
	unsigned int listLength_1=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=4;
	//初始化各桩函数调用计数器
	w_stimecmp_call_counter = 0;
	r_time_call_counter = 0;
	cpuid_call_counter = 0;
	release_call_counter = 0;
	wakeup_call_counter = 0;
	acquire_call_counter = 0;

	aunit_printf("###TEST_TREE_test_clockintr_4,false,0\n");
	aunit_printf("#CASE_START_test_clockintr_4\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			ticks=(unsigned int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			tickslock.locked=(unsigned int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		clockintr();
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_UNSIGNED_INT("clockintr","ticks",6,ticks)
	TEST_ASSERT_EQUAL_UNSIGNED_INT("clockintr","tickslock.locked",0,tickslock.locked)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("w_stimecmp","w_stimecmp_call_counter",w_stimecmp_call_counter)
	OB_INT_EXPR("r_time","r_time_call_counter",r_time_call_counter)
	OB_INT_EXPR("cpuid","cpuid_call_counter",cpuid_call_counter)
	OB_INT_EXPR("release","release_call_counter",release_call_counter)
	OB_INT_EXPR("wakeup","wakeup_call_counter",wakeup_call_counter)
	OB_INT_EXPR("acquire","acquire_call_counter",acquire_call_counter)

	aunit_printf("#CASE_END_test_clockintr_4\n");
}

void test_clockintr_5(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;

	//值序列相关
	unsigned int valueList_0[]={10};
	unsigned int listLength_0=1;
	unsigned int valueList_1[]={1};
	unsigned int listLength_1=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=5;
	//初始化各桩函数调用计数器
	w_stimecmp_call_counter = 0;
	r_time_call_counter = 0;
	cpuid_call_counter = 0;
	release_call_counter = 0;
	wakeup_call_counter = 0;
	acquire_call_counter = 0;

	aunit_printf("###TEST_TREE_test_clockintr_5,false,0\n");
	aunit_printf("#CASE_START_test_clockintr_5\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			ticks=(unsigned int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			tickslock.locked=(unsigned int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		clockintr();
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_UNSIGNED_INT("clockintr","ticks",10,ticks)
	TEST_ASSERT_EQUAL_UNSIGNED_INT("clockintr","tickslock.locked",1,tickslock.locked)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("w_stimecmp","w_stimecmp_call_counter",w_stimecmp_call_counter)
	OB_INT_EXPR("r_time","r_time_call_counter",r_time_call_counter)
	OB_INT_EXPR("cpuid","cpuid_call_counter",cpuid_call_counter)
	OB_INT_EXPR("release","release_call_counter",release_call_counter)
	OB_INT_EXPR("wakeup","wakeup_call_counter",wakeup_call_counter)
	OB_INT_EXPR("acquire","acquire_call_counter",acquire_call_counter)

	aunit_printf("#CASE_END_test_clockintr_5\n");
}

void test_clockintr_6(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;

	//值序列相关
	unsigned int valueList_0[]={0};
	unsigned int listLength_0=1;
	unsigned int valueList_1[]={0};
	unsigned int listLength_1=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=6;
	//初始化各桩函数调用计数器
	w_stimecmp_call_counter = 0;
	r_time_call_counter = 0;
	cpuid_call_counter = 0;
	release_call_counter = 0;
	wakeup_call_counter = 0;
	acquire_call_counter = 0;

	aunit_printf("###TEST_TREE_test_clockintr_6,false,0\n");
	aunit_printf("#CASE_START_test_clockintr_6\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			ticks=(unsigned int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			tickslock.locked=(unsigned int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		clockintr();
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_UNSIGNED_INT("clockintr","ticks",1,ticks)
	TEST_ASSERT_EQUAL_UNSIGNED_INT("clockintr","tickslock.locked",0,tickslock.locked)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("w_stimecmp","w_stimecmp_call_counter",w_stimecmp_call_counter)
	OB_INT_EXPR("r_time","r_time_call_counter",r_time_call_counter)
	OB_INT_EXPR("cpuid","cpuid_call_counter",cpuid_call_counter)
	OB_INT_EXPR("release","release_call_counter",release_call_counter)
	OB_INT_EXPR("wakeup","wakeup_call_counter",wakeup_call_counter)
	OB_INT_EXPR("acquire","acquire_call_counter",acquire_call_counter)

	aunit_printf("#CASE_END_test_clockintr_6\n");
}

void aunit_test_func_run(int caseIndex){

	test_clockintr_up();

	switch(caseIndex){
	case 1:
		test_clockintr_1();
		break;
	case 2:
		test_clockintr_2();
		break;
	case 3:
		test_clockintr_3();
		break;
	case 4:
		test_clockintr_4();
		break;
	case 5:
		test_clockintr_5();
		break;
	case 6:
		test_clockintr_6();
		break;
	default:
		abnormal_clockintr_case(caseIndex);
		break;
	}

	test_clockintr_down();
}

