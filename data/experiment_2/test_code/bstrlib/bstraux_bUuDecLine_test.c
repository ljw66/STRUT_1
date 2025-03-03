void test_bUuDecLine_up(void);
void test_bUuDecLine_down(void);


void test_bUuDecLine_up(void){

	aunit_printf("\n##FUNCTION_START_bUuDecLine\n");
 }

void test_bUuDecLine_down(void){
	aunit_printf("\n##FUNCTION_END_bUuDecLine\n");
 }



void abnormal_bUuDecLine_case(int index);

void abnormal_bUuDecLine_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_bUuDecLine_7(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	struct bUuInOut *parm;
	int ofs;
	int len;

	//声明返回值局部变量，若为基本类型赋默认值
	int returnValue = 0;

	//值序列相关
	int valueList_0[]={5};
	unsigned int listLength_0=1;
	struct bUuInOut *valueList_1[]={(struct bUuInOut *)parm_PTRTO};
	unsigned int listLength_1=1;
	int valueList_2[]={0};
	unsigned int listLength_2=1;
	int valueList_3[]={0};
	unsigned int listLength_3=1;
	int valueList_4[]={100};
	unsigned int listLength_4=1;
	int valueList_5[]={5};
	unsigned int listLength_5=1;
	unsigned char *valueList_6[]={(unsigned char *)0x21, 0x22, 0x23, 0x24, 0x25};
	unsigned int listLength_6=1;
	int valueList_7[]={100};
	unsigned int listLength_7=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	unsigned char useLast_4=0;
	unsigned char useLast_5=0;
	unsigned char useLast_6=0;
	unsigned char useLast_7=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=7;
	//初始化各桩函数调用计数器
	bcatblk_call_counter = 0;
	bconchar_call_counter = 0;
	isspace_call_counter = 0;

	aunit_printf("###TEST_TREE_test_bUuDecLine_7,false,0\n");
	aunit_printf("#CASE_START_test_bUuDecLine_7\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			len=(int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			(struct bUuInOut *)parm=(struct bUuInOut *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			ofs=(int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			(parm_PTRTO[0]).dst->slen=(int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(parm_PTRTO[0]).dst->mlen=(int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			(parm_PTRTO[0]).src->slen=(int)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			(parm_PTRTO[0]).src->data=(unsigned char *)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			(parm_PTRTO[0]).src->mlen=(int)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		returnValue = bUuDecLine(parm,ofs,len);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("bUuDecLine","returnValue",0,returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("bcatblk","bcatblk_call_counter",bcatblk_call_counter)
	OB_INT_EXPR("bconchar","bconchar_call_counter",bconchar_call_counter)
	OB_INT_EXPR("isspace","isspace_call_counter",isspace_call_counter)

	aunit_printf("#CASE_END_test_bUuDecLine_7\n");
}

void aunit_test_func_run(int caseIndex){

	test_bUuDecLine_up();

	switch(caseIndex){
	case 7:
		test_bUuDecLine_7();
		break;
	default:
		abnormal_bUuDecLine_case(caseIndex);
		break;
	}

	test_bUuDecLine_down();
}

