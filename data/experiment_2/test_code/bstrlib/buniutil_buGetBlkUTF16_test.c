void test_buGetBlkUTF16_up(void);
void test_buGetBlkUTF16_down(void);


void test_buGetBlkUTF16_up(void){

	aunit_printf("\n##FUNCTION_START_buGetBlkUTF16\n");
 }

void test_buGetBlkUTF16_down(void){
	aunit_printf("\n##FUNCTION_END_buGetBlkUTF16\n");
 }



void abnormal_buGetBlkUTF16_case(int index);

void abnormal_buGetBlkUTF16_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_buGetBlkUTF16_10(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	cpUcs2 *ucs2;
	int len;
	int errCh;
	struct tagbstring *bu;
	int pos;

	//声明返回值局部变量，若为基本类型赋默认值
	int returnValue = 0;

	//值序列相关
	struct tagbstring *valueList_0[]={(struct tagbstring *)bu_PTRTO};
	unsigned int listLength_0=1;
	int valueList_1[]={2};
	unsigned int listLength_1=1;
	int valueList_2[]={0};
	unsigned int listLength_2=1;
	cpUcs2 *valueList_3[]={(cpUcs2 *)ucs2_PTRTO};
	unsigned int listLength_3=1;
	int valueList_4[]={0x0041};
	unsigned int listLength_4=1;
	int valueList_5[]={10};
	unsigned int listLength_5=1;
	unsigned short int valueList_6[]={0};
	unsigned int listLength_6=1;
	unsigned short int valueList_7[]={0};
	unsigned int listLength_7=1;
	int valueList_8[]={0};
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
	case_id=10;
	//初始化各桩函数调用计数器
	utf8IteratorUninit_call_counter = 0;
	utf8IteratorGetNextCodePoint_call_counter = 0;
	utf8IteratorInit_call_counter = 0;

	aunit_printf("###TEST_TREE_test_buGetBlkUTF16_10,false,0\n");
	aunit_printf("#CASE_START_test_buGetBlkUTF16_10\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			bu=(struct tagbstring *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			len=(int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			pos=(int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			ucs2=(cpUcs2 *)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			errCh=(int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			(bu_PTRTO[0]).mlen=(int)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			ucs2_PTRTO[1]=(unsigned short int)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			ucs2_PTRTO[0]=(unsigned short int)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		if(aUnItCoUnTeR<listLength_8 || useLast_8){
			(bu_PTRTO[0]).slen=(int)valueList_8[aUnItCoUnTeR<listLength_8?aUnItCoUnTeR:listLength_8-1];

		}
		returnValue = buGetBlkUTF16(ucs2,len,errCh,bu,pos);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("buGetBlkUTF16","returnValue",-1,returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("utf8IteratorUninit","utf8IteratorUninit_call_counter",utf8IteratorUninit_call_counter)
	OB_INT_EXPR("utf8IteratorGetNextCodePoint","utf8IteratorGetNextCodePoint_call_counter",utf8IteratorGetNextCodePoint_call_counter)
	OB_INT_EXPR("utf8IteratorInit","utf8IteratorInit_call_counter",utf8IteratorInit_call_counter)

	aunit_printf("#CASE_END_test_buGetBlkUTF16_10\n");
}

void aunit_test_func_run(int caseIndex){

	test_buGetBlkUTF16_up();

	switch(caseIndex){
	case 10:
		test_buGetBlkUTF16_10();
		break;
	default:
		abnormal_buGetBlkUTF16_case(caseIndex);
		break;
	}

	test_buGetBlkUTF16_down();
}

