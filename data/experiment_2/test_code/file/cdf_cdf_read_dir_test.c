void test_cdf_read_dir_up(void);
void test_cdf_read_dir_down(void);


void test_cdf_read_dir_up(void){

	aunit_printf("\n##FUNCTION_START_cdf_read_dir\n");
 }

void test_cdf_read_dir_down(void){
	aunit_printf("\n##FUNCTION_END_cdf_read_dir\n");
 }



void abnormal_cdf_read_dir_case(int index);

void abnormal_cdf_read_dir_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_cdf_read_dir_6(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	cdf_info_t *info;
	cdf_header_t *h;
	cdf_sat_t *sat;
	cdf_dir_t *dir;

	//声明返回值局部变量，若为基本类型赋默认值
	int returnValue = 0;

	//值序列相关
	int valueList_0[]={0};
	unsigned int listLength_0=1;
	cdf_sat_t *valueList_1[]={(cdf_sat_t *)sat_PTRTO};
	unsigned int listLength_1=1;
	cdf_header_t *valueList_2[]={(cdf_header_t *)h_PTRTO};
	unsigned int listLength_2=1;
	cdf_dir_t *valueList_3[]={(cdf_dir_t *)dir_PTRTO};
	unsigned int listLength_3=1;
	cdf_info_t *valueList_4[]={(cdf_info_t *)info_PTRTO};
	unsigned int listLength_4=1;
	cdf_secid_t *valueList_5[]={(cdf_secid_t *)&sat_table};
	unsigned int listLength_5=1;
	unsigned int valueList_6[]={10};
	unsigned int listLength_6=1;
	cdf_directory_t *valueList_7[]={(cdf_directory_t *)&allocated_dir_tab};
	unsigned int listLength_7=1;
	unsigned int valueList_8[]={30};
	unsigned int listLength_8=1;
	unsigned int valueList_9[]={1024};
	unsigned int listLength_9=1;
	unsigned char *valueList_10[]={(unsigned char *)0};
	unsigned int listLength_10=1;
	unsigned short int valueList_11[]={9};
	unsigned int listLength_11=1;
	unsigned int valueList_12[]={5};
	unsigned int listLength_12=1;
	int valueList_13[]={1};
	unsigned int listLength_13=1;
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
	unsigned char useLast_11=0;
	unsigned char useLast_12=0;
	unsigned char useLast_13=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=6;
	//初始化各桩函数调用计数器
	cdf_malloc_call_counter = 0;
	cdf_swap_dir_call_counter = 0;
	cdf_count_chain_call_counter = 0;
	cdf_unpack_dir_call_counter = 0;
	cdf_read_sector_call_counter = 0;
	_cdf_tole4_call_counter = 0;
	cdf_calloc_call_counter = 0;

	aunit_printf("###TEST_TREE_test_cdf_read_dir_6,false,0\n");
	aunit_printf("#CASE_START_test_cdf_read_dir_6\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			errno=(int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			sat=(cdf_sat_t *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			h=(cdf_header_t *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			dir=(cdf_dir_t *)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			info=(cdf_info_t *)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			(sat_PTRTO[0]).sat_tab=(cdf_secid_t *)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			(sat_PTRTO[0]).sat_len=(unsigned int)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			(dir_PTRTO[0]).dir_tab=(cdf_directory_t *)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		if(aUnItCoUnTeR<listLength_8 || useLast_8){
			(dir_PTRTO[0]).dir_len=(unsigned int)valueList_8[aUnItCoUnTeR<listLength_8?aUnItCoUnTeR:listLength_8-1];

		}
		if(aUnItCoUnTeR<listLength_9 || useLast_9){
			(info_PTRTO[0]).i_len=(unsigned int)valueList_9[aUnItCoUnTeR<listLength_9?aUnItCoUnTeR:listLength_9-1];

		}
		if(aUnItCoUnTeR<listLength_10 || useLast_10){
			(info_PTRTO[0]).i_buf=(unsigned char *)valueList_10[aUnItCoUnTeR<listLength_10?aUnItCoUnTeR:listLength_10-1];

		}
		if(aUnItCoUnTeR<listLength_11 || useLast_11){
			(h_PTRTO[0]).h_sec_size_p2=(unsigned short int)valueList_11[aUnItCoUnTeR<listLength_11?aUnItCoUnTeR:listLength_11-1];

		}
		if(aUnItCoUnTeR<listLength_12 || useLast_12){
			(h_PTRTO[0]).h_secid_first_directory=(unsigned int)valueList_12[aUnItCoUnTeR<listLength_12?aUnItCoUnTeR:listLength_12-1];

		}
		if(aUnItCoUnTeR<listLength_13 || useLast_13){
			(info_PTRTO[0]).i_fd=(int)valueList_13[aUnItCoUnTeR<listLength_13?aUnItCoUnTeR:listLength_13-1];

		}
		returnValue = cdf_read_dir(info,h,sat,dir);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("cdf_read_dir","errno",0,errno)
	TEST_ASSERT_EQUAL_INT("cdf_read_dir","returnValue",-1,returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("cdf_malloc","cdf_malloc_call_counter",cdf_malloc_call_counter)
	OB_INT_EXPR("cdf_swap_dir","cdf_swap_dir_call_counter",cdf_swap_dir_call_counter)
	OB_INT_EXPR("cdf_count_chain","cdf_count_chain_call_counter",cdf_count_chain_call_counter)
	OB_INT_EXPR("cdf_unpack_dir","cdf_unpack_dir_call_counter",cdf_unpack_dir_call_counter)
	OB_INT_EXPR("cdf_read_sector","cdf_read_sector_call_counter",cdf_read_sector_call_counter)
	OB_INT_EXPR("_cdf_tole4","_cdf_tole4_call_counter",_cdf_tole4_call_counter)
	OB_INT_EXPR("cdf_calloc","cdf_calloc_call_counter",cdf_calloc_call_counter)

	aunit_printf("#CASE_END_test_cdf_read_dir_6\n");
}

void aunit_test_func_run(int caseIndex){

	test_cdf_read_dir_up();

	switch(caseIndex){
	case 6:
		test_cdf_read_dir_6();
		break;
	default:
		abnormal_cdf_read_dir_case(caseIndex);
		break;
	}

	test_cdf_read_dir_down();
}

