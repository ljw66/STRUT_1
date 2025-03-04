void test_bsUuDecodePart_up(void);
void test_bsUuDecodePart_down(void);


void test_bsUuDecodePart_up(void){

	aunit_printf("\n##FUNCTION_START_bsUuDecodePart\n");
 }

void test_bsUuDecodePart_down(void){
	aunit_printf("\n##FUNCTION_END_bsUuDecodePart\n");
 }



void abnormal_bsUuDecodePart_case(int index);

void abnormal_bsUuDecodePart_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_bsUuDecodePart_9(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	void *buff;
	unsigned int elsize;
	unsigned int nelem;
	struct bsUuCtx *parm;

	//声明返回值局部变量，若为基本类型赋默认值
	size_t returnValue = 0;

	//值序列相关
	unsigned int valueList_0[]={10};
	unsigned int listLength_0=1;
	unsigned int valueList_1[]={4};
	unsigned int listLength_1=1;
	void *valueList_2[]={(void *)"buffer"};
	unsigned int listLength_2=1;
	int valueList_3[]={50};
	unsigned int listLength_3=1;
	unsigned char *valueList_4[]={(unsigned char *)"some_data"};
	unsigned int listLength_4=1;
	int valueList_5[]={100};
	unsigned int listLength_5=1;
	unsigned char *valueList_6[]={(unsigned char *)""};
	unsigned int listLength_6=1;
	int valueList_7[]={0};
	unsigned int listLength_7=1;
	int valueList_8[]={100};
	unsigned int listLength_8=1;
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
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=9;
	//初始化各桩函数调用计数器
	binchr_call_counter = 0;
	bdelete_call_counter = 0;
	memcpy_call_counter = 0;
	bsbufflength_call_counter = 0;
	free_call_counter = 0;
	bUuDecLine_call_counter = 0;
	bdestroy_call_counter = 0;
	bsreada_call_counter = 0;

	aunit_printf("###TEST_TREE_test_bsUuDecodePart_9,false,0\n");
	aunit_printf("#CASE_START_test_bsUuDecodePart_9\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			nelem=(unsigned int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			elsize=(unsigned int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			buff=(void *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			(parm_PTRTO[0]).io.src->slen=(int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(parm_PTRTO[0]).io.src->data=(unsigned char *)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			(parm_PTRTO[0]).io.dst->mlen=(int)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			(parm_PTRTO[0]).io.dst->data=(unsigned char *)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			(parm_PTRTO[0]).io.dst->slen=(int)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		if(aUnItCoUnTeR<listLength_8 || useLast_8){
			(parm_PTRTO[0]).io.src->mlen=(int)valueList_8[aUnItCoUnTeR<listLength_8?aUnItCoUnTeR:listLength_8-1];

		}
		returnValue = bsUuDecodePart(buff,elsize,nelem,parm);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_UNSIGNED_INT("bsUuDecodePart","returnValue",0,returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("binchr","binchr_call_counter",binchr_call_counter)
	OB_INT_EXPR("bdelete","bdelete_call_counter",bdelete_call_counter)
	OB_INT_EXPR("memcpy","memcpy_call_counter",memcpy_call_counter)
	OB_INT_EXPR("bsbufflength","bsbufflength_call_counter",bsbufflength_call_counter)
	OB_INT_EXPR("free","free_call_counter",free_call_counter)
	OB_INT_EXPR("bUuDecLine","bUuDecLine_call_counter",bUuDecLine_call_counter)
	OB_INT_EXPR("bdestroy","bdestroy_call_counter",bdestroy_call_counter)
	OB_INT_EXPR("bsreada","bsreada_call_counter",bsreada_call_counter)

	aunit_printf("#CASE_END_test_bsUuDecodePart_9\n");
}

void aunit_test_func_run(int caseIndex){

	test_bsUuDecodePart_up();

	switch(caseIndex){
	case 9:
		test_bsUuDecodePart_9();
		break;
	default:
		abnormal_bsUuDecodePart_case(caseIndex);
		break;
	}

	test_bsUuDecodePart_down();
}

