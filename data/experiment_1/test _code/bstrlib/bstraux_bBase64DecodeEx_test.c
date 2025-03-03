void test_bBase64DecodeEx_up(void);
void test_bBase64DecodeEx_down(void);


void test_bBase64DecodeEx_up(void){

	aunit_printf("\n##FUNCTION_START_bBase64DecodeEx\n");
 }

void test_bBase64DecodeEx_down(void){
	aunit_printf("\n##FUNCTION_END_bBase64DecodeEx\n");
 }



void abnormal_bBase64DecodeEx_case(int index);

void abnormal_bBase64DecodeEx_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_bBase64DecodeEx_13(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	struct tagbstring *b;
	int *boolTruncError;

	//声明返回值局部变量，若为基本类型赋默认值
	bstring returnValue = 0;

	//值序列相关
	struct tagbstring *valueList_0[]={(struct tagbstring *)b_PTRTO};
	unsigned int listLength_0=1;
	int *valueList_1[]={(int *)boolTruncError_PTRTO};
	unsigned int listLength_1=1;
	unsigned char *valueList_2[]={(unsigned char *)"YWJ!"};
	unsigned int listLength_2=1;
	int valueList_3[]={4};
	unsigned int listLength_3=1;
	int valueList_4[]={10};
	unsigned int listLength_4=1;
	int valueList_5[]={0};
	unsigned int listLength_5=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	unsigned char useLast_4=0;
	unsigned char useLast_5=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=13;
	//初始化各桩函数调用计数器
	bfromcstr_call_counter = 0;
	bconchar_call_counter = 0;
	base64DecodeSymbol_call_counter = 0;
	bdestroy_call_counter = 0;

	aunit_printf("###TEST_TREE_test_bBase64DecodeEx_13,false,0\n");
	aunit_printf("#CASE_START_test_bBase64DecodeEx_13\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			b=(struct tagbstring *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			boolTruncError=(int *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			(b_PTRTO[0]).data=(unsigned char *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			(b_PTRTO[0]).slen=(int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(b_PTRTO[0]).mlen=(int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			boolTruncError_PTRTO[0]=(int)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		returnValue = bBase64DecodeEx(b,boolTruncError);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_LONG("bBase64DecodeEx","returnValue",0,returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("bfromcstr","bfromcstr_call_counter",bfromcstr_call_counter)
	OB_INT_EXPR("bconchar","bconchar_call_counter",bconchar_call_counter)
	OB_INT_EXPR("base64DecodeSymbol","base64DecodeSymbol_call_counter",base64DecodeSymbol_call_counter)
	OB_INT_EXPR("bdestroy","bdestroy_call_counter",bdestroy_call_counter)

	aunit_printf("#CASE_END_test_bBase64DecodeEx_13\n");
}

void aunit_test_func_run(int caseIndex){

	test_bBase64DecodeEx_up();

	switch(caseIndex){
	case 13:
		test_bBase64DecodeEx_13();
		break;
	default:
		abnormal_bBase64DecodeEx_case(caseIndex);
		break;
	}

	test_bBase64DecodeEx_down();
}

