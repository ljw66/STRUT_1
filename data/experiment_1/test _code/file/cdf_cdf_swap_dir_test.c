void test_cdf_swap_dir_up(void);
void test_cdf_swap_dir_down(void);


void test_cdf_swap_dir_up(void){

	aunit_printf("\n##FUNCTION_START_cdf_swap_dir\n");
 }

void test_cdf_swap_dir_down(void){
	aunit_printf("\n##FUNCTION_END_cdf_swap_dir\n");
 }



void abnormal_cdf_swap_dir_case(int index);

void abnormal_cdf_swap_dir_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_cdf_swap_dir_1(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	cdf_directory_t *d;


	//值序列相关
	cdf_directory_t *valueList_0[]={(cdf_directory_t *)d_PTRTO};
	unsigned int listLength_0=1;
	unsigned int valueList_1[]={16909060};
	unsigned int listLength_1=1;
	int valueList_2[]={400};
	unsigned int listLength_2=1;
	unsigned int valueList_3[]={500};
	unsigned int listLength_3=1;
	int valueList_4[]={800};
	unsigned int listLength_4=1;
	unsigned short int valueList_5[]={100};
	unsigned int listLength_5=1;
	unsigned int valueList_6[]={900};
	unsigned int listLength_6=1;
	int valueList_7[]={300};
	unsigned int listLength_7=1;
	int valueList_8[]={200};
	unsigned int listLength_8=1;
	long long int valueList_9[]={600};
	unsigned int listLength_9=1;
	long long int valueList_10[]={700};
	unsigned int listLength_10=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	unsigned char useLast_4=0;
	unsigned char useLast_5=0;
	unsigned char useLast_6=0;
	unsigned char useLast_7=0;
	unsigned char useLast_8=0;
	unsigned char useLast_9=0;
	unsigned char useLast_10=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=1;
	//初始化各桩函数调用计数器
	_cdf_tole8_call_counter = 0;
	_cdf_tole2_call_counter = 0;
	_cdf_tole4_call_counter = 0;

	aunit_printf("###TEST_TREE_test_cdf_swap_dir_1,false,0\n");
	aunit_printf("#CASE_START_test_cdf_swap_dir_1\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			d=(cdf_directory_t *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			cdf_bo.u=(unsigned int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			(d_PTRTO[0]).d_storage=(int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			(d_PTRTO[0]).d_flags=(unsigned int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(d_PTRTO[0]).d_stream_first_sector=(int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			(d_PTRTO[0]).d_namelen=(unsigned short int)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			(d_PTRTO[0]).d_size=(unsigned int)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			(d_PTRTO[0]).d_right_child=(int)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		if(aUnItCoUnTeR<listLength_8 || useLast_8){
			(d_PTRTO[0]).d_left_child=(int)valueList_8[aUnItCoUnTeR<listLength_8?aUnItCoUnTeR:listLength_8-1];

		}
		if(aUnItCoUnTeR<listLength_9 || useLast_9){
			(d_PTRTO[0]).d_created=(long long int)valueList_9[aUnItCoUnTeR<listLength_9?aUnItCoUnTeR:listLength_9-1];

		}
		if(aUnItCoUnTeR<listLength_10 || useLast_10){
			(d_PTRTO[0]).d_modified=(long long int)valueList_10[aUnItCoUnTeR<listLength_10?aUnItCoUnTeR:listLength_10-1];

		}
		cdf_swap_dir(d);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("cdf_swap_dir","d->d_right_child",3,d->d_right_child)
	TEST_ASSERT_EQUAL_LONGLONG("cdf_swap_dir","d->d_created",1,d->d_created)
	TEST_ASSERT_EQUAL_INT("cdf_swap_dir","d->d_left_child",3,d->d_left_child)
	TEST_ASSERT_EQUAL_INT("cdf_swap_dir","d->d_stream_first_sector",3,d->d_stream_first_sector)
	TEST_ASSERT_EQUAL_UNSIGNED_INT("cdf_swap_dir","cdf_bo.u",16909060,cdf_bo.u)
	TEST_ASSERT_EQUAL_UNSIGNED_SHORT("cdf_swap_dir","d->d_namelen",2,d->d_namelen)
	TEST_ASSERT_EQUAL_UNSIGNED_INT("cdf_swap_dir","d->d_size",3,d->d_size)
	TEST_ASSERT_EQUAL_INT("cdf_swap_dir","d->d_storage",3,d->d_storage)
	TEST_ASSERT_EQUAL_LONGLONG("cdf_swap_dir","d->d_modified",1,d->d_modified)
	TEST_ASSERT_EQUAL_UNSIGNED_INT("cdf_swap_dir","d->d_flags",3,d->d_flags)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("_cdf_tole8","_cdf_tole8_call_counter",_cdf_tole8_call_counter)
	OB_INT_EXPR("_cdf_tole2","_cdf_tole2_call_counter",_cdf_tole2_call_counter)
	OB_INT_EXPR("_cdf_tole4","_cdf_tole4_call_counter",_cdf_tole4_call_counter)

	aunit_printf("#CASE_END_test_cdf_swap_dir_1\n");
}

void test_cdf_swap_dir_2(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	cdf_directory_t *d;


	//值序列相关
	cdf_directory_t *valueList_0[]={(cdf_directory_t *)d_PTRTO};
	unsigned int listLength_0=1;
	unsigned int valueList_1[]={12345678};
	unsigned int listLength_1=1;
	int valueList_2[]={350};
	unsigned int listLength_2=1;
	unsigned int valueList_3[]={450};
	unsigned int listLength_3=1;
	int valueList_4[]={750};
	unsigned int listLength_4=1;
	unsigned short int valueList_5[]={50};
	unsigned int listLength_5=1;
	unsigned int valueList_6[]={850};
	unsigned int listLength_6=1;
	int valueList_7[]={250};
	unsigned int listLength_7=1;
	int valueList_8[]={150};
	unsigned int listLength_8=1;
	long long int valueList_9[]={550};
	unsigned int listLength_9=1;
	long long int valueList_10[]={650};
	unsigned int listLength_10=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	unsigned char useLast_4=0;
	unsigned char useLast_5=0;
	unsigned char useLast_6=0;
	unsigned char useLast_7=0;
	unsigned char useLast_8=0;
	unsigned char useLast_9=0;
	unsigned char useLast_10=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=2;
	//初始化各桩函数调用计数器
	_cdf_tole8_call_counter = 0;
	_cdf_tole2_call_counter = 0;
	_cdf_tole4_call_counter = 0;

	aunit_printf("###TEST_TREE_test_cdf_swap_dir_2,false,0\n");
	aunit_printf("#CASE_START_test_cdf_swap_dir_2\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			d=(cdf_directory_t *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			cdf_bo.u=(unsigned int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			(d_PTRTO[0]).d_storage=(int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			(d_PTRTO[0]).d_flags=(unsigned int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(d_PTRTO[0]).d_stream_first_sector=(int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			(d_PTRTO[0]).d_namelen=(unsigned short int)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			(d_PTRTO[0]).d_size=(unsigned int)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			(d_PTRTO[0]).d_right_child=(int)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		if(aUnItCoUnTeR<listLength_8 || useLast_8){
			(d_PTRTO[0]).d_left_child=(int)valueList_8[aUnItCoUnTeR<listLength_8?aUnItCoUnTeR:listLength_8-1];

		}
		if(aUnItCoUnTeR<listLength_9 || useLast_9){
			(d_PTRTO[0]).d_created=(long long int)valueList_9[aUnItCoUnTeR<listLength_9?aUnItCoUnTeR:listLength_9-1];

		}
		if(aUnItCoUnTeR<listLength_10 || useLast_10){
			(d_PTRTO[0]).d_modified=(long long int)valueList_10[aUnItCoUnTeR<listLength_10?aUnItCoUnTeR:listLength_10-1];

		}
		cdf_swap_dir(d);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("cdf_swap_dir","d->d_right_child",250,d->d_right_child)
	TEST_ASSERT_EQUAL_LONGLONG("cdf_swap_dir","d->d_created",550,d->d_created)
	TEST_ASSERT_EQUAL_INT("cdf_swap_dir","d->d_left_child",150,d->d_left_child)
	TEST_ASSERT_EQUAL_INT("cdf_swap_dir","d->d_stream_first_sector",750,d->d_stream_first_sector)
	TEST_ASSERT_EQUAL_UNSIGNED_INT("cdf_swap_dir","cdf_bo.u",12345678,cdf_bo.u)
	TEST_ASSERT_EQUAL_UNSIGNED_SHORT("cdf_swap_dir","d->d_namelen",50,d->d_namelen)
	TEST_ASSERT_EQUAL_UNSIGNED_INT("cdf_swap_dir","d->d_size",850,d->d_size)
	TEST_ASSERT_EQUAL_INT("cdf_swap_dir","d->d_storage",350,d->d_storage)
	TEST_ASSERT_EQUAL_LONGLONG("cdf_swap_dir","d->d_modified",650,d->d_modified)
	TEST_ASSERT_EQUAL_UNSIGNED_INT("cdf_swap_dir","d->d_flags",450,d->d_flags)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("_cdf_tole8","_cdf_tole8_call_counter",_cdf_tole8_call_counter)
	OB_INT_EXPR("_cdf_tole2","_cdf_tole2_call_counter",_cdf_tole2_call_counter)
	OB_INT_EXPR("_cdf_tole4","_cdf_tole4_call_counter",_cdf_tole4_call_counter)

	aunit_printf("#CASE_END_test_cdf_swap_dir_2\n");
}

void test_cdf_swap_dir_3(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	cdf_directory_t *d;


	//值序列相关
	cdf_directory_t *valueList_0[]={(cdf_directory_t *)d_PTRTO};
	unsigned int listLength_0=1;
	unsigned int valueList_1[]={0};
	unsigned int listLength_1=1;
	int valueList_2[]={0};
	unsigned int listLength_2=1;
	unsigned int valueList_3[]={0};
	unsigned int listLength_3=1;
	int valueList_4[]={0};
	unsigned int listLength_4=1;
	unsigned short int valueList_5[]={0};
	unsigned int listLength_5=1;
	unsigned int valueList_6[]={0};
	unsigned int listLength_6=1;
	int valueList_7[]={0};
	unsigned int listLength_7=1;
	int valueList_8[]={0};
	unsigned int listLength_8=1;
	long long int valueList_9[]={0};
	unsigned int listLength_9=1;
	long long int valueList_10[]={0};
	unsigned int listLength_10=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	unsigned char useLast_4=0;
	unsigned char useLast_5=0;
	unsigned char useLast_6=0;
	unsigned char useLast_7=0;
	unsigned char useLast_8=0;
	unsigned char useLast_9=0;
	unsigned char useLast_10=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=3;
	//初始化各桩函数调用计数器
	_cdf_tole8_call_counter = 0;
	_cdf_tole2_call_counter = 0;
	_cdf_tole4_call_counter = 0;

	aunit_printf("###TEST_TREE_test_cdf_swap_dir_3,false,0\n");
	aunit_printf("#CASE_START_test_cdf_swap_dir_3\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			d=(cdf_directory_t *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			cdf_bo.u=(unsigned int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			(d_PTRTO[0]).d_storage=(int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			(d_PTRTO[0]).d_flags=(unsigned int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(d_PTRTO[0]).d_stream_first_sector=(int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			(d_PTRTO[0]).d_namelen=(unsigned short int)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			(d_PTRTO[0]).d_size=(unsigned int)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			(d_PTRTO[0]).d_right_child=(int)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		if(aUnItCoUnTeR<listLength_8 || useLast_8){
			(d_PTRTO[0]).d_left_child=(int)valueList_8[aUnItCoUnTeR<listLength_8?aUnItCoUnTeR:listLength_8-1];

		}
		if(aUnItCoUnTeR<listLength_9 || useLast_9){
			(d_PTRTO[0]).d_created=(long long int)valueList_9[aUnItCoUnTeR<listLength_9?aUnItCoUnTeR:listLength_9-1];

		}
		if(aUnItCoUnTeR<listLength_10 || useLast_10){
			(d_PTRTO[0]).d_modified=(long long int)valueList_10[aUnItCoUnTeR<listLength_10?aUnItCoUnTeR:listLength_10-1];

		}
		cdf_swap_dir(d);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("cdf_swap_dir","d->d_right_child",0,d->d_right_child)
	TEST_ASSERT_EQUAL_LONGLONG("cdf_swap_dir","d->d_created",0,d->d_created)
	TEST_ASSERT_EQUAL_INT("cdf_swap_dir","d->d_left_child",0,d->d_left_child)
	TEST_ASSERT_EQUAL_INT("cdf_swap_dir","d->d_stream_first_sector",0,d->d_stream_first_sector)
	TEST_ASSERT_EQUAL_UNSIGNED_INT("cdf_swap_dir","cdf_bo.u",0,cdf_bo.u)
	TEST_ASSERT_EQUAL_UNSIGNED_SHORT("cdf_swap_dir","d->d_namelen",0,d->d_namelen)
	TEST_ASSERT_EQUAL_UNSIGNED_INT("cdf_swap_dir","d->d_size",0,d->d_size)
	TEST_ASSERT_EQUAL_INT("cdf_swap_dir","d->d_storage",0,d->d_storage)
	TEST_ASSERT_EQUAL_LONGLONG("cdf_swap_dir","d->d_modified",0,d->d_modified)
	TEST_ASSERT_EQUAL_UNSIGNED_INT("cdf_swap_dir","d->d_flags",0,d->d_flags)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("_cdf_tole8","_cdf_tole8_call_counter",_cdf_tole8_call_counter)
	OB_INT_EXPR("_cdf_tole2","_cdf_tole2_call_counter",_cdf_tole2_call_counter)
	OB_INT_EXPR("_cdf_tole4","_cdf_tole4_call_counter",_cdf_tole4_call_counter)

	aunit_printf("#CASE_END_test_cdf_swap_dir_3\n");
}

void aunit_test_func_run(int caseIndex){

	test_cdf_swap_dir_up();

	switch(caseIndex){
	case 1:
		test_cdf_swap_dir_1();
		break;
	case 2:
		test_cdf_swap_dir_2();
		break;
	case 3:
		test_cdf_swap_dir_3();
		break;
	default:
		abnormal_cdf_swap_dir_case(caseIndex);
		break;
	}

	test_cdf_swap_dir_down();
}

