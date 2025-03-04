void test_set_test_type_up(void);
void test_set_test_type_down(void);


void test_set_test_type_up(void){

	aunit_printf("\n##FUNCTION_START_set_test_type\n");
 }

void test_set_test_type_down(void){
	aunit_printf("\n##FUNCTION_END_set_test_type\n");
 }



void abnormal_set_test_type_case(int index);

void abnormal_set_test_type_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_set_test_type_9(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	struct magic *mstart;
	struct magic *m;


	//值序列相关
	struct magic *valueList_0[]={(struct magic *)m_PTRTO};
	unsigned int listLength_0=1;
	struct magic *valueList_1[]={(struct magic *)mstart_PTRTO};
	unsigned int listLength_1=1;
	unsigned short int valueList_2[]={0};
	unsigned int listLength_2=1;
	unsigned char valueList_3[]={20};
	unsigned int listLength_3=1;
	unsigned int valueList_4[]={0};
	unsigned int listLength_4=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	unsigned char useLast_4=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=9;
	//初始化各桩函数调用计数器
	parse_apple_call_counter = 0;
	parse_strength_call_counter = 0;
	parse_ext_call_counter = 0;
	parse_mime_call_counter = 0;
	file_looks_utf8_call_counter = 0;

	aunit_printf("###TEST_TREE_test_set_test_type_9,false,0\n");
	aunit_printf("#CASE_START_test_set_test_type_9\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			m=(struct magic *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			mstart=(struct magic *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			(mstart_PTRTO[0]).flag=(unsigned short int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			(m_PTRTO[0]).type=(unsigned char)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(mstart_PTRTO[0])._u._s._flags=(unsigned int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		set_test_type(mstart,m);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_UNSIGNED_SHORT("set_test_type","mstart->flag",64,mstart->flag)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("parse_apple","parse_apple_call_counter",parse_apple_call_counter)
	OB_INT_EXPR("parse_strength","parse_strength_call_counter",parse_strength_call_counter)
	OB_INT_EXPR("parse_ext","parse_ext_call_counter",parse_ext_call_counter)
	OB_INT_EXPR("parse_mime","parse_mime_call_counter",parse_mime_call_counter)
	OB_INT_EXPR("file_looks_utf8","file_looks_utf8_call_counter",file_looks_utf8_call_counter)

	aunit_printf("#CASE_END_test_set_test_type_9\n");
}

void aunit_test_func_run(int caseIndex){

	test_set_test_type_up();

	switch(caseIndex){
	case 9:
		test_set_test_type_9();
		break;
	default:
		abnormal_set_test_type_case(caseIndex);
		break;
	}

	test_set_test_type_down();
}

