void test_file_magicfind_up(void);
void test_file_magicfind_down(void);


void test_file_magicfind_up(void){

	aunit_printf("\n##FUNCTION_START_file_magicfind\n");
 }

void test_file_magicfind_down(void){
	aunit_printf("\n##FUNCTION_END_file_magicfind\n");
 }



void abnormal_file_magicfind_case(int index);

void abnormal_file_magicfind_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_file_magicfind_5(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	struct magic_set *ms;
	char *name;
	struct mlist *v;

	//声明返回值局部变量，若为基本类型赋默认值
	int returnValue = 0;

	//值序列相关
	struct magic_set *valueList_0[]={(struct magic_set *)ms_PTRTO};
	unsigned int listLength_0=1;
	struct mlist *valueList_1[]={(struct mlist *)v_PTRTO};
	unsigned int listLength_1=1;
	char *valueList_2[]={(char *)"xyz"};
	unsigned int listLength_2=1;
	unsigned int valueList_3[]={0};
	unsigned int listLength_3=1;
	struct mlist *valueList_4[]={(struct mlist *)0};
	unsigned int listLength_4=1;
	struct mlist *valueList_5[]={(struct mlist *)&ms_mlist};
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
	case_id=5;
	//初始化各桩函数调用计数器
	strcmp_call_counter = 0;
	parse_apple_call_counter = 0;
	parse_strength_call_counter = 0;
	parse_ext_call_counter = 0;
	parse_mime_call_counter = 0;

	aunit_printf("###TEST_TREE_test_file_magicfind_5,false,0\n");
	aunit_printf("#CASE_START_test_file_magicfind_5\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			ms=(struct magic_set *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			v=(struct mlist *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			name=(char *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			(v_PTRTO[0]).nmagic=(unsigned int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			((ms_PTRTO[0]).mlist)[1]=(struct mlist *)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			((ms_PTRTO[0]).mlist)[0]=(struct mlist *)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		returnValue = file_magicfind(ms,name,v);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("file_magicfind","returnValue",0,returnValue)
	TEST_ASSERT_EQUAL_UNSIGNED_INT("file_magicfind","v->nmagic",1,v->nmagic)
	TEST_ASSERT_EQUAL_LONG("file_magicfind","v->magic_rxcomp","&mlist1.magic_rxcomp[0]",v->magic_rxcomp)
	TEST_ASSERT_EQUAL_LONG("file_magicfind","v->magic","&magic_array[0]",v->magic)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("strcmp","strcmp_call_counter",strcmp_call_counter)
	OB_INT_EXPR("parse_apple","parse_apple_call_counter",parse_apple_call_counter)
	OB_INT_EXPR("parse_strength","parse_strength_call_counter",parse_strength_call_counter)
	OB_INT_EXPR("parse_ext","parse_ext_call_counter",parse_ext_call_counter)
	OB_INT_EXPR("parse_mime","parse_mime_call_counter",parse_mime_call_counter)

	aunit_printf("#CASE_END_test_file_magicfind_5\n");
}

void aunit_test_func_run(int caseIndex){

	test_file_magicfind_up();

	switch(caseIndex){
	case 5:
		test_file_magicfind_5();
		break;
	default:
		abnormal_file_magicfind_case(caseIndex);
		break;
	}

	test_file_magicfind_down();
}

