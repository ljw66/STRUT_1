void test_ksw_i16_up(void);
void test_ksw_i16_down(void);


void test_ksw_i16_up(void){

	aunit_printf("\n##FUNCTION_START_ksw_i16\n");
 }

void test_ksw_i16_down(void){
	aunit_printf("\n##FUNCTION_END_ksw_i16\n");
 }



void abnormal_ksw_i16_case(int index);

void abnormal_ksw_i16_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_ksw_i16_6(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	kswq_t *q;
	int tlen;
	uint8_t *target;
	int _gapo;
	int _gape;
	int xtra;

	//声明返回值局部变量，若为基本类型赋默认值
	kswr_t returnValue;

	//值序列相关
	int valueList_0[]={1};
	unsigned int listLength_0=1;
	uint8_t *valueList_1[]={(uint8_t *)"abcdefghij"};
	unsigned int listLength_1=1;
	kswq_t *valueList_2[]={(kswq_t *)q_PTRTO};
	unsigned int listLength_2=1;
	int valueList_3[]={3};
	unsigned int listLength_3=1;
	int valueList_4[]={0x40000};
	unsigned int listLength_4=1;
	int valueList_5[]={10};
	unsigned int listLength_5=1;
	int valueList_6[]={5};
	unsigned int listLength_6=1;
	unsigned char valueList_7[]={15};
	unsigned int listLength_7=1;
	__m128i *valueList_8[]={(__m128i *)1};
	unsigned int listLength_8=1;
	__m128i *valueList_9[]={(__m128i *)1};
	unsigned int listLength_9=1;
	__m128i *valueList_10[]={(__m128i *)1};
	unsigned int listLength_10=1;
	unsigned char valueList_11[]={1};
	unsigned int listLength_11=1;
	__m128i *valueList_12[]={(__m128i *)1};
	unsigned int listLength_12=1;
	int valueList_13[]={10};
	unsigned int listLength_13=1;
	int valueList_14[]={5};
	unsigned int listLength_14=1;
	__m128i *valueList_15[]={(__m128i *)1};
	unsigned int listLength_15=1;
	unsigned char valueList_16[]={2};
	unsigned int listLength_16=1;
	unsigned char valueList_17[]={20};
	unsigned int listLength_17=1;
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
	unsigned char useLast_14=0;
	unsigned char useLast_15=0;
	unsigned char useLast_16=0;
	unsigned char useLast_17=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=6;
	//初始化各桩函数调用计数器
	_mm_set1_epi16_call_counter = 0;
	__builtin_ia32_psrldqi128_call_counter = 0;
	_mm_movemask_epi8_call_counter = 0;
	realloc_call_counter = 0;
	_mm_load_si128_call_counter = 0;
	__builtin_ia32_pslldqi128_call_counter = 0;
	_mm_max_epi16_call_counter = 0;
	_mm_cmpgt_epi16_call_counter = 0;
	__builtin_ia32_vec_ext_v8hi_call_counter = 0;
	_mm_adds_epi16_call_counter = 0;
	free_call_counter = 0;
	_mm_set1_epi32_call_counter = 0;
	_mm_store_si128_call_counter = 0;
	_mm_subs_epu16_call_counter = 0;

	aunit_printf("###TEST_TREE_test_ksw_i16_6,false,0\n");
	aunit_printf("#CASE_START_test_ksw_i16_6\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			_gape=(int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			target=(uint8_t *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			q=(kswq_t *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			_gapo=(int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			xtra=(int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			tlen=(int)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			g_defr.score=(int)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			(q_PTRTO[0]).max=(unsigned char)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		if(aUnItCoUnTeR<listLength_8 || useLast_8){
			(q_PTRTO[0]).Hmax=(__m128i *)valueList_8[aUnItCoUnTeR<listLength_8?aUnItCoUnTeR:listLength_8-1];

		}
		if(aUnItCoUnTeR<listLength_9 || useLast_9){
			(q_PTRTO[0]).H1=(__m128i *)valueList_9[aUnItCoUnTeR<listLength_9?aUnItCoUnTeR:listLength_9-1];

		}
		if(aUnItCoUnTeR<listLength_10 || useLast_10){
			(q_PTRTO[0]).E=(__m128i *)valueList_10[aUnItCoUnTeR<listLength_10?aUnItCoUnTeR:listLength_10-1];

		}
		if(aUnItCoUnTeR<listLength_11 || useLast_11){
			(q_PTRTO[0]).mdiff=(unsigned char)valueList_11[aUnItCoUnTeR<listLength_11?aUnItCoUnTeR:listLength_11-1];

		}
		if(aUnItCoUnTeR<listLength_12 || useLast_12){
			(q_PTRTO[0]).H0=(__m128i *)valueList_12[aUnItCoUnTeR<listLength_12?aUnItCoUnTeR:listLength_12-1];

		}
		if(aUnItCoUnTeR<listLength_13 || useLast_13){
			(q_PTRTO[0]).qlen=(int)valueList_13[aUnItCoUnTeR<listLength_13?aUnItCoUnTeR:listLength_13-1];

		}
		if(aUnItCoUnTeR<listLength_14 || useLast_14){
			(q_PTRTO[0]).slen=(int)valueList_14[aUnItCoUnTeR<listLength_14?aUnItCoUnTeR:listLength_14-1];

		}
		if(aUnItCoUnTeR<listLength_15 || useLast_15){
			(q_PTRTO[0]).qp=(__m128i *)valueList_15[aUnItCoUnTeR<listLength_15?aUnItCoUnTeR:listLength_15-1];

		}
		if(aUnItCoUnTeR<listLength_16 || useLast_16){
			(q_PTRTO[0]).shift=(unsigned char)valueList_16[aUnItCoUnTeR<listLength_16?aUnItCoUnTeR:listLength_16-1];

		}
		if(aUnItCoUnTeR<listLength_17 || useLast_17){
			(q_PTRTO[0]).size=(unsigned char)valueList_17[aUnItCoUnTeR<listLength_17?aUnItCoUnTeR:listLength_17-1];

		}
		returnValue = ksw_i16(q,tlen,target,_gapo,_gape,xtra);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("ksw_i16","g_defr.score",5,g_defr.score)
	TEST_ASSERT_EQUAL_INT("ksw_i16","returnValue.score",0,returnValue.score)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("_mm_set1_epi16","_mm_set1_epi16_call_counter",_mm_set1_epi16_call_counter)
	OB_INT_EXPR("__builtin_ia32_psrldqi128","__builtin_ia32_psrldqi128_call_counter",__builtin_ia32_psrldqi128_call_counter)
	OB_INT_EXPR("_mm_movemask_epi8","_mm_movemask_epi8_call_counter",_mm_movemask_epi8_call_counter)
	OB_INT_EXPR("realloc","realloc_call_counter",realloc_call_counter)
	OB_INT_EXPR("_mm_load_si128","_mm_load_si128_call_counter",_mm_load_si128_call_counter)
	OB_INT_EXPR("__builtin_ia32_pslldqi128","__builtin_ia32_pslldqi128_call_counter",__builtin_ia32_pslldqi128_call_counter)
	OB_INT_EXPR("_mm_max_epi16","_mm_max_epi16_call_counter",_mm_max_epi16_call_counter)
	OB_INT_EXPR("_mm_cmpgt_epi16","_mm_cmpgt_epi16_call_counter",_mm_cmpgt_epi16_call_counter)
	OB_INT_EXPR("__builtin_ia32_vec_ext_v8hi","__builtin_ia32_vec_ext_v8hi_call_counter",__builtin_ia32_vec_ext_v8hi_call_counter)
	OB_INT_EXPR("_mm_adds_epi16","_mm_adds_epi16_call_counter",_mm_adds_epi16_call_counter)
	OB_INT_EXPR("free","free_call_counter",free_call_counter)
	OB_INT_EXPR("_mm_set1_epi32","_mm_set1_epi32_call_counter",_mm_set1_epi32_call_counter)
	OB_INT_EXPR("_mm_store_si128","_mm_store_si128_call_counter",_mm_store_si128_call_counter)
	OB_INT_EXPR("_mm_subs_epu16","_mm_subs_epu16_call_counter",_mm_subs_epu16_call_counter)

	aunit_printf("#CASE_END_test_ksw_i16_6\n");
}

void aunit_test_func_run(int caseIndex){

	test_ksw_i16_up();

	switch(caseIndex){
	case 6:
		test_ksw_i16_6();
		break;
	default:
		abnormal_ksw_i16_case(caseIndex);
		break;
	}

	test_ksw_i16_down();
}

