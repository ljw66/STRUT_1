void test_readsb_up(void);
void test_readsb_down(void);


void test_readsb_up(void){

	aunit_printf("\n##FUNCTION_START_readsb\n");
 }

void test_readsb_down(void){
	aunit_printf("\n##FUNCTION_END_readsb\n");
 }



void abnormal_readsb_case(int index);

void abnormal_readsb_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_readsb_1(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	int dev;
	struct superblock *sb;


	//值序列相关
	int valueList_0[]={1};
	unsigned int listLength_0=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=1;
	//初始化各桩函数调用计数器
	bread_call_counter = 0;
	memmove_call_counter = 0;
	brelse_call_counter = 0;

	aunit_printf("###TEST_TREE_test_readsb_1,false,0\n");
	aunit_printf("#CASE_START_test_readsb_1\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			dev=(int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		readsb(dev,sb);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_UNSIGNED_INT("readsb","sb->ninodes",0x4,sb->ninodes)
	TEST_ASSERT_EQUAL_UNSIGNED_INT("readsb","sb->size",0x2,sb->size)
	TEST_ASSERT_EQUAL_UNSIGNED_INT("readsb","sb->inodestart",0x7,sb->inodestart)
	TEST_ASSERT_EQUAL_UNSIGNED_INT("readsb","sb->nlog",0x5,sb->nlog)
	TEST_ASSERT_EQUAL_UNSIGNED_INT("readsb","sb->logstart",0x6,sb->logstart)
	TEST_ASSERT_EQUAL_UNSIGNED_INT("readsb","sb->bmapstart",0x8,sb->bmapstart)
	TEST_ASSERT_EQUAL_UNSIGNED_INT("readsb","sb->nblocks",0x3,sb->nblocks)
	TEST_ASSERT_EQUAL_UNSIGNED_INT("readsb","sb->magic",0x1,sb->magic)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("bread","bread_call_counter",bread_call_counter)
	OB_INT_EXPR("memmove","memmove_call_counter",memmove_call_counter)
	OB_INT_EXPR("brelse","brelse_call_counter",brelse_call_counter)

	aunit_printf("#CASE_END_test_readsb_1\n");
}

void test_readsb_2(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	int dev;
	struct superblock *sb;


	//值序列相关
	int valueList_0[]={1};
	unsigned int listLength_0=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=2;
	//初始化各桩函数调用计数器
	bread_call_counter = 0;
	memmove_call_counter = 0;
	brelse_call_counter = 0;

	aunit_printf("###TEST_TREE_test_readsb_2,false,0\n");
	aunit_printf("#CASE_START_test_readsb_2\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			dev=(int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		readsb(dev,sb);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_UNSIGNED_INT("readsb","sb->ninodes",0,sb->ninodes)
	TEST_ASSERT_EQUAL_UNSIGNED_INT("readsb","sb->size",0,sb->size)
	TEST_ASSERT_EQUAL_UNSIGNED_INT("readsb","sb->inodestart",0,sb->inodestart)
	TEST_ASSERT_EQUAL_UNSIGNED_INT("readsb","sb->nlog",0,sb->nlog)
	TEST_ASSERT_EQUAL_UNSIGNED_INT("readsb","sb->logstart",0,sb->logstart)
	TEST_ASSERT_EQUAL_UNSIGNED_INT("readsb","sb->bmapstart",0,sb->bmapstart)
	TEST_ASSERT_EQUAL_UNSIGNED_INT("readsb","sb->nblocks",0,sb->nblocks)
	TEST_ASSERT_EQUAL_UNSIGNED_INT("readsb","sb->magic",0,sb->magic)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("bread","bread_call_counter",bread_call_counter)
	OB_INT_EXPR("memmove","memmove_call_counter",memmove_call_counter)
	OB_INT_EXPR("brelse","brelse_call_counter",brelse_call_counter)

	aunit_printf("#CASE_END_test_readsb_2\n");
}

void test_readsb_3(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	int dev;
	struct superblock *sb;


	//值序列相关
	int valueList_0[]={1};
	unsigned int listLength_0=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=3;
	//初始化各桩函数调用计数器
	bread_call_counter = 0;
	memmove_call_counter = 0;
	brelse_call_counter = 0;

	aunit_printf("###TEST_TREE_test_readsb_3,false,0\n");
	aunit_printf("#CASE_START_test_readsb_3\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			dev=(int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		readsb(dev,sb);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_UNSIGNED_INT("readsb","sb->ninodes",0,sb->ninodes)
	TEST_ASSERT_EQUAL_UNSIGNED_INT("readsb","sb->size",0,sb->size)
	TEST_ASSERT_EQUAL_UNSIGNED_INT("readsb","sb->inodestart",0,sb->inodestart)
	TEST_ASSERT_EQUAL_UNSIGNED_INT("readsb","sb->nlog",0,sb->nlog)
	TEST_ASSERT_EQUAL_UNSIGNED_INT("readsb","sb->logstart",0,sb->logstart)
	TEST_ASSERT_EQUAL_UNSIGNED_INT("readsb","sb->bmapstart",0,sb->bmapstart)
	TEST_ASSERT_EQUAL_UNSIGNED_INT("readsb","sb->nblocks",0,sb->nblocks)
	TEST_ASSERT_EQUAL_UNSIGNED_INT("readsb","sb->magic",0,sb->magic)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("bread","bread_call_counter",bread_call_counter)
	OB_INT_EXPR("memmove","memmove_call_counter",memmove_call_counter)
	OB_INT_EXPR("brelse","brelse_call_counter",brelse_call_counter)

	aunit_printf("#CASE_END_test_readsb_3\n");
}

void test_readsb_4(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	int dev;
	struct superblock *sb;


	//值序列相关
	int valueList_0[]={1};
	unsigned int listLength_0=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=4;
	//初始化各桩函数调用计数器
	bread_call_counter = 0;
	memmove_call_counter = 0;
	brelse_call_counter = 0;

	aunit_printf("###TEST_TREE_test_readsb_4,false,0\n");
	aunit_printf("#CASE_START_test_readsb_4\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			dev=(int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		readsb(dev,sb);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_UNSIGNED_INT("readsb","sb->ninodes",0x4,sb->ninodes)
	TEST_ASSERT_EQUAL_UNSIGNED_INT("readsb","sb->size",0x2,sb->size)
	TEST_ASSERT_EQUAL_UNSIGNED_INT("readsb","sb->inodestart",0x7,sb->inodestart)
	TEST_ASSERT_EQUAL_UNSIGNED_INT("readsb","sb->nlog",0x5,sb->nlog)
	TEST_ASSERT_EQUAL_UNSIGNED_INT("readsb","sb->logstart",0x6,sb->logstart)
	TEST_ASSERT_EQUAL_UNSIGNED_INT("readsb","sb->bmapstart",0x8,sb->bmapstart)
	TEST_ASSERT_EQUAL_UNSIGNED_INT("readsb","sb->nblocks",0x3,sb->nblocks)
	TEST_ASSERT_EQUAL_UNSIGNED_INT("readsb","sb->magic",0x1,sb->magic)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("bread","bread_call_counter",bread_call_counter)
	OB_INT_EXPR("memmove","memmove_call_counter",memmove_call_counter)
	OB_INT_EXPR("brelse","brelse_call_counter",brelse_call_counter)

	aunit_printf("#CASE_END_test_readsb_4\n");
}

void test_readsb_5(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	int dev;
	struct superblock *sb;


	//值序列相关
	int valueList_0[]={-1};
	unsigned int listLength_0=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=5;
	//初始化各桩函数调用计数器
	bread_call_counter = 0;
	memmove_call_counter = 0;
	brelse_call_counter = 0;

	aunit_printf("###TEST_TREE_test_readsb_5,false,0\n");
	aunit_printf("#CASE_START_test_readsb_5\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			dev=(int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		readsb(dev,sb);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_UNSIGNED_INT("readsb","sb->ninodes",0,sb->ninodes)
	TEST_ASSERT_EQUAL_UNSIGNED_INT("readsb","sb->size",0,sb->size)
	TEST_ASSERT_EQUAL_UNSIGNED_INT("readsb","sb->inodestart",0,sb->inodestart)
	TEST_ASSERT_EQUAL_UNSIGNED_INT("readsb","sb->nlog",0,sb->nlog)
	TEST_ASSERT_EQUAL_UNSIGNED_INT("readsb","sb->logstart",0,sb->logstart)
	TEST_ASSERT_EQUAL_UNSIGNED_INT("readsb","sb->bmapstart",0,sb->bmapstart)
	TEST_ASSERT_EQUAL_UNSIGNED_INT("readsb","sb->nblocks",0,sb->nblocks)
	TEST_ASSERT_EQUAL_UNSIGNED_INT("readsb","sb->magic",0,sb->magic)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("bread","bread_call_counter",bread_call_counter)
	OB_INT_EXPR("memmove","memmove_call_counter",memmove_call_counter)
	OB_INT_EXPR("brelse","brelse_call_counter",brelse_call_counter)

	aunit_printf("#CASE_END_test_readsb_5\n");
}

void aunit_test_func_run(int caseIndex){

	test_readsb_up();

	switch(caseIndex){
	case 1:
		test_readsb_1();
		break;
	case 2:
		test_readsb_2();
		break;
	case 3:
		test_readsb_3();
		break;
	case 4:
		test_readsb_4();
		break;
	case 5:
		test_readsb_5();
		break;
	default:
		abnormal_readsb_case(caseIndex);
		break;
	}

	test_readsb_down();
}

