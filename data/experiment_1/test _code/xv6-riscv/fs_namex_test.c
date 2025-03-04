void test_namex_up(void);
void test_namex_down(void);


void test_namex_up(void){

	aunit_printf("\n##FUNCTION_START_namex\n");
 }

void test_namex_down(void){
	aunit_printf("\n##FUNCTION_END_namex\n");
 }



void abnormal_namex_case(int index);

void abnormal_namex_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_namex_8(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	char *path;
	int nameiparent;
	char *name;

	//声明返回值局部变量，若为基本类型赋默认值
	struct inode *returnValue = 0;

	//值序列相关
	char *valueList_0[]={(char *)"/notdir"};
	unsigned int listLength_0=1;
	int valueList_1[]={0};
	unsigned int listLength_1=1;
	char *valueList_2[]={(char *)"notdir"};
	unsigned int listLength_2=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=8;
	//初始化各桩函数调用计数器
	iunlockput_call_counter = 0;
	skipelem_call_counter = 0;
	iput_call_counter = 0;
	idup_call_counter = 0;
	iunlock_call_counter = 0;
	iget_call_counter = 0;
	ilock_call_counter = 0;
	myproc_call_counter = 0;
	dirlookup_call_counter = 0;

	aunit_printf("###TEST_TREE_test_namex_8,false,0\n");
	aunit_printf("#CASE_START_test_namex_8\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			path=(char *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			nameiparent=(int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			name=(char *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		returnValue = namex(path,nameiparent,name);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_LONG("namex","returnValue",0,returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("iunlockput","iunlockput_call_counter",iunlockput_call_counter)
	OB_INT_EXPR("skipelem","skipelem_call_counter",skipelem_call_counter)
	OB_INT_EXPR("iput","iput_call_counter",iput_call_counter)
	OB_INT_EXPR("idup","idup_call_counter",idup_call_counter)
	OB_INT_EXPR("iunlock","iunlock_call_counter",iunlock_call_counter)
	OB_INT_EXPR("iget","iget_call_counter",iget_call_counter)
	OB_INT_EXPR("ilock","ilock_call_counter",ilock_call_counter)
	OB_INT_EXPR("myproc","myproc_call_counter",myproc_call_counter)
	OB_INT_EXPR("dirlookup","dirlookup_call_counter",dirlookup_call_counter)

	aunit_printf("#CASE_END_test_namex_8\n");
}

void aunit_test_func_run(int caseIndex){

	test_namex_up();

	switch(caseIndex){
	case 8:
		test_namex_8();
		break;
	default:
		abnormal_namex_case(caseIndex);
		break;
	}

	test_namex_down();
}

