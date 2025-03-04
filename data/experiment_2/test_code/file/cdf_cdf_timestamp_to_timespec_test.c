void test_cdf_timestamp_to_timespec_up(void);
void test_cdf_timestamp_to_timespec_down(void);


void test_cdf_timestamp_to_timespec_up(void){

	aunit_printf("\n##FUNCTION_START_cdf_timestamp_to_timespec\n");
 }

void test_cdf_timestamp_to_timespec_down(void){
	aunit_printf("\n##FUNCTION_END_cdf_timestamp_to_timespec\n");
 }



void abnormal_cdf_timestamp_to_timespec_case(int index);

void abnormal_cdf_timestamp_to_timespec_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_cdf_timestamp_to_timespec_1(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	struct timespec *ts;
	long long int t;

	//声明返回值局部变量，若为基本类型赋默认值
	int returnValue = 0;

	//值序列相关
	int valueList_0[]={0};
	unsigned int listLength_0=1;
	long long int valueList_1[]={132537600000000000};
	unsigned int listLength_1=1;
	struct timespec *valueList_2[]={(struct timespec *)ts_PTRTO};
	unsigned int listLength_2=1;
	long int valueList_3[]={0};
	unsigned int listLength_3=1;
	long int valueList_4[]={0};
	unsigned int listLength_4=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	unsigned char useLast_4=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=1;
	//初始化各桩函数调用计数器
	cdf_getdays_call_counter = 0;
	cdf_getmonth_call_counter = 0;
	mktime_call_counter = 0;
	cdf_getday_call_counter = 0;

	aunit_printf("###TEST_TREE_test_cdf_timestamp_to_timespec_1,false,0\n");
	aunit_printf("#CASE_START_test_cdf_timestamp_to_timespec_1\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			errno=(int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			t=(long long int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			ts=(struct timespec *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			(ts_PTRTO[0]).tv_nsec=(long int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(ts_PTRTO[0]).tv_sec=(long int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		returnValue = cdf_timestamp_to_timespec(ts,t);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("cdf_timestamp_to_timespec","errno",0,errno)
	TEST_ASSERT_EQUAL_INT("cdf_timestamp_to_timespec","returnValue",0,returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("cdf_getdays","cdf_getdays_call_counter",cdf_getdays_call_counter)
	OB_INT_EXPR("cdf_getmonth","cdf_getmonth_call_counter",cdf_getmonth_call_counter)
	OB_INT_EXPR("mktime","mktime_call_counter",mktime_call_counter)
	OB_INT_EXPR("cdf_getday","cdf_getday_call_counter",cdf_getday_call_counter)

	aunit_printf("#CASE_END_test_cdf_timestamp_to_timespec_1\n");
}

void test_cdf_timestamp_to_timespec_2(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	struct timespec *ts;
	long long int t;

	//声明返回值局部变量，若为基本类型赋默认值
	int returnValue = 0;

	//值序列相关
	int valueList_0[]={0};
	unsigned int listLength_0=1;
	long long int valueList_1[]={0};
	unsigned int listLength_1=1;
	struct timespec *valueList_2[]={(struct timespec *)ts_PTRTO};
	unsigned int listLength_2=1;
	long int valueList_3[]={0};
	unsigned int listLength_3=1;
	long int valueList_4[]={0};
	unsigned int listLength_4=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	unsigned char useLast_4=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=2;
	//初始化各桩函数调用计数器
	cdf_getdays_call_counter = 0;
	cdf_getmonth_call_counter = 0;
	mktime_call_counter = 0;
	cdf_getday_call_counter = 0;

	aunit_printf("###TEST_TREE_test_cdf_timestamp_to_timespec_2,false,0\n");
	aunit_printf("#CASE_START_test_cdf_timestamp_to_timespec_2\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			errno=(int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			t=(long long int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			ts=(struct timespec *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			(ts_PTRTO[0]).tv_nsec=(long int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(ts_PTRTO[0]).tv_sec=(long int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		returnValue = cdf_timestamp_to_timespec(ts,t);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("cdf_timestamp_to_timespec","errno",0,errno)
	TEST_ASSERT_EQUAL_INT("cdf_timestamp_to_timespec","returnValue",0,returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("cdf_getdays","cdf_getdays_call_counter",cdf_getdays_call_counter)
	OB_INT_EXPR("cdf_getmonth","cdf_getmonth_call_counter",cdf_getmonth_call_counter)
	OB_INT_EXPR("mktime","mktime_call_counter",mktime_call_counter)
	OB_INT_EXPR("cdf_getday","cdf_getday_call_counter",cdf_getday_call_counter)

	aunit_printf("#CASE_END_test_cdf_timestamp_to_timespec_2\n");
}

void test_cdf_timestamp_to_timespec_3(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	struct timespec *ts;
	long long int t;

	//声明返回值局部变量，若为基本类型赋默认值
	int returnValue = 0;

	//值序列相关
	int valueList_0[]={0};
	unsigned int listLength_0=1;
	long long int valueList_1[]={132537600000000000};
	unsigned int listLength_1=1;
	struct timespec *valueList_2[]={(struct timespec *)ts_PTRTO};
	unsigned int listLength_2=1;
	long int valueList_3[]={0};
	unsigned int listLength_3=1;
	long int valueList_4[]={0};
	unsigned int listLength_4=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	unsigned char useLast_4=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=3;
	//初始化各桩函数调用计数器
	cdf_getdays_call_counter = 0;
	cdf_getmonth_call_counter = 0;
	mktime_call_counter = 0;
	cdf_getday_call_counter = 0;

	aunit_printf("###TEST_TREE_test_cdf_timestamp_to_timespec_3,false,0\n");
	aunit_printf("#CASE_START_test_cdf_timestamp_to_timespec_3\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			errno=(int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			t=(long long int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			ts=(struct timespec *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			(ts_PTRTO[0]).tv_nsec=(long int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(ts_PTRTO[0]).tv_sec=(long int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		returnValue = cdf_timestamp_to_timespec(ts,t);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("cdf_timestamp_to_timespec","errno",22,errno)
	TEST_ASSERT_EQUAL_INT("cdf_timestamp_to_timespec","returnValue",-1,returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("cdf_getdays","cdf_getdays_call_counter",cdf_getdays_call_counter)
	OB_INT_EXPR("cdf_getmonth","cdf_getmonth_call_counter",cdf_getmonth_call_counter)
	OB_INT_EXPR("mktime","mktime_call_counter",mktime_call_counter)
	OB_INT_EXPR("cdf_getday","cdf_getday_call_counter",cdf_getday_call_counter)

	aunit_printf("#CASE_END_test_cdf_timestamp_to_timespec_3\n");
}

void test_cdf_timestamp_to_timespec_4(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	struct timespec *ts;
	long long int t;

	//声明返回值局部变量，若为基本类型赋默认值
	int returnValue = 0;

	//值序列相关
	int valueList_0[]={0};
	unsigned int listLength_0=1;
	long long int valueList_1[]={126230400000000000};
	unsigned int listLength_1=1;
	struct timespec *valueList_2[]={(struct timespec *)ts_PTRTO};
	unsigned int listLength_2=1;
	long int valueList_3[]={0};
	unsigned int listLength_3=1;
	long int valueList_4[]={0};
	unsigned int listLength_4=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	unsigned char useLast_4=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=4;
	//初始化各桩函数调用计数器
	cdf_getdays_call_counter = 0;
	cdf_getmonth_call_counter = 0;
	mktime_call_counter = 0;
	cdf_getday_call_counter = 0;

	aunit_printf("###TEST_TREE_test_cdf_timestamp_to_timespec_4,false,0\n");
	aunit_printf("#CASE_START_test_cdf_timestamp_to_timespec_4\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			errno=(int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			t=(long long int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			ts=(struct timespec *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			(ts_PTRTO[0]).tv_nsec=(long int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(ts_PTRTO[0]).tv_sec=(long int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		returnValue = cdf_timestamp_to_timespec(ts,t);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("cdf_timestamp_to_timespec","errno",0,errno)
	TEST_ASSERT_EQUAL_INT("cdf_timestamp_to_timespec","returnValue",0,returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("cdf_getdays","cdf_getdays_call_counter",cdf_getdays_call_counter)
	OB_INT_EXPR("cdf_getmonth","cdf_getmonth_call_counter",cdf_getmonth_call_counter)
	OB_INT_EXPR("mktime","mktime_call_counter",mktime_call_counter)
	OB_INT_EXPR("cdf_getday","cdf_getday_call_counter",cdf_getday_call_counter)

	aunit_printf("#CASE_END_test_cdf_timestamp_to_timespec_4\n");
}

void test_cdf_timestamp_to_timespec_5(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	struct timespec *ts;
	long long int t;

	//声明返回值局部变量，若为基本类型赋默认值
	int returnValue = 0;

	//值序列相关
	int valueList_0[]={0};
	unsigned int listLength_0=1;
	long long int valueList_1[]={315569952000000000};
	unsigned int listLength_1=1;
	struct timespec *valueList_2[]={(struct timespec *)ts_PTRTO};
	unsigned int listLength_2=1;
	long int valueList_3[]={0};
	unsigned int listLength_3=1;
	long int valueList_4[]={0};
	unsigned int listLength_4=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	unsigned char useLast_4=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=5;
	//初始化各桩函数调用计数器
	cdf_getdays_call_counter = 0;
	cdf_getmonth_call_counter = 0;
	mktime_call_counter = 0;
	cdf_getday_call_counter = 0;

	aunit_printf("###TEST_TREE_test_cdf_timestamp_to_timespec_5,false,0\n");
	aunit_printf("#CASE_START_test_cdf_timestamp_to_timespec_5\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			errno=(int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			t=(long long int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			ts=(struct timespec *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			(ts_PTRTO[0]).tv_nsec=(long int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(ts_PTRTO[0]).tv_sec=(long int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		returnValue = cdf_timestamp_to_timespec(ts,t);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("cdf_timestamp_to_timespec","errno",0,errno)
	TEST_ASSERT_EQUAL_INT("cdf_timestamp_to_timespec","returnValue",0,returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("cdf_getdays","cdf_getdays_call_counter",cdf_getdays_call_counter)
	OB_INT_EXPR("cdf_getmonth","cdf_getmonth_call_counter",cdf_getmonth_call_counter)
	OB_INT_EXPR("mktime","mktime_call_counter",mktime_call_counter)
	OB_INT_EXPR("cdf_getday","cdf_getday_call_counter",cdf_getday_call_counter)

	aunit_printf("#CASE_END_test_cdf_timestamp_to_timespec_5\n");
}

void aunit_test_func_run(int caseIndex){

	test_cdf_timestamp_to_timespec_up();

	switch(caseIndex){
	case 1:
		test_cdf_timestamp_to_timespec_1();
		break;
	case 2:
		test_cdf_timestamp_to_timespec_2();
		break;
	case 3:
		test_cdf_timestamp_to_timespec_3();
		break;
	case 4:
		test_cdf_timestamp_to_timespec_4();
		break;
	case 5:
		test_cdf_timestamp_to_timespec_5();
		break;
	default:
		abnormal_cdf_timestamp_to_timespec_case(caseIndex);
		break;
	}

	test_cdf_timestamp_to_timespec_down();
}

