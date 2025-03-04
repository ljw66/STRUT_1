void test_cdf_zero_stream_up(void);
void test_cdf_zero_stream_down(void);


void test_cdf_zero_stream_up(void){

	aunit_printf("\n##FUNCTION_START_cdf_zero_stream\n");
 }

void test_cdf_zero_stream_down(void){
	aunit_printf("\n##FUNCTION_END_cdf_zero_stream\n");
 }



void abnormal_cdf_zero_stream_case(int index);

void abnormal_cdf_zero_stream_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_cdf_zero_stream_2(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	cdf_stream_t *scn;

	//声明返回值局部变量，若为基本类型赋默认值
	int returnValue = 0;

	//值序列相关
	cdf_stream_t *valueList_0[]={(cdf_stream_t *)scn_PTRTO};
	unsigned int listLength_0=1;
	unsigned int valueList_1[]={50};
	unsigned int listLength_1=1;
	unsigned int valueList_2[]={200};
	unsigned int listLength_2=1;
	unsigned int valueList_3[]={100};
	unsigned int listLength_3=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=2;
	//初始化各桩函数调用计数器

	aunit_printf("###TEST_TREE_test_cdf_zero_stream_2,false,0\n");
	aunit_printf("#CASE_START_test_cdf_zero_stream_2\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			scn=(cdf_stream_t *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			(scn_PTRTO[0]).sst_ss=(unsigned int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			(scn_PTRTO[0]).sst_len=(unsigned int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			(scn_PTRTO[0]).sst_dirlen=(unsigned int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		returnValue = cdf_zero_stream(scn);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_UNSIGNED_INT("cdf_zero_stream","scn->sst_ss",0,scn->sst_ss)
	TEST_ASSERT_EQUAL_INT("cdf_zero_stream","returnValue",-1,returnValue)
	TEST_ASSERT_EQUAL_UNSIGNED_INT("cdf_zero_stream","scn->sst_dirlen",0,scn->sst_dirlen)
	TEST_ASSERT_EQUAL_UNSIGNED_INT("cdf_zero_stream","scn->sst_len",0,scn->sst_len)

	//预期用例中各桩函数调用次数

	aunit_printf("#CASE_END_test_cdf_zero_stream_2\n");
}

void aunit_test_func_run(int caseIndex){

	test_cdf_zero_stream_up();

	switch(caseIndex){
	case 2:
		test_cdf_zero_stream_2();
		break;
	default:
		abnormal_cdf_zero_stream_case(caseIndex);
		break;
	}

	test_cdf_zero_stream_down();
}

