void test_bwsWriteBstr_up(void);
void test_bwsWriteBstr_down(void);


void test_bwsWriteBstr_up(void){

	aunit_printf("\n##FUNCTION_START_bwsWriteBstr\n");
 }

void test_bwsWriteBstr_down(void){
	aunit_printf("\n##FUNCTION_END_bwsWriteBstr\n");
 }



void abnormal_bwsWriteBstr_case(int index);

void abnormal_bwsWriteBstr_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_bwsWriteBstr_9(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	struct bwriteStream *ws;
	struct tagbstring *b;

	//声明返回值局部变量，若为基本类型赋默认值
	int returnValue = 0;

	//值序列相关
	struct tagbstring *valueList_0[]={(struct tagbstring *)b_PTRTO};
	unsigned int listLength_0=1;
	struct bwriteStream *valueList_1[]={(struct bwriteStream *)ws_PTRTO};
	unsigned int listLength_1=1;
	int valueList_2[]={5};
	unsigned int listLength_2=1;
	int valueList_3[]={3};
	unsigned int listLength_3=1;
	int valueList_4[]={10};
	unsigned int listLength_4=1;
	struct tagbstring *valueList_5[]={(struct tagbstring *)&struct_tagbstring1};
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
	case_id=9;
	//初始化各桩函数调用计数器
	bassign_call_counter = 0;
	bcatblk_call_counter = 0;
	bconcat_call_counter = 0;

	aunit_printf("###TEST_TREE_test_bwsWriteBstr_9,false,0\n");
	aunit_printf("#CASE_START_test_bwsWriteBstr_9\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			b=(struct tagbstring *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			ws=(struct bwriteStream *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			struct_tagbstring1.slen=(int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			(b_PTRTO[0]).slen=(int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(ws_PTRTO[0]).minBuffSz=(int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			(ws_PTRTO[0]).buff=(struct tagbstring *)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		returnValue = bwsWriteBstr(ws,b);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("bwsWriteBstr","returnValue",0,returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("bassign","bassign_call_counter",bassign_call_counter)
	OB_INT_EXPR("bcatblk","bcatblk_call_counter",bcatblk_call_counter)
	OB_INT_EXPR("bconcat","bconcat_call_counter",bconcat_call_counter)

	aunit_printf("#CASE_END_test_bwsWriteBstr_9\n");
}

void aunit_test_func_run(int caseIndex){

	test_bwsWriteBstr_up();

	switch(caseIndex){
	case 9:
		test_bwsWriteBstr_9();
		break;
	default:
		abnormal_bwsWriteBstr_case(caseIndex);
		break;
	}

	test_bwsWriteBstr_down();
}

